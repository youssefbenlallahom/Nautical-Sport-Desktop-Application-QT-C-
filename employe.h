#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class QSqlTableModel;

class Employe
{
public:
    // Constructeurs
    Employe() {}
    Employe(int id,QString cin,QString nom, QString prenom, QString sexe, QString poste, QString image, QString email, QString mdp, QDate date, int salaire,QString uid);

    // Getters
    QString getNom() const { return nom; }
    QString getPrenom() const { return prenom; }
    QString getCin() const { return cin; }
    QString getSexe() const { return sexe; }
    QString getPoste() const { return poste; }
    QString getImage() const { return image; }
    QString getEmail() const { return email; }
    QString getMdp() const { return mdp; }
    QDate getDate() const { return date; }
    int getSalaire() const { return salaire; }

    // Setters
    void setNom(const QString &n) { nom = n; }
    void setPrenom(const QString &p) { prenom = p; }
    void setCin(QString cin) { this->cin = cin; }
    void setSexe(const QString &s) { sexe = s; }
    void setPoste(const QString &p) { poste = p; }
    void setImage(const QString &i) { image = i; }
    void setEmail(const QString &e) { email = e; }
    void setMdp(const QString &m) { mdp = m; }
    void setDate(const QDate &d) { date = d; }
    void setSalaire(int s) { salaire = s; }

    // Fonctionnalités de Base relatives
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(const QString& cin);
    QSqlQueryModel *getEmployeByCin(const QString &cin);
    int getIdByCin(const QString& cin);
    QSqlQueryModel* getEmployeById(const int &id);
    bool modifier();
    void telechargerPDF(int id);
    void on_comboBox_tri_activated(int index);
    bool verifierConnexion(const QString& email, const QString& mdp);
    QString getPost(const QString& email, const QString& mdp);
    QString getnom(const QString& email, const QString& mdp);


private:
    int id;
    QString cin;
    QString nom, prenom, sexe, poste, image, email, mdp;
    QDate date;
    QString uid;
    int salaire;

};

#endif // EMPLOYE_H
