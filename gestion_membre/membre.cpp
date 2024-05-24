#include "../integration_crud/gestion_membre/membre.h"
#include <QMessageBox>
#include <QIntValidator>
#include<QStandardItemModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QLineEdit>
#include<QSqlTableModel>
#include <qsqltablemodel.h>
#include <QDialogButtonBox>
#include<QDialog>
#include<QString>
#include<QDebug>
#include<QSqlError>
#include <QMessageBox>
#include <QWidgetList>
#include <QInputDialog>
#include <QSortFilterProxyModel>
#include "QMessageBox"
#include <QVBoxLayout>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QPdfWriter>
using namespace std;
Membre::Membre() {
    // Initialize member variables
    CIN = 0;
    nom = "";
    prenom = "";
    Sexe = "";
    Date_D = QDate();
    tel = 0;
    Email = "";
    MDP = "";
}
//Membre::~Membre()
//{
//    delete ui;
//}
Membre::Membre(int CIN,QString nom,QString prenom,QString Sexe,QDate Date_D,int tel,QString Email,QString MDP){

    this->CIN=CIN;
    this->nom=nom;
    this->prenom=prenom;
    this->Sexe=Sexe;
    this->Date_D=Date_D;
    this->tel=tel;
    this->Email=Email;
     this->MDP=MDP;
}

bool Membre::ajouter(){
    QSqlQuery query;


    query.prepare("insert into Membre(CIN,nom,prenom,Sexe,Date_D,tel,Email,MDP)""values(:CIN,:nom,:prenom,:Sexe,:Date_D,:tel,:Email,:MDP)");
query.bindValue(":CIN",CIN);
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);
query.bindValue(":Sexe",Sexe);
query.bindValue(":Date_D",Date_D);
query.bindValue(":tel",tel);
query.bindValue(":Email",Email);
query.bindValue(":MDP",MDP);
return query.exec();
}
bool Membre::supprimer(int CIN){
QSqlQuery query;
query.prepare("Delete from Membre where  CIN=:CIN ");
query.bindValue(":CIN",CIN);
if (query.exec())
    {
        if (query.numRowsAffected() > 0)
            return true;
    }
    return false;
}
QSqlQueryModel *Membre::afficher(){

QSqlQueryModel *model=new QSqlQueryModel();
model->setQuery("select * from Membre");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Sexe"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("Date_D"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("tel"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("Email"));
model->setHeaderData(7,Qt::Horizontal,QObject::tr("MDP"));
return model;
}
bool Membre::modifier(int CIN)
{
    QSqlQuery query;
    query.prepare("UPDATE Membre SET CIN=:CIN , nom=:nom , prenom= :prenom , Sexe= :Sexe, Date_D= :Date_D, tel=:tel, Email= :Email ,MDP=:MDP WHERE CIN=:CIN");

    query.bindValue(":CIN",CIN);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":Sexe",Sexe);
    query.bindValue(":Date_D",Date_D);
    query.bindValue(":tel",tel);
    query.bindValue(":Email",Email);
    query.bindValue(":MDP",MDP);

    return query.exec();
}

    QList<int> Membre::getAllCINS(){
    QList<int> cins;
    QSqlQuery query("SELECT CIN FROM MEMBRE");
    while (query.next()) {
        cins.append(query.value(0).toInt());
    }
    return cins;
}

    Membre Membre::getMembrebyCINS(int CIN)
    {    QSqlQuery query;
        query.prepare("SELECT * FROM MEMBRE WHERE CIN = :CIN");
        query.bindValue(":CIN", CIN);

        if (query.exec() && query.next()) {
            int CIN = query.value(0).toInt();
            QString nom = query.value(1).toString();
            QString prenom = query.value(2).toString();
            QString Sexe = query.value(3).toString();
            QDate Date_D = query.value(4).toDate();
            int tel = query.value(5).toInt();
            QString Email = query.value(6).toString();
            QString MDP = query.value(7).toString();

            return Membre(CIN, nom,prenom, Sexe, Date_D, tel, Email, MDP);
        } else {
            return Membre();
        }
    }

    QSqlQueryModel* Membre::chercher(const QString& nom, const QString& prenom, const QString& CIN) {
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("SELECT * FROM MEMBRE WHERE CIN=:CIN OR nom=:nom OR prenom=:prenom");
        query.bindValue(":CIN",CIN);
         query.bindValue(":nom",nom);
          query.bindValue(":prenom",prenom);

        if (query.exec()) {
            model->setQuery(query);
            return model;
        } else {
            delete model; // Clear memory if an error occurs
            return nullptr;
        }
    }

    QSqlQueryModel* Membre::trie(QString croissance, QString critere)
    {
        QSqlQueryModel* modal = new QSqlQueryModel();
        QSqlQuery query;

        QString sqlQuery = "SELECT * FROM MEMBRE ORDER BY %1 %2";
        sqlQuery = sqlQuery.arg(critere).arg(croissance);

        query.prepare(sqlQuery);
        if (query.exec()) {
            modal->setQuery(query);
        }

        return modal;
    }

    Membre Membre::findBycode(int CIN)
    {
        QSqlQuery q;
        q.prepare("SELECT * FROM MEMBRE WHERE CIN = :CIN");
        q.bindValue(":CIN", CIN);

        if (q.exec() && q.next()) {
            int CIN = q.value(0).toInt();
            QString nom = q.value(1).toString();
            QString prenom = q.value(2).toString();
            QString Sexe = q.value(3).toString();
            QDate Date_D = q.value(4).toDate();
            int tel = q.value(5).toInt();
            QString Email = q.value(6).toString();
            QString MDP = q.value(7).toString();

            return Membre(CIN, nom, prenom, Sexe, Date_D, tel, Email, MDP);
        }
        return Membre(); // Return an empty Membre object
        }




    /*void Membre::imprimer(int CIN)
    {
        QString nom;
        int y0 = 2000;
        Membre Mtmp = findBycode(CIN);

        if (!Mtmp.isValid()) {
            qDebug() << "Error: Member details not found for CIN" << CIN;
            return;
        }

        QString pdfFileName = QString::number(Mtmp.GetCIN()) + "_" + Mtmp.GetNom() + "_" + QString::number(Mtmp.Gettel()) + ".pdf";

        QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setFullPage(QPrinter::A4);
        printer.setOutputFileName(pdfFileName);

        QPainter painter(&printer);
        painter.setFont(QFont("Verdana", 30));
        painter.drawText(200, 1000, "Fiche d'un membre ");
        painter.setFont(QFont("Verdana", 12));
                y0 += 250;
                painter.drawText(400, y0, "vous etes les bienvenues dans  : AQUAHUB");

                y0 += 500;

                QFont titleFont("Verdana", 12, QFont::Bold);
                titleFont.setUnderline(true);
                titleFont.setCapitalization(QFont::AllUppercase);
                painter.setFont(titleFont);

                painter.setPen(QColor(Qt::darkRed)); // Set color to dark blue

                QStringList subtitles = {
                    "CIN",
                    "NOM",
                    "PRENOM",
                    "SEXE",
                    "Date"
                    "TELEPHONE",
                    "EMAIL",
                    "MDP",
                };

                QStringList contents = {
                    QString::number(Mtmp.GetCIN()),
                    Mtmp.GetNom(),
                    Mtmp.Getprenom(),
                    Mtmp.GetSexe(),
                    Mtmp.GetDate_D().toString("yyyy-MM-dd"), // Assuming GetDate_D() returns QDate
                    QString::number(Mtmp.Gettel()),
                    Mtmp.GetEmail(),
                    Mtmp.GetMDP()
                };


                for (int i = 0; i < subtitles.size(); ++i)
                {
                    painter.drawText(400, y0, subtitles[i] + " :");
                    painter.setFont(QFont("Verdana", 12)); // Set content font to normal
                    painter.drawText(4000, y0, contents[i]);
                    painter.setFont(titleFont); // Reset font to subtitle style
                    y0 += 250;
                }

                painter.end();
            }

    QHash<QString, int> Membre::getstat()
    {
        QHash<QString, int> getstat;

        Membre membreInstance;
        QSqlQueryModel* model = membreInstance.afficher();

        // Calculez l'âge de chaque membre et mettez à jour la répartition par âge
        QDate currentDate = QDate::currentDate();
        for (int row = 0; row < model->rowCount(); ++row) {
            QDate Date_D = model->data(model->index(row, 4)).toDate(); // Supposons que la date de naissance est dans la colonne 4

            // Calculez l'âge du membre
            int age = Date_D.daysTo(currentDate) / 365; // Approximation de l'âge en années

            // Classifiez l'âge dans des groupes
            QString ageGroup;
            if (age < 25) {
                ageGroup = "jeune";
            } else if (age >= 25 && age <= 60) {
                ageGroup = "adulte";
            } else {
                ageGroup = "âgé";
            }

            // Mettez à jour la répartition par âge
            if (getstat.contains(ageGroup)) {
                getstat[ageGroup]++;
            } else {
                getstat[ageGroup] = 1;
            }
        }
        return getstat;
    }*/
    void Membre::telecharger_PDF(int CIN) {
        QPdfWriter pdf("../integration_crud/import_membre.pdf");
        QPainter painter(&pdf);
        pdf.setPageSize(QPageSize(QPageSize::A4));
        pdf.setPageOrientation(QPageLayout::Portrait);

        // Set background color
        painter.fillRect(QRect(0, 0, pdf.width(), pdf.height()), QColor("#0EABB8"));

        // Set font for title
        QFont titleFont("Roboto", 30, QFont::Bold);
        painter.setFont(titleFont);
        painter.drawText(1400, 1400, "Le membre:");

        // Set font for content
        QFont contentFont("Roboto", 14);
        painter.setFont(contentFont);

        // Draw event information
        QSqlQuery query;
        query.prepare("SELECT  nom, prenom,Sexe, date_d, tel, email, MDP  FROM MEMBRE WHERE CIN = :CIN");
        query.bindValue(":CIN", CIN);
        query.exec();
        if (query.next()) {
            int i = 4000; // Position verticale initiale
            int lineHeight = 900; // Hauteur de ligne

            // Draw CIN
            painter.drawText(300, i, "nom " + query.value(0).toString());
            i += lineHeight;

            // Draw Nom
            painter.drawText(300, i, "prenom: " + query.value(1).toString());
            i += lineHeight;

            // Draw Prénom
            painter.drawText(300, i, "Sexe " + query.value(2).toString());
            i += lineHeight;

            // Draw Sexe
            painter.drawText(300, i, "date_d: " + query.value(3).toDate().toString("dd/MM/yyyy"));
            i += lineHeight;

            // Draw Poste
            painter.drawText(300, i, "tel: " + query.value(4).toString());
            i += lineHeight;

            // Draw Email
            painter.drawText(300, i, "email: " + query.value(5).toString());
            i += lineHeight;

            // Draw Salaire
            painter.drawText(300, i, "MDP: " + query.value(6).toString());
            i += lineHeight;

        }

        // Ajouter le logo en haut à droite
        QPixmap logo("../integration_crud/image/logo.png");
        painter.drawPixmap(pdf.width() - logo.width() - 10, 10, logo);
    }
