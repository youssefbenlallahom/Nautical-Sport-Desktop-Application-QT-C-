#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QVBoxLayout>
class QSqlTableModel;
class equipement
{
    QString nomeq , typeeq , etateq , foureq  , dispoeq;
    int  qteeq , mateq ;
    float prixeq ;
public:
    //constructeurs
    equipement(){};
    equipement(int , QString ,QString ,QString , float , int, QString ,QString );

    //GETTERS
    QString getnom(){return nomeq;}
    QString gettyp(){return typeeq;}
    QString getetat(){return etateq;}
    QString getfour(){return foureq;}
    QString getdispo(){return dispoeq;}
    int getqte(){return qteeq;}
    int getmat(){return mateq;}
    float getprix(){return prixeq;}

    //SETTERS
    void setnom(QString n ){nomeq = n ;}
    void settyp(QString t ){typeeq = t ;}
    void setetat(QString e ){etateq = e ;}
    void setfour(QString f ){foureq = f ;}
    void setdispo(QString d ){dispoeq = d ;}
    void setqte(int q ){qteeq = q ;}
    void setmat(int m ){mateq = m ;}
    void setprix(float p ){prixeq = p ;}

    //FONCTIONS
    bool ajoutereq();
    bool modifiereq(int mat);
    QSqlQueryModel * affichereq();
    QList<int> getAllMatricules();
    QSqlQueryModel *sortMat();
    bool supprimereq(int, QSqlTableModel *model);
    equipement getEquipementByMatricule(int mat);
    equipement getEquipementByNom(QString nom);
    QList<QString> getAllNoms();
    bool modifiereqQuantite(int mat, int newQte);

};

#endif // EQUIPEMENT_H
