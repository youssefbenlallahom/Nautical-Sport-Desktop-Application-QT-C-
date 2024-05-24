#include "equipement.h"
#include<QDebug>
#include<QDebug>
#include<QSqlError>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QVBoxLayout>
equipement::equipement(int mat , QString nom  ,QString type ,QString etat , float prix  , int qte , QString dispo ,QString four )
{
    this->mateq=mat;
    this->nomeq=nom;
    this->typeeq=type;
    this->etateq=etat;
    this->prixeq=prix;
    this->qteeq=qte;
    this->dispoeq=dispo;
    this->foureq=four;

}

bool equipement::ajoutereq(){
    QSqlQuery query;
    QString res = QString::number(mateq);
    QString res1 = QString::number(prixeq);
    QString res2 = QString::number(qteeq);
    query.prepare("INSERT INTO equipement (mat,nom,type,etat,prix,qte,dispo,four) VALUES (:mateq , :nomeq , :typeeq , :etateq , :prixeq ,:qteeq ,:dispoeq ,:foureq)");
    query.bindValue(":mateq",res);
    query.bindValue(":nomeq",nomeq);
    query.bindValue(":typeeq",typeeq);
    query.bindValue(":etateq",etateq);
    query.bindValue(":prixeq",res1);
    query.bindValue(":qteeq",res2);
    query.bindValue(":dispoeq",dispoeq);
    query.bindValue(":foureq",foureq);

    return  query.exec();
}

bool equipement::supprimereq(int mateq, QSqlTableModel *model)
{
    QSqlQuery query;
    QString res = QString::number(mateq);
    query.prepare("DELETE FROM equipement WHERE mat= :mateq");
    query.bindValue(":mateq", res);
    bool deletionSuccess = query.exec();
    if (model)
    {
        model->select();
    }
    return deletionSuccess;
}

QSqlQueryModel * equipement::affichereq(){
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM equipement");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("mateq"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nomeq"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("typeeq"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("etateq"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("prixeq"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("qteeq"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("dispoeq"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("foureq"));

    return model;
}


QSqlQueryModel *equipement::sortMat()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM equipement ORDER BY mat ASC;");
    return model;
}

bool equipement::modifiereq(int mat)
{
    QSqlQuery query;
    QString res = QString::number(mat);
    QString res1 = QString::number(prixeq);
    QString res2 = QString::number(qteeq);
    query.prepare("UPDATE equipement SET nom=:nomeq, type=:typeeq, etat=:etateq, prix=:prixeq, qte=:qteeq, dispo=:dispoeq, four=:foureq WHERE mat = :mateq");
    query.bindValue(":mateq",res);
    query.bindValue(":nomeq",nomeq);
    query.bindValue(":typeeq",typeeq);
    query.bindValue(":etateq",etateq);
    query.bindValue(":prixeq",res1);
    query.bindValue(":qteeq",res2);
    query.bindValue(":dispoeq",dispoeq);
    query.bindValue(":foureq",foureq);
    qDebug() << "SQL Query: " << query.lastQuery();

        if (query.exec()) {
            qDebug() << "Modification successful!";
            return true;
        } else {
            qDebug() << "Modification failed. Error: " << query.lastError().text();
            return false;
        }
}

QList<int> equipement::getAllMatricules() {
    QList<int> matricules;
    QSqlQuery query("SELECT mat FROM equipement");
    while (query.next()) {
        matricules.append(query.value(0).toInt());
    }
    return matricules;
}
QList<QString> equipement::getAllNoms() {
    QList<QString> noms;
    QSqlQuery query("SELECT nom FROM equipement");
    while (query.next()) {
        noms.append(query.value(0).toString());
    }
    return noms;
}


equipement equipement::getEquipementByMatricule(int mat)
{    QSqlQuery query;
    query.prepare("SELECT * FROM equipement WHERE mat = :mat");
    query.bindValue(":mat", mat);

    if (query.exec() && query.next()) {
        int mat = query.value(0).toInt();
        QString nom = query.value(1).toString();
        QString type = query.value(2).toString();
        QString etat = query.value(3).toString();
        float prix = query.value(4).toFloat();
        int qte = query.value(5).toInt();
        QString dispo = query.value(6).toString();
        QString four = query.value(7).toString();

        return equipement(mat, nom, type, etat, prix, qte, dispo, four);
    } else {
        return equipement();
    }
}
equipement equipement::getEquipementByNom(QString nom) {
    QSqlQuery query;
    query.prepare("SELECT * FROM equipement WHERE nom = :nom");
    query.bindValue(":nom", nom);

    if (query.exec() && query.next()) {
        int mat = query.value(0).toInt();
        QString type = query.value(2).toString();
        QString etat = query.value(3).toString();
        float prix = query.value(4).toFloat();
        int qte = query.value(5).toInt();
        QString dispo = query.value(6).toString();
        QString four = query.value(7).toString();

        return equipement(mat, nom, type, etat, prix, qte, dispo, four);
    } else {
        return equipement();
    }
}
bool equipement::modifiereqQuantite(int mat, int newQte) {
    QSqlQuery query;
    query.prepare("UPDATE equipement SET qte = :qte WHERE mat = :mat");
    query.bindValue(":mat", mat);
    query.bindValue(":qte", newQte);

    return query.exec();
}
