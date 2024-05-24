#include "employe.h"
#include<QDebug>
#include<QDebug>
#include<QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QPdfWriter>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include<QPageSize>
#include<QRegularExpression>
Employe::Employe(int id,QString cin, QString nom, QString prenom, QString sexe, QString poste, QString image, QString email, QString mdp, QDate date, int salaire, QString uid)
    : id(id),cin(cin), nom(nom), prenom(prenom), sexe(sexe), poste(poste), image(image), email(email), mdp(mdp), date(date), salaire(salaire), uid(uid)
{
    // Initialisation des membres de la classe...
}
bool Employe::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO employe (id_employe,cin, nom, prenom, sexe, poste, image, email, mdp, date_naissance, salaire,uid_emp) "
                  "VALUES (employe_seq.NEXTVAL,:cin, :nom, :prenom, :sexe, :poste, :image, :email, :mdp, :date_naissance, :salaire, :uid)");
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":sexe", sexe);
    query.bindValue(":poste", poste);
    query.bindValue(":image", image);
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    query.bindValue(":date_naissance",date); // Format de date SQL
    query.bindValue(":salaire", QString::number(salaire));
    query.bindValue(":uid", uid);

    if (query.exec())
        return true;
    else
        return false;
}

QSqlQueryModel* Employe::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT id_employe, cin, nom, prenom, sexe, poste, image, email, mdp, date_naissance, salaire,uid_emp FROM employe");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EMPLOYE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Sexe"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Poste"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Image"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("Mot de passe"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("Date de naissance"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("UID"));
    return model;
}

bool Employe::supprimer(const QString& cin)
{
    QSqlQuery query;
    query.prepare("DELETE FROM employe WHERE id_employe = :id");
    query.bindValue(":id", cin);
    return query.exec();
}

bool Employe::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE employe SET cin =:cin ,NOM = :nouveauNom, PRENOM = :nouveauPrenom, SEXE = :nouveauSexe, POSTE = :nouveauPoste, IMAGE = :nouvelleImage, EMAIL = :nouvelEmail, MDP = :nouveauMdp, DATE_NAISSANCE = :nouvelleDate, SALAIRE = :nouveauSalaire ,UID_EMP = :uid WHERE ID_EMPLOYE = :id");
    query.bindValue(":nouveauNom", nom);
    query.bindValue(":nouveauPrenom", prenom);
    query.bindValue(":nouveauSexe", sexe);
    query.bindValue(":nouveauPoste", poste);
    query.bindValue(":nouvelleImage", image);
    query.bindValue(":nouvelEmail", email);
    query.bindValue(":nouveauMdp", mdp);
    query.bindValue(":nouvelleDate", date);
    query.bindValue(":nouveauSalaire", salaire);
    query.bindValue(":cin", cin);
    query.bindValue(":uid", uid);
    query.bindValue(":id", id);

    return query.exec();
}



QSqlQueryModel* Employe::getEmployeById(const int &id) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM employe WHERE id_employe = :id");
    query.bindValue(":id", id);
    query.exec();
    model->setQuery(query);
    return model;
}

QSqlQueryModel* Employe::getEmployeByCin(const QString &cin) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM employe WHERE cin = :cin");
    query.bindValue(":cin", cin);
    query.exec();
    model->setQuery(query);
    return model;
}

int Employe::getIdByCin(const QString& cin)
{
    QSqlQuery query;
    query.prepare("SELECT id_employe FROM employe WHERE cin = :cin");
    query.bindValue(":cin", cin);
    if (!query.exec() || !query.first()) {
        return -1; // Retourner une valeur par défaut pour indiquer une erreur ou une non-trouvabilité
    }

    return query.value(0).toInt();
}

void Employe::telechargerPDF(int id) {
    QPdfWriter pdf("C:/Users/youssef/Desktop/integration_crud/import.pdf");
    QPainter painter(&pdf);
    pdf.setPageSize(QPageSize(QPageSize::A4));
    pdf.setPageOrientation(QPageLayout::Portrait);

    // Set background color
    painter.fillRect(QRect(0, 0, pdf.width(), pdf.height()), QColor("#B6E5E9"));

    // Set font for title
    QFont titleFont("Arial", 30, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(1400, 1400, "PROFIL DE L'EMPLOYÉ");

    // Set font for content
    QFont contentFont("Times New Roman", 14);
    painter.setFont(contentFont);

    // Draw employee information
    QSqlQuery query;
    query.prepare("SELECT cin, nom, prenom, sexe, poste, email, date_naissance, salaire, image FROM employe WHERE id_employe = :id");
    query.bindValue(":id", id);
    query.exec();
    if (query.next()) {
        int i = 4000;
        int lineHeight = 900; // Hauteur de ligne

        // Draw CIN
        painter.drawText(300, i, "CIN: " + query.value(0).toString());
        i += lineHeight;

        // Draw Nom
        painter.drawText(300, i, "Nom: " + query.value(1).toString());
        i += lineHeight;

        // Draw Prénom
        painter.drawText(300, i, "Prénom: " + query.value(2).toString());
        i += lineHeight;

        // Draw Sexe
        painter.drawText(300, i, "Sexe: " + query.value(3).toString());
        i += lineHeight;

        // Draw Poste
        painter.drawText(300, i, "Poste: " + query.value(4).toString());
        i += lineHeight;

        // Draw Email
        painter.drawText(300, i, "Email: " + query.value(5).toString());
        i += lineHeight;

        // Draw Date de naissance
        painter.drawText(300, i, "Date de naissance: " + query.value(6).toDate().toString("dd/MM/yyyy"));
        i += lineHeight;

        // Draw Salaire
        painter.drawText(300, i, "Salaire: " + query.value(7).toString());
        i += lineHeight;

        // Draw image
        QString imagePath = query.value(8).toString();
            if (!imagePath.isEmpty()) {
                QImage image(imagePath);
                if (!image.isNull()) {
                    QRectF target(pdf.width()-3500, 3000, 2500, 2500); // Position and size of the image in the PDF
                    painter.drawImage(target, image);
                }
            }
    }

    // Ajouter le logo en haut à droite
    QPixmap logo("C:/Users/youssef/Desktop/integration_crud/image/logo.png");
    painter.drawPixmap(pdf.width() - logo.width() - 10, 10, logo);
}
QString Employe::getPost(const QString& email, const QString& mdp)
{
    QSqlQuery query;
    query.prepare("SELECT poste FROM employe WHERE email = :email AND mdp = :mdp");
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    if (!query.exec() || !query.first()) {
        return ""; // Retourner une valeur par défaut pour indiquer une erreur ou une non-trouvabilité
    }
    return query.value(0).toString();
}
QString Employe::getnom(const QString& email, const QString& mdp)
{
    QSqlQuery query;
    query.prepare("SELECT prenom FROM employe WHERE email = :email AND mdp = :mdp");
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    if (!query.exec() || !query.first()) {
        return ""; // Retourner une valeur par défaut pour indiquer une erreur ou une non-trouvabilité
    }
    return query.value(0).toString();
}
bool Employe::verifierConnexion(const QString& email, const QString& mdp)
{
    QSqlQuery query;
    query.prepare("SELECT id_employe FROM employe WHERE email = :email AND mdp = :mdp");
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    if (query.exec() && query.first()) {
        return true; // Retourne l'ID de l'employé si les informations sont correctes
    } else {
        qDebug() << "Erreur lors de la vérification de l'identifiant de connexion :" << query.lastError().text();
        return false; // Retourne -1 si les informations sont incorrectes
    }
}



