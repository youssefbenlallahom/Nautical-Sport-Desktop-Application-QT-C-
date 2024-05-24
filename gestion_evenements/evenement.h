#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QList>

class evenement
{
private:
    QString nome, descr;
    QString typee;
    QDate dated, datef;
    int id, nbp;
    float prixe;

public:
    evenement() {}
    evenement(int, QString , QString , QDate , QDate , int , float , QString );

    // Getters
    int getId() const { return id; }
    QString getNom() const { return nome; }
    QString getType() const { return typee; }
    QDate getDated() const { return dated; }
    QDate getDatef() const { return datef; }
    int getNbp() const { return nbp; }
    float getPrix() const { return prixe; }
    QString getDescr() const { return descr; }

    // Setters
    void setId(int nouvelId) { id = nouvelId; }
    void setNom(const QString &nouveauNom) { nome = nouveauNom; }
    void setType(const QString &nouveauType) { typee = nouveauType; }
    void setDated(const QDate &nouvelleDated) { dated = nouvelleDated; }
    void setDatef(const QDate &nouvelleDatef) { datef = nouvelleDatef; }
    void setNbp(int nouvelNbp) { nbp = nouvelNbp; }
    void setPrix(float nouveauPrix) { prixe = nouveauPrix; }
    void setDescr(const QString &nouveauDescr) { descr = nouveauDescr; }

    // Méthodes
    bool ajouter_ev();
    QSqlQueryModel *afficher_ev();
    QSqlQueryModel *afficher_liste();
    bool supprimer_ev(const QString& id);
    bool modifier_ev(int id);
    bool existe_ev();
    bool load_ev(int id);
    QSqlQueryModel *rechercher_nom_ev(const QString &nome);
    QSqlQueryModel *trier_dated_ev();
    QList<evenement> getAllEvenements();
    evenement getEvenementById( int id);
    QList<int> getAllIds_ev();
    QList<QString> getAllNoms_ev();
    QSqlQueryModel *sortId_ev();
    void telecharger_PDF(int id);
    bool verifier();

};

#endif // EVENEMENT_H
