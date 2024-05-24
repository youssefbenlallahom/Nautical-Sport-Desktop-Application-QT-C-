
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include "camera/camera.h"
#include<QSqlTableModel>
#include"../integration_crud/gestion_membre/membre.h"
#include"../integration_crud/gestion_membre/mainwindowem.h"
#include"../integration_crud/gestion_evenements/mainwindow_ev.h"
#include"../integration_crud/gestion_formation/mainwindow_formation.h"
#include"../integration_crud/gestion_formation/formation.h"
#include"../integration_crud/gestion_equipement_f/equipement.h"
#include"../integration_crud/gestion_equipement_f/eq.h"
#include"../integration_crud/gestion_abonnement/abonnement.h"
#include "../Arduino/arduino.h"
#include "../Arduino/arduino2.h"





namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void on_loginButton_clicked();
    void on_gestionButton_clicked();

    void modifier_disponibilite(const int &mat) ;
    void disponibilites(const int &mat);


    void on_Retour_9_clicked();


    void on_Retour_16_clicked();


    void on_ajout_emp_clicked();

    void on_parcourir_ajout_clicked();

    void on_capturer_ajout_clicked();

    void on_recherche_emp_bouton_clicked();

    void on_supprimer_emp_clicked();

    void on_id_emp_modifier_currentIndexChanged(int index);

    void on_modifer_emp_clicked();

    void on_annuler_emp_clicked();

    void on_refresh_emp_clicked();
    void afficherImage(const QString &imagePath,const QString &labelName);

    void on_capturer_modifier_clicked();

    void on_parcourir_modifier_clicked();

    void fillComboBox();

    bool validateNom();
    bool validateEmail();
    bool validateMDP();
    bool validateCIN();
    bool validatePrenom();
    void remplirComboBoxEmployes();

    int getIdFromTableView();
    void on_pdf_emp_clicked();



    void on_stat_emp_clicked();

    void on_tri_emp_activated(int index);

    void on_refresh_emp_modifier_clicked();

    void on_mdp_oublie_clicked();


    void on_gestion_event_clicked();

    void on_gestion_membre_clicked();

    void on_gestion_abo_clicked();

    void on_gestion_formation_clicked();

    void on_gestion_equi_clicked();

    void on_icone_mdp_clicked();

    void checkCarte();

    bool carte();

    void carteDetectee();

    void on_gestion_employe_clicked();
    /*yassine*/
    void on_Bajout_clicked();

    void on_Retour_31_clicked();

    void on_Retour_20_clicked_rech();

    void on_Retour_21_clicked_refresh();

  /*  void on_Retour_16_clicked_tri();*/

    void setupComboBoxMatricules();


    void on_Bmodifier_2_clicked_submitmod();
    void on_Bachat_clicked();
    void on_Bmodifier_clicked_modifier();
    void setupComboBoxNoms();
    void on_pdf_eq_clicked();
    void on_stat_eq_clicked();
    void on_tableView_3_clicked(const QModelIndex &index);
    void on_Retour_25_clicked_achat();
    //void displayQRCode() ;
    //void on_qrcodegen_2_clicked();
    //void upload_click() ;
    //void generatePDF(const QString& mat, const QString& nom, const QString& type, const QString& prix, const QString& qte);
  QByteArray generatePDF(const QString &matricule);
    //QString generatePDF(const QString &matricule);
    //void generateQRCode(const QString &data);
  //QString createDownloadLink(const QByteArray &pdfContent);
  void checkStockLevels();
void uploadQRCodeToOneDrive(const QByteArray& pdfContent, const QString& pdfFileName, const QString& accessToken);
//  void uploadToOneDrive(const QByteArray& pdfContent, const QString& pdfFileName, const QString& accessToken) ;
/*/////////////////////////////////////////////////////////////////////////////*/
    //mahdi
    void on_soumetre_ab_clicked();
    void on_ok_clicked_submitmod();
    void on_modifier_ab_clicked_modifier();


    void setupComboBoxIds();

    void setupComboBoxcin();



    void on_sup_ab_clicked();

    void onHeaderClicked_2(int logicalIndex);
    void onHeaderClicked_3(int logicalIndex);

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
/*////////////////////////////////////////////////////////////////  */

    ///////////////hidaya///////////////////////
    void on_ajout_ev_clicked();
    void on_supprimer_ev_clicked();
    void on_modifier_ev_clicked();
    void on_submit_ev_clicked();
    void on_rechercher_ev_clicked();
    void on_refresh_ev_clicked();
    void onHeaderClicked(int logicalIndex);
    void setupComboBoxIds_ev();
    QString getEventInfoForMember(const QString &email);
    void setupComboBoxNoms_ev();
    void updateTableView();

    void on_pdf_ev_clicked();

    void on_stat_ev_clicked();

    void on_ajout_clicked();

    void on_afficher_liste_clicked();

    void verifier();

    void checkevents();

    void on_sendBtn_clicked();


    QString getEventName(int eventId);

    void addTask(const QDate &date, const QString &taskText);

    void on_boutton_ajouter_tache_clicked();

    void updateDateField();

    void addTaskFromTab();

    void updateListViewForDate(const QDate &selectedDate);

    void on_calendarWidget_selectionChanged();

    void deleteTask(const QDate &date, const QString &taskName);

    void on_boutton_supprimer_tache_clicked();

    void refreshListViewModel();

    void loadEventsFromDatabase();

    void showEventDetails(const QString& eventName);


///////////////////////////////////////////////////////////////////////////////////
    void on_Retour_7_clicked();
    void on_supprimer_clicked();
    void on_modifier_clicked();
    void on_refresh_dach_clicked();
    void on_Bmodifier_3_clicked();
    void on_stat_mem_clicked();
    void onHeaderClickedmem(int logicalIndex);
    void on_pdf_mem_clicked();
    void on_recherche_clicked();
    void setupComboBoxCINS();

    ///////////////////////////////////////////////////////////////////////////////

    void on_add_form_clicked();

    void on_supprimer_form_clicked();


    void on_modifier_form_clicked();


    void on_PDF_clicked();

    void on_tri_clicked();

    void on_id_form_2_activated(int index);

    void on_tri_form_activated(int index);


    void on_chercher_formation_clicked();
    void on_stat_formation_clicked();


    void on_historique_formation_clicked();

    void on_tri_form_currentIndexChanged(const QString &arg1);

    void on_tri_form_activated(const QString &arg1);

    void on_tabView_formation_activated(const QModelIndex &index);

    void on_tabView_formation_clicked(const QModelIndex &index);
    void saveToFile(const QString &filename, const QString &data); //history

    void on_Retour_12_clicked();

    void on_Retour_11_clicked();

    void on_Retour_8_clicked();

    void on_quit_clicked();
    void onArduinoDataReceived();
    void on_exist_clicked();
    void on_dispo_3_clicked();
    void readSerialData(const int &mat);




public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_Retour_10_clicked();
    void on_Retour_6_clicked();
    void showCameraView();
    QString imagePath;

private:
    Ui::MainWindow *ui;
    Camera *cameraWidget;
    QSqlTableModel *Model;
    mainwindowem *MembreWidget;
    mainwindow_ev *EventWidget;
    MainWindow_formation *FormationWidget;
    QByteArray data; // variable contenant les données reçues
    QSerialPort *COMPORT;
    Arduino  *A;
    Arduino2  *A2;


    //mahdi
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
     QSqlTableModel *MembreModel;
     QComboBox *CINComboBox;
     /*///////////////////////////////////////////////////////*/
     equipement Etmp ;

     evenement tmpevenement;

     Membre Mtmp;

     formation tmpformation;
      QString lastTriOption;
      static const int IdColumn = 0; // Indice de la colonne pour l'ID
         static const int SpecialiteColumn = 1; // Indice de la colonne pour la spécialité
         static const int LieuColumn = 2; // Indice de la colonne pour le lieu
         static const int DatedColumn = 3; // Indice de la colonne pour la date de début
         static const int DatefColumn = 4; // Indice de la colonne pour la date de fin
         static const int NiveauColumn = 5; // Indice de la colonne pour le niveau
         static const int PrixColumn = 6; // Indice de la colonne pour le prix


};

#endif // MAINWINDOW_H
