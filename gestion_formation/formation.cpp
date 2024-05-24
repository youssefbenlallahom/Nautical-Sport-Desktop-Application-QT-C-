#include "formation.h"
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDate>
#include <QFile>
#include <QString>


formation::formation()
{
id=0;
prix=0;
}

formation::formation(int id,QString specialite,QString lieu,QDate dated,QDate datef,QString niveau,int prix)
{
    this->id = id;
    this->specialite = specialite;
    this->lieu = lieu;
    this->dated = dated;
    this->datef = datef;
    this->niveau = niveau;
    this->prix = prix;
}

int formation::get_id(){return  id;}
QString formation::get_specialite(){return specialite;}
QString formation::get_lieu(){return lieu;}
QDate formation::get_dated(){return dated;}
QDate formation::get_datef(){return datef;}
QString formation::get_niveau(){return niveau;}
int formation::get_prix(){return prix;}

bool formation::ajouter()
{
    // Contrôle de saisie
    if (id == 0)
    {
        qDebug() << "Erreur de saisie : L'identifiant ne peut pas être 0.";
        return false;
    }

    if (specialite.isEmpty() || specialite.length() > 15)
    {
        qDebug() << "Erreur de saisie : La spécialité doit être non vide et avoir une longueur maximale de 15 caractères.";
        return false;
    }

    if (lieu.isEmpty())
    {
        qDebug() << "Erreur de saisie : Le lieu ne peut pas être vide.";
        return false;
    }

    if (dated.isNull())
    {
        qDebug() << "Erreur de saisie : La date de début ne peut pas être nulle.";
        return false;
    }

    if (datef.isNull())
    {
        qDebug() << "Erreur de saisie : La date de fin ne peut pas être nulle.";
        return false;
    }

    if (dated > datef)
    {
        qDebug() << "Erreur de saisie : La date de début doit être antérieure à la date de fin.";
        return false;
    }

    if (dated < QDate::currentDate())
    {
        qDebug() << "Erreur de saisie : La date de début doit être postérieure à la date actuelle.";
        return false;
    }

    if (niveau.isEmpty() || niveau.length() > 15)
    {
        qDebug() << "Erreur de saisie : Le niveau de formation doit être non vide et avoir une longueur maximale de 15 caractères.";
        return false;
    }

    if (prix < 20 || prix > 300)
    {
        qDebug() << "Erreur de saisie : Le prix doit être compris entre 20 et 300.";
        return false;
    }

    // Préparation de la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO FORMATION (id, specialite, lieu, dated, datef, niveau, prix) VALUES (:id, :specialite, :lieu, :dated, :datef, :niveau, :prix)");
    query.bindValue(":id", id);
    query.bindValue(":specialite", specialite);
    query.bindValue(":lieu", lieu);
    query.bindValue(":dated", dated);
    query.bindValue(":datef", datef);
    query.bindValue(":niveau", niveau);
    query.bindValue(":prix", prix);

    // Exécutez la requête seulement si la saisie est valide
    return query.exec();
}


QSqlQueryModel * formation::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from FORMATION");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("SPECIALITE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATED"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATEF"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("NIVEAU"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("PRIX"));

    return model;
}
bool formation::idExiste(int id)
{
    QSqlQuery query;
    query.prepare("SELECT id FROM FORMATION WHERE id = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        // L'ID existe dans la base de données
        return true;
    } else {
        // L'ID n'existe pas dans la base de données
        return false;
    }
}

bool formation::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM FORMATION WHERE id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

bool formation::modifier(int id, QString specialite, QString lieu, QDate dated, QDate datef, QString niveau, int prix)
{
    // Vérifier si l'ID existe avant de modifier
    if (!idExiste(id))
    {
        qDebug() << "Erreur : L'ID n'existe pas dans la base de données. Impossible de modifier.";
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE FORMATION SET specialite=:specialite, lieu=:lieu, dated=:dated, datef=:datef, niveau=:niveau, prix=:prix WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":specialite", specialite);
    query.bindValue(":lieu", lieu);
    query.bindValue(":dated", dated);
    query.bindValue(":datef", datef);
    query.bindValue(":niveau", niveau);
    query.bindValue(":prix", prix);

    return query.exec();
}

QSqlQueryModel * formation::afficher_f(const QDate  &selectedDate)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QString queryString = QString("SELECT id, specialite, lieu , dated , datef , niveau , prix FROM formation WHERE Dated = :selectedDate");
    QSqlQuery query;
    query.prepare(queryString);
    query.bindValue(":selectedDate", selectedDate);

    if (query.exec()) {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("specialite"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieu"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("dated"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("datef"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("niveau"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("prix"));
    }

    return model;
}
QSqlQueryModel* formation::tri()
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery("select * from formation ORDER BY id");

        model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));

        return model;
}
QSqlQueryModel* formation::tri_par_id()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FORMATION ORDER BY id");
    return model;
}
QSqlQueryModel* formation::tri_par_prix()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FORMATION ORDER BY prix");
    return model;
}

QSqlQueryModel* formation::tri_par_dated()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FORMATION ORDER BY dated");
    return model;
}

QSqlQueryModel * formation::chercher_formation(int id)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM FORMATION WHERE ID = :id");
    query.bindValue(":id", id);
    if (query.exec()) {
        model->setQuery(query);
        // Définir les en-têtes de colonnes si nécessaire
    }
    return model;
}


QSqlQueryModel * formation::chercher_prix(int id)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM FORMATION WHERE prix = :id");
    query.bindValue(":id", id);
    if (query.exec()) {
        model->setQuery(query);
        // Définir les en-têtes de colonnes si nécessaire
    }
    return model;
}


QSqlQueryModel* formation::historique() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT id FROM FORMATION ORDER BY date_ajout DESC");
    return model;
}
QString formation::getSpecialite() const {
    return specialite;
}

QString formation::getLieu() const {
    return lieu;
}

QDate formation::getDated() const {
    return dated;
}

QDate formation::getDatef() const {
    return datef;
}

QString formation::getNiveau() const {
    return niveau;
}

int formation::getPrix() const {
    return prix;
}



bool formation::estModifiee() const {
    return modifiee; // Renvoyer l'état de modification de la formation
}

void formation::marquerCommeModifiee() {
    modifiee = true; // Marquer la formation comme modifiée
}


/*
QString formation::derniereFormationSupprimee() const {
    QString informations;
    QFile file("derniere_formation_supprimee.dat");
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream in(&file);
        in >> informations;
        file.close();
    }
    return informations;
}


void formation::enregistrerDerniereFormationSupprimee(const formation &form) {
    QFile file("derniere_formation_supprimee.dat");
    if (file.open(QIODevice::WriteOnly)) {
        QDataStream out(&file);
        out << form;
        file.close();
    }
}
*/







QString formation::derniereFormationSupprimee() const {
    QString informations;
    QFile file("derniere_formation_supprimee.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        informations = in.readAll();
        file.close();
    }
    return informations;
}

void formation::enregistrerDerniereFormationSupprimee(const QString &informations) {
    QFile file("derniere_formation_supprimee.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << informations;
        file.close();
    }
}
