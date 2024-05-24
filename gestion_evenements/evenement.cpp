#include "../integration_crud/gestion_evenements/evenement.h"
#include<QDebug>
#include<QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QPdfWriter>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include<QPageSize>
#include <QRegularExpression>

evenement::evenement(int id, QString nome, QString typee, QDate dated, QDate datef, int nbp, float prixe, QString descr)
{
    this->id = id;
    this->nome = nome;
    this->typee = typee;
    this->dated = dated;
    this->datef = datef;
    this->nbp = nbp;
    this->prixe = prixe;
    this->descr = descr;
}

bool evenement::ajouter_ev()
{
    QSqlQuery query;
    QString ch_prixe = QString::number(prixe);
    query.prepare("INSERT INTO evenement (id, nome, typee, dated, datef, nbp, prixe, descr) VALUES (EVENEMENT_SEQ.NEXTVAL, :nome, :typee, :dated, :datef, :nbp, :prixe, :descr)");
    query.bindValue(":nome", nome);
    query.bindValue(":typee", typee);
    query.bindValue(":dated", dated);
    query.bindValue(":datef", datef);
    query.bindValue(":nbp", nbp);
    query.bindValue(":prixe", ch_prixe);
    query.bindValue(":descr", descr);
    return query.exec();
}

QSqlQueryModel *evenement::afficher_ev()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM evenement");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nome"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Dated"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Datef"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nbp"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prixe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Descr"));
    return model;
}

bool evenement::supprimer_ev(const QString& id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM evenement WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

QSqlQueryModel *evenement::afficher_liste()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM participer");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_event"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_membre"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_event"));
    return model;
}

QSqlQueryModel *evenement::sortId_ev()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM evenement ORDER BY id ASC;");
    return model;
}

bool evenement::existe_ev()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM evenement WHERE nome = :nome AND dated = :dated AND datef = :datef ");
    query.bindValue(":nome", nome);
    query.bindValue(":dated", dated);
    query.bindValue(":datef", datef);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    }
    return false;
}

bool evenement::modifier_ev(int id)
{
    QSqlQuery query;
    QString res = QString::number(id);
    QString res1 = QString::number(nbp);
    QString res2 = QString::number(prixe);
    query.prepare("UPDATE evenement SET nome = :nome, typee = :typee, dated = :dated, datef = :datef, nbp = :nbp, prixe = :prixe, descr = :descr WHERE id = :id");
    query.bindValue(":id",res);
    query.bindValue(":nome",nome);
    query.bindValue(":typee",typee);
    query.bindValue(":dated", dated);
    query.bindValue(":datef", datef);
    query.bindValue(":nbp", res1);
    query.bindValue(":prixe", res2);
    query.bindValue(":descr", descr);
    qDebug() << "SQL Query: " << query.lastQuery();

        if (query.exec()) {
            qDebug() << "Modification successful!";
            return true;
        } else {
            qDebug() << "Modification failed. Error: " << query.lastError().text();
            return false;
        }
}

bool evenement::load_ev(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM evenement WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.first()) {
        id = query.value("id").toInt();
        nome = query.value("nome").toString();
        typee = query.value("typee").toString();
        dated = query.value("dated").toDate();
        datef = query.value("datef").toDate();
        nbp = query.value("nbp").toInt();
        prixe = query.value("prixe").toFloat();
        descr = query.value("descr").toString();
        return true;
    }
    return false;
}

QSqlQueryModel *evenement::rechercher_nom_ev(const QString &nome)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM evenement WHERE nome = :nome");
    query.bindValue(":nome", nome);
    if (query.exec()) {
        model->setQuery(query);
        return model;
    } else {
        qDebug() << "Recherche par nom échouée : " << query.lastError();
        delete model;
        return nullptr;
    }
}

QSqlQueryModel *evenement::trier_dated_ev()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM evenement ORDER BY dated ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nome"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Dated"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Datef"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nbp"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Prixe"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Descr"));
    return model;
}

QList<int> evenement::getAllIds_ev() {
    QList<int> ids;
    QSqlQuery query("SELECT id FROM evenement");
    while (query.next()) {
        ids.append(query.value(0).toInt());
    }
    return ids;
}

QList<QString> evenement::getAllNoms_ev() {
    QList<QString> noms;
    QSqlQuery query("SELECT nome FROM evenement");
    while (query.next()) {
        noms.append(query.value(0).toString());
    }
    return noms;
}

evenement evenement::getEvenementById(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM evenement WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        int id = query.value("id").toInt();
        QString nome = query.value("nome").toString();
        QString typee = query.value("typee").toString();
        QDate dated = query.value("dated").toDate();
        QDate datef = query.value("datef").toDate();
        int nbp = query.value("nbp").toInt();
        float prixe = query.value("prixe").toFloat();
        QString descr = query.value("descr").toString();
        evenement e(id, nome, typee, dated, datef, nbp, prixe, descr);
        return e;
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Aucun événement trouvé avec l'ID spécifié. Veuillez sélectionner un autre ID.", QMessageBox::Cancel);

        return evenement();
    }
}

void evenement::telecharger_PDF(int id) {
    QPdfWriter pdf("../integration_crud/import_event.pdf");
    QPainter painter(&pdf);
    pdf.setPageSize(QPageSize(QPageSize::A4));
    pdf.setPageOrientation(QPageLayout::Portrait);

    // Set background color
    painter.fillRect(QRect(0, 0, pdf.width(), pdf.height()), QColor("#0EABB8"));

    // Set font for title
    QFont titleFont("Roboto", 30, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(1400, 1400, "L'EVENEMENT");

    // Set font for content
    QFont contentFont("Roboto", 14);
    painter.setFont(contentFont);

    // Draw event information
    QSqlQuery query;
    query.prepare("SELECT  nome, typee, dated, datef, nbp, prixe, descr FROM evenement WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    if (query.next()) {
        int i = 4000; // Position verticale initiale
        int lineHeight = 900; // Hauteur de ligne

        // Draw CIN
        painter.drawText(300, i, "nome: " + query.value(0).toString());
        i += lineHeight;

        // Draw Nom
        painter.drawText(300, i, "typee: " + query.value(1).toString());
        i += lineHeight;

        // Draw Prénom
        painter.drawText(300, i, "dated " + query.value(2).toDate().toString("dd/MM/yyyy"));
        i += lineHeight;

        // Draw Sexe
        painter.drawText(300, i, "datef: " + query.value(3).toDate().toString("dd/MM/yyyy"));
        i += lineHeight;

        // Draw Poste
        painter.drawText(300, i, "nbp: " + query.value(4).toString());
        i += lineHeight;

        // Draw Email
        painter.drawText(300, i, "prixe: " + query.value(5).toString());
        i += lineHeight;

        // Draw Salaire
        painter.drawText(300, i, "descr: " + query.value(6).toString());
        i += lineHeight;

    }

    // Ajouter le logo en haut à droite
    QPixmap logo("../integration_crud/image/logo.png");
    painter.drawPixmap(pdf.width() - logo.width() - 10, 10, logo);
}


QList<evenement> evenement::getAllEvenements() {
    QList<evenement> evenements;

    // Créer une requête SQL pour récupérer tous les événements depuis la base de données
    QSqlQuery query;
    query.prepare("SELECT * FROM evenement");

    // Exécuter la requête
    if (query.exec()) {
        // Parcourir les résultats de la requête
        while (query.next()) {
            // Créer un objet evenement pour chaque ligne de résultat
            evenement event;
            event.setId(query.value("id").toInt());
            event.setNom(query.value("nome").toString());
            event.setType(query.value("typee").toString());
            event.setDated(query.value("dated").toDate());
            event.setDatef(query.value("datef").toDate());
            event.setNbp(query.value("nbp").toInt());
            event.setPrix(query.value("prixe").toFloat());
            event.setDescr(query.value("descr").toString());

            // Ajouter l'événement à la liste des événements
            evenements.append(event);
        }
    }

    return evenements;
}

bool evenement::verifier() {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM evenement WHERE datef < :currentDate");
    query.bindValue(":currentDate", QDate::currentDate());

    if (query.exec() && query.next()) {
        int lowQuantityCount = query.value(0).toInt();
        if (lowQuantityCount > 0) {
            return true; // At least one event has end date before current date
        }
    }
    return false; // In case of error or no event with end date before current date
}
