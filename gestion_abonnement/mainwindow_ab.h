
#ifndef MAINWINDOW_AB_H
#define MAINWINDOW_AB_H

#include <QMainWindow>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QSystemTrayIcon>
#include<QSqlTableModel>
#include "QComboBox"
#include "abonnement.h"
#include"mainwindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:

    void on_Retour_6_clicked();
    void on_ok_clicked_submitmod();
    void on_modifier_ab_clicked_modifier();

    void on_soumetre_ab_clicked();

    void setupComboBoxIds();

    void setupComboBoxcin();



    void on_sup_ab_clicked();

    void onHeaderClicked_2(int logicalIndex);

    void on_refresh_ab_clicked();
    void on_refresh_ab_2_clicked();
    void fillComboBoxab();
    void on_pdf_ab_clicked();
    void on_stat_abonnement_2_clicked();
    void on_recherche_ab_bouton_2_clicked();
    /*void afficherCodeBarre();*/
    /*void on_tableView_7_clicked(const QModelIndex &index);*/
    void populateTodoList();
    void on_pushButton_clicked();
    void on_pushButton_ab_8_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_9_clicked();
    /*void on_pushButton_suppr_clicked();*/
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

    /*void on_statistique_clicked();


    void on_pushButton_4_clicked();*/



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showCameraView();
    QString imagePath;

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *evenementModel;
    QSqlTableModel *listeModel;
    QDate selectedDate;
    QMap<QDate, QStringList> tasksByDate;
    QStringList files;
    QSystemTrayIcon *mSystemTrayIcon;
    QSqlTableModel *equipementModel;
    QComboBox *matriculeComboBox;
    QComboBox *nomComboBox;
    Abonnement amtp;
    QSqlTableModel *abonnementModel;
     QByteArray data;
     QSqlTableModel *MembreModel;
     QComboBox *CINComboBox;
};

QStringList readFileToList(const QString &fileName);
#endif // MainWindow_ab_H
