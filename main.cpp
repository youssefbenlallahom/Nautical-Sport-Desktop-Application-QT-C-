#include <QApplication>
#include<QMainWindow>
#include"mainwindow.h"
#include"connection.h"
#include"employe.h"
#include <QFile>
#include<QMessageBox>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Connection c;
    bool test=c.createConnection();
    MainWindow w;
    if(test)
    {
        w.show();
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    w.setWindowTitle("AquaHub");

    return a.exec(); // Utilisez QApplication::exec() pour démarrer la boucle d'événements principale
}
