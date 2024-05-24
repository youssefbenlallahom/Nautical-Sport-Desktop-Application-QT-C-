#include "connection.h"

Connection::Connection() {}

bool Connection::createConnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test = false;
    db.setDatabaseName("Source_Projet2A"); // insert the name of the ODBC data source
    db.setUserName("youssef"); // insert the user name
    db.setPassword("esprit@2024"); // insert the password
    if (db.open())
        test = true;
    return test;
}

void Connection::closeConnection() { db.close(); }
