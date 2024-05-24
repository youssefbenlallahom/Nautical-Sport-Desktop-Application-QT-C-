#ifndef MAINWINDOW_EQ_H
#define MAINWINDOW_EQ_H
#include "equipement.h"
#include <QMainWindow>
#include <QSqlTableModel>
#include <QComboBox>
#include <QWidgetList>
#include "qrcode.h"
#include <QPixmap>
#include <QtNetwork>
#include <QFile>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow_eq; }
QT_END_NAMESPACE

class MainWindow_eq : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow_eq(QWidget *parent = nullptr);

    ~MainWindow_eq();

private slots:
    /*yassine*/
    void on_Bajout_clicked();

    void on_Retour_31_clicked();

    void on_Retour_20_clicked_rech();

    void on_Retour_21_clicked_refresh();

  /*  void on_Retour_16_clicked_tri();*/

    void onHeaderClicked(int logicalIndex);
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
private:
    Ui::MainWindow_eq *ui;
    equipement Etmp ;
    QSqlTableModel *equipementModel;
    QComboBox *matriculeComboBox;
    QComboBox *nomComboBox;


};
#endif // MainWindow_eq_H
