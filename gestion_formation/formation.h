#ifndef FORMATION_H
#define FORMATION_H
#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtGui>
#include <QtCore>


class formation
{public:


    formation();
    formation (int id,QString specialite,QString lieu,QDate dated,QDate datef,QString niveau,int prix);
    int get_id();
    QString get_specialite();
    QString get_lieu();
    QDate get_dated();
    QDate get_datef();
    QString get_niveau();
    int get_prix();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int id);
    bool modifier(int id, QString specialite, QString lieu, QDate dated, QDate datef, QString niveau, int prix);
    bool idExiste(int id);
    QSqlQueryModel * chercher_formation(int id);
    QSqlQueryModel * chercher_prix(int id);
    void on_PDF_clicked();
    QSqlQueryModel * afficher_f(const QDate &selectedDate);
    QSqlQueryModel * tri();
    QSqlQueryModel* tri_par_id();
    QSqlQueryModel* tri_par_prix();
    QSqlQueryModel* tri_par_dated();
    QSqlQueryModel* historique();
    QString getSpecialite() const; // Correction ici
        QString getLieu() const; // Correction ici
        QDate getDated() const; // Correction ici
        QDate getDatef() const; // Correction ici
        QString getNiveau() const; // Correction ici
        int getPrix() const; // Correction ici
        bool estModifiee() const; // Méthode pour vérifier si la formation a été modifiée
           void marquerCommeModifiee();
           QString derniereFormationSupprimee() const;
              void enregistrerDerniereFormationSupprimee(const QString &informations);


private:
    int id;
    QString specialite;
    QString lieu;
    QDate dated;
    QDate datef;
    QString niveau;
    int prix ;
    bool modifiee;
    QList<int> formationsModifiees;
};
#endif // FORMATION_H
