#include "abonnement.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include<QPageSize>
Abonnement::Abonnement() {
    id = 0;
    type = "";
    prix=0;
    acces = "";
    dateDebut = QDate();
    dateFin = QDate();
    id_membre=0;
}

Abonnement::Abonnement(int id, QString type,int prix, QString acces, QDate dateDebut, QDate dateFin,int id_membre) {
     this->id = id;
     this->type = type;
     this->prix = prix;
     this->acces = acces;
     this->dateDebut = dateDebut;
     this->dateFin = dateFin;
     this->id_membre = id_membre;
}

bool Abonnement::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO abonnement (ID, TYPE, PRIX, ACCES, DATE_DEBUT, DATE_FIN, ID_MEMBRE) " // Ajout de la parenthèse fermante
                  "VALUES (:id, :type, :prix, :acces, :dateDebut, :dateFin, :id_membre)");
    query.bindValue(":id", id);
    query.bindValue(":type", type);
    query.bindValue(":prix", prix);
    query.bindValue(":acces", acces);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateFin", dateFin);
    query.bindValue(":id_membre", id_membre);
    return query.exec();
}


bool Abonnement::modifierAbonnement(int id) {
    QSqlQuery query;
    query.prepare("UPDATE abonnement SET TYPE=:type, PRIX=:prix, ACCES=:acces, DATE_DEBUT=:dateDebut, DATE_FIN=:dateFin WHERE ID = :id");
    query.bindValue(":id", id);
    query.bindValue(":type",type);
    query.bindValue(":prix",prix);
    query.bindValue(":acces", acces);
    query.bindValue(":dateDebut",dateDebut );
    query.bindValue(":dateFin",dateFin );

    if (query.exec()) {
        qDebug() << "Modification réussie !";
        return true;
    } else {
        qDebug() << "Échec de la modification. Erreur : " << query.lastError().text();
        return false;
    }
}

QList<int> Abonnement::getAllIds() {
    QList<int> ids;
    QSqlQuery query("SELECT id FROM abonnement");
    while (query.next()) {
        ids.append(query.value(0).toInt());
    }
    return ids;
}
QList<int> Abonnement::getAllcin() {
    QList<int> cin;
    QSqlQuery query("SELECT CIN FROM membre");
    while (query.next()) {
        cin.append(query.value(0).toInt());
    }
    return cin;
}
Abonnement Abonnement::getAbonnementById(int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM abonnement WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        int id = query.value(0).toInt();
        QString type = query.value(1).toString();
        int prix = query.value(2).toInt();
        QString acces = query.value(3).toString();
        QDate dateDebut = QDate::fromString(query.value(4).toString());
        QDate dateFin = QDate::fromString(query.value(5).toString());
        int id_membre = query.value(6).toInt();
        return Abonnement(id, type, prix, acces, dateDebut, dateFin,id_membre);
    } else {
        return Abonnement();
    }
}
bool Abonnement::supprimer(int id) {
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("DELETE FROM Abonnement WHERE ID = :id");
    query.bindValue(":id", res);
    bool deletionSuccess = query.exec();
    return deletionSuccess;
}
QSqlQueryModel *Abonnement::afficherab() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Abonnement");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ACCES"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_FIN"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID_MEMBRE"));
    return model;
}
void Abonnement::telechargerPDF_ab(int id) {
    QPdfWriter pdf("C:/Users/mehdi/Downloads/integration_crud/abonnement.pdf");
    QPainter painter(&pdf);
    pdf.setPageSize(QPageSize(QPageSize::A4));
    pdf.setPageOrientation(QPageLayout::Portrait);

    // Set background color
    painter.fillRect(QRect(0, 0, pdf.width(), pdf.height()), QColor("#0EABB8"));

    // Set font for title
    QFont titleFont("Roboto", 30, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(1400, 1400, "PROFIL DE L'ABONNEMENT");

    // Set font for content
    QFont contentFont("Roboto", 14);
    painter.setFont(contentFont);

    // Draw abonnement information
    QSqlQuery query;
    query.prepare("SELECT ID, TYPE, PRIX, ACCES, DATE_DEBUT, DATE_FIN, ID_MEMBRE FROM abonnement WHERE ID = :id");
    query.bindValue(":id", id);
    query.exec();
    if (query.next()) {
        int i = 4000; // Initial vertical position
        int lineHeight = 900; // Line height

        // Draw ID
        painter.drawText(300, i, "ID: " + query.value(0).toString());
        i += lineHeight;

        // Draw Type
        painter.drawText(300, i, "Type: " + query.value(1).toString());
        i += lineHeight;

        // Draw Prix
        painter.drawText(300, i, "Prix: " + query.value(2).toString());
        i += lineHeight;

        // Draw Acces
        painter.drawText(300, i, "Acces: " + query.value(3).toString());
        i += lineHeight;

        // Draw Date de debut
        painter.drawText(300, i, "Date de début: " + query.value(4).toDate().toString("dd/MM/yyyy"));
        i += lineHeight;

        // Draw Date de fin
        painter.drawText(300, i, "Date de fin: " + query.value(5).toDate().toString("dd/MM/yyyy"));
        i += lineHeight;

        // Draw ID membre
        painter.drawText(300, i, "ID membre: " + query.value(6).toString());
        i += lineHeight;
    }

    // Add the logo in the top right corner
    QPixmap logo("C:/Users/mehdi/Downloads/integration_crud/image/logo.png");
    painter.drawPixmap(pdf.width() - logo.width() - 10, 10, logo);
}
QSqlQueryModel *Abonnement::trier_ab()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM abonnement ORDER BY DATE_DEBUT ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ACCES"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_DEBUT"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("DATE_FIN"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID_MEMBRE"));
    return model;
}
AbonnementInfo Abonnement::getAbonnementInfo(int idMembre) const {
    // Préparez la requête SQL pour récupérer les informations d'abonnement
    QSqlQuery query;
    query.prepare("SELECT date_fin FROM Abonnement WHERE ID_MEMBRE = :id_membre");
    query.bindValue(":id_membre", idMembre);

    // Exécutez la requête
    if (!query.exec()) {
        // Gestion de l'erreur de requête
        qDebug() << "Erreur lors de l'exécution de la requête SQL:" << query.lastError().text();
        // Retournez des informations d'abonnement par défaut ou lancez une exception
        return AbonnementInfo(); // Ou lancez une exception appropriée
    }

    // Vérifiez si des résultats ont été trouvés
    if (query.next()) {
        // Si des résultats ont été trouvés, récupérez la date de fin de l'abonnement
        QDate dateFin = query.value(0).toDate();
        // Créez et retournez un objet AbonnementInfo avec les informations récupérées
        return AbonnementInfo(dateFin);
    } else {
        // Si aucun résultat n'a été trouvé, retournez des informations d'abonnement par défaut ou lancez une exception
        return AbonnementInfo(); // Ou lancez une exception appropriée
    }
}
bool Abonnement::verifierAbonnement(const QDate& dateRecherche, int idMembre) const {
    // Récupérer les données d'abonnement de la base de données pour l'ID du membre donné
    // Supposons que vous ayez une méthode dans votre classe AbonnementManager pour récupérer les données d'abonnement
    AbonnementInfo abonnementInfo = this->getAbonnementInfo(idMembre); // Utilisation de l'objet Abonnement actuel pour appeler la méthode

    // Comparaison de la date de fin de l'abonnement avec la date de recherche
    if (abonnementInfo.getDateFin() < dateRecherche) { // Utilisation de la méthode getDateFin() pour accéder à la date de fin de l'abonnement
        return false; // L'abonnement est expiré
    } else {
        return true; // L'abonnement est actif
    }
}
