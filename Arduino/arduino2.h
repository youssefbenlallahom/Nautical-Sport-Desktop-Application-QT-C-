#ifndef Arduino2_H
#define Arduino2_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include<QSqlQuery>

class Arduino2
{

public:     //méthodes de la classe Arduino2
    Arduino2();
    int connect_arduino2(); // permet de connecter le PC à Arduino2
    int close_arduino2(); // permet de femer la connexion
    int write_to_arduino2( QByteArray ); // envoyer des données vers arduino2
    QByteArray read_from_arduino2();  //recevoir des données de la carte arduino2
    QSerialPort* getserial2();   // accesseur
    QString getarduino2_port_name();
    void initialize_serial();
    void modifier_disponibilite(const int &mat);
        void disponibilites(const int &mat);
        void existance(const QString &nom);

private:
QSerialPort * serial2; //Cet objet rassemble des informations (vitesse, bits de données, etc.)
//et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour arduino2.
static const quint16 arduino_uno_vendor_id2=9025;
static const quint16 arduino_uno_producy_id2=67;
QString arduino_port_name2;
bool arduino_is_available2;
QByteArray data2;  // contenant les données lues à partir d'Arduino2
};
#endif // Arduino22_H
