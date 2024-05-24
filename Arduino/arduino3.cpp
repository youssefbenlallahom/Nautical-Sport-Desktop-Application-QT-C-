#include "../integration_crud/Arduino/arduino3.h"
#include<QtDebug>
#include<QSqlQuery>
#include "../integration_crud/gestion_equipement_f/eq.h"
#include "ui_eq.h"
Arduino3::Arduino3()
{
  data3="";
  arduino_port_name3="COM5";
  arduino_is_available3=false;
  serial3=new QSerialPort;
}
QString Arduino3::getArduino_port_name3(){return arduino_port_name3;}
QSerialPort *Arduino3::getserial3() {return serial3;}
int Arduino3::connect_arduino3()
{
  foreach(const QSerialPortInfo& serial_Port_info,QSerialPortInfo::availablePorts())
  {
      if(serial_Port_info.hasVendorIdentifier() && serial_Port_info.hasProductIdentifier())
        {
             if(serial_Port_info.vendorIdentifier()==arduino_uno_vendor_id3 && serial_Port_info.productIdentifier()==arduino_uno_product_id3)
                {
                   arduino_is_available3=true;
                   arduino_port_name3=serial_Port_info.portName();
                }
        }
  }
  qDebug()<<"arduino port name:"<<arduino_port_name3;
  if(arduino_is_available3)
  {
      serial3->setPortName(arduino_port_name3);
      if(serial3->open(QSerialPort::ReadWrite))
      {
          serial3->setBaudRate(QSerialPort::Baud9600);
          serial3->setDataBits(QSerialPort::Data8);
          serial3->setParity(QSerialPort::NoParity);
          serial3->setStopBits(QSerialPort::OneStop);
          serial3->setFlowControl(QSerialPort::NoFlowControl);
          return 0;
      }
      return 1;
   }
  return -1;
}
int Arduino3::close_arduino3()
{
    if(serial3->isOpen())
    {
        serial3->close();
        return 0;
    }
    return 1;
}
int Arduino3::write_to_arduino3(QByteArray d)
{
    if(serial3->isWritable())
    {
        serial3->write(d);
    }
    else
        qDebug()<<"error en ecriture";
}

QByteArray Arduino3::read_from_arduino3()
{
  if(serial3->isReadable())
    {
       data3=serial3->readAll();
       return data3;
    }
}
void Arduino3::modifier_disponibilite(const int &mat) {
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
void Arduino3::disponibilites(const int &mat) {
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

void Arduino3::existance(const QString &nom)
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
           write_to_arduino3("1");
            qDebug() << "Le nom existe dans la base de données. Valeur envoyée à Arduino : 1";
        } else {
            // Envoyer "0" à Arduino
            write_to_arduino3("0");
            qDebug() << "Le nom n'existe pas dans la base de données. Valeur envoyée à Arduino : 0";
        }
    } else {
        // Gestion de l'échec de la requête SQL
        qDebug() << "Erreur lors de l'exécution de la requête SQL.";
    }
}
