#include "arduino2.h"

Arduino2::Arduino2()
{
    data2="";
    arduino_port_name2="COM5";
    arduino_is_available2=false;
    serial2=new QSerialPort;
}

QString Arduino2::getarduino2_port_name()
{
    return arduino_port_name2;
}

QSerialPort *Arduino2::getserial2()
{
   return serial2;
}

int Arduino2::connect_arduino2()
{   // recherche du port sur lequel la carte arduino identifée par  arduino_uno_vendor_id
    // est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()){
           if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()){
               if(serial_port_info.vendorIdentifier() == arduino_uno_vendor_id2 && serial_port_info.productIdentifier()
                       == arduino_uno_producy_id2) {
                   arduino_is_available2 = true;
                   arduino_port_name2=serial_port_info.portName();
               } } }
        qDebug() << "arduino_port_name is :" << arduino_port_name2;
        if(arduino_is_available2){
            qDebug()<<"aaa";
            serial2->setPortName("COM5");
            serial2->setBaudRate(QSerialPort::Baud9600); // débit : 9600 bits/s
            serial2->setDataBits(QSerialPort::Data8); //Longueur des données : 8 bits,
            serial2->setParity(QSerialPort::NoParity); //1 bit de parité optionnel
            serial2->setStopBits(QSerialPort::OneStop); //Nombre de bits de stop : 1
            serial2->setFlowControl(QSerialPort::NoFlowControl);
            if(serial2->open(QSerialPort::ReadWrite)){
                return 0;
            }
            return 1;
        }
        return -1;
}

int Arduino2::close_arduino2()
{
    if(serial2->isOpen()){
            serial2->close();
            return 0;
        }
    return 1;
}

QByteArray Arduino2::read_from_arduino2()
{
    if(serial2->isReadable()){
         data2=serial2->readAll(); //récupérer les données reçues
         return data2;
    }
    return QByteArray(); // return an empty QByteArray if the serial port is not readable
}

int Arduino2::write_to_arduino2(QByteArray d)
{
    if(serial2->isWritable()){
        serial2->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }
}
void Arduino2::modifier_disponibilite(const int &mat) {
    QSqlQuery query;
    QString strSql = "UPDATE equipement SET qte = 0 , dispo = 'non' WHERE mat = :mat   ";
    query.prepare(strSql);
    query.bindValue(":mat", mat);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la m-a-j bdd : ";
    } else {
        qDebug() << "Base de données mise à jour avec succès:oui";
    }
}
void Arduino2::disponibilites(const int &mat) {
    QSqlQuery query;
    QString strSql = "UPDATE equipement SET qte = 50 , dispo = 'oui' WHERE mat = :mat and qte < 50";
    query.prepare(strSql);
    query.bindValue(":mat", mat);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la m-a-j bdd : ";
    } else {
        qDebug() << "Base de données mise à jour avec succès:non";
    }
}

void Arduino2::existance(const QString &nom)
{
     // Effectuer une requête SQL pour vérifier l'existence du nom dans la base de données
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM equipement WHERE nom = :nom");
    query.bindValue(":nom", nom);
    query.exec();

    if (query.next()) {
        int count = query.value(0).toInt();

        // Vérifie si le nom existe dans la base de données
        if (count > 0) {
            // Envoyer "1" à Arduino
           write_to_arduino2("1");
            qDebug() << "Le nom existe dans la base de données. Valeur envoyée à Arduino : 1";
        } else {
            // Envoyer "0" à Arduino
            write_to_arduino2("0");
            qDebug() << "Le nom n'existe pas dans la base de données. Valeur envoyée à Arduino : 0";
        }
    } else {
        // Gestion de l'échec de la requête SQL
        qDebug() << "Erreur lors de l'exécution de la requête SQL.";
    }
}
