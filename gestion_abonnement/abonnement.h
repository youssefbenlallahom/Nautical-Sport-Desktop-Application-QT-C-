#ifndef ABONNEMENT_H
#define ABONNEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class AbonnementInfo {
public:
    AbonnementInfo() : dateFin(QDate()) {} // Constructeur par défaut
    AbonnementInfo(const QDate& dateFin) : dateFin(dateFin) {} // Constructeur avec initialisation de la date de fin

    // Méthode pour obtenir la date de fin de l'abonnement
    QDate getDateFin() const {
        return dateFin;
    }

private:
    QDate dateFin; // Date de fin de l'abonnement
};
class Abonnement {
public:
    Abonnement();
    Abonnement(int id, QString type,int prix, QString acces, QDate dateDebut, QDate dateFin,int id_membre);

    int getId() { return id; }
    void setId(int val) { id = val; }

    QString getType() { return type; }
    void setType(QString val) { type = val; }

    int getprix() { return prix; }
    void setprix(int val) { prix = val; }

    QString getAcces() { return acces; }
    void setAcces(QString val) { acces = val; }

    QDate getDateDebut() { return dateDebut; }
    void setDateDebut(QDate val) { dateDebut = val; }

    QDate getDateFin() { return dateFin; }
    void setDateFin(QDate val) { dateFin = val; }

    int getIdMembre() { return id_membre; }
    void setIdMembre(int val) { id_membre = val; }

    AbonnementInfo getInfo() const {
        return AbonnementInfo(dateFin);
    }
    AbonnementInfo getAbonnementInfo(int idMembre) const;
    // CRUD operations
    bool ajouter();
    QSqlQueryModel * afficherab();
    static bool supprimer(int id);
    bool modifierAbonnement(int id);
    QList<int> getAllIds();
    QList<int> getAllcin();
    Abonnement getAbonnementById(int id);
    void telechargerPDF_ab(int id);
    QSqlQueryModel *trier_ab();
    bool verifierAbonnement(const QDate& dateRecherche, int idMembre) const;
private:
    int id;
    QString type;
    int prix;
    QString acces;
    QDate dateDebut;
    QDate dateFin;
    int id_membre;
};

#endif // ABONNEMENT_H


