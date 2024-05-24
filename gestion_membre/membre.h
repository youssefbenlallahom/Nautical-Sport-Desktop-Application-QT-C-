#ifndef MEMBRE_H
#define MEMBRE_H
#include<QString>
#include <QSqlQuery>
#include <QObject>
#include <QWidget>
#include <QMainWindow>
#include <QSqlError>
#include<QSqlQueryModel>
#include<iostream>
#include <QDate>
#include <QBuffer>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVBoxLayout>

using namespace std;

namespace Ui {
class Membre;
}
class Membre {
    public :

        Membre();
        Membre(int,QString,QString,QString,QDate,int,QString,QString);

      // ~Membre();


        int GetCIN() { return CIN; }
        void SetCIN(int val) { CIN = val; }
        QString GetNom() { return nom; }
        void Setnom(QString val) { nom = val; }
        QString Getprenom() { return prenom; }
        void Setprenom(QString val) { prenom = val; }
        QString GetSexe() { return Sexe; }
        void SetSexe(QString val) { Sexe = val; }
        QDate GetDate_D() { return Date_D; }
        void SetDate_D(QDate val) { Date_D = val; }
        int Gettel() { return tel; }
        void Settel(int val) { tel = val; }
        QString GetEmail() { return Email; }
        void SetEmail(int val) { Email= val; }
        QString GetMDP() { return MDP; }
        void SetMDP(int val) { MDP= val; }


        //crud

        bool ajouter();
        QSqlQueryModel *afficher();
        bool supprimer(int);
        bool modifier(int);
        QList<int> getAllCINS();
        Membre getMembrebyCINS(int CIN);
         QSqlQueryModel* chercher(const QString& nom, const QString& prenom, const QString& CIN);
        static QSqlQueryModel* trie(QString croissance, QString critere);
        static void imprimer(int CIN);
        static Membre findBycode(int CIN);
        bool isValid() const;
        static QHash<QString, int> getstat();
        void telecharger_PDF(int CIN);







    protected:

    private:

        QString nom;
        QString prenom;
        QString Sexe;
        QDate Date_D;
        int tel;
        QString Email;
        QString MDP;
        int CIN;
         QMainWindow *mainwindow;
        Ui::Membre *ui;
         bool valid;



};

#endif // MEMBRE_H
