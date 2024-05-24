#ifndef MAINWINDOW_FORMATION_H
#define MAINWINDOW_FORMATION_H
#include "formation.h"
#include <QMainWindow>
#include <QString>
#include <QtGui>
#include <QtCore>
#include <QComboBox>
//QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow_formation; }
//QT_END_NAMESPACE

class MainWindow_formation : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow_formation(QWidget *parent = nullptr);
    ~MainWindow_formation();
    void saveToFile(const QString &filename, const QString &data);
private slots:
    ///////////////////////////////////////////////////////////////////////////////
    void on_pushButton_clicked();

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

private:
    Ui::MainWindow_formation *ui;
    formation tmpformation;
     QByteArray data;
     QString lastTriOption;
     static const int IdColumn = 0; // Indice de la colonne pour l'ID
        static const int SpecialiteColumn = 1; // Indice de la colonne pour la spécialité
        static const int LieuColumn = 2; // Indice de la colonne pour le lieu
        static const int DatedColumn = 3; // Indice de la colonne pour la date de début
        static const int DatefColumn = 4; // Indice de la colonne pour la date de fin
        static const int NiveauColumn = 5; // Indice de la colonne pour le niveau
        static const int PrixColumn = 6; // Indice de la colonne pour le prix


};
#endif // MAINWINDOW_formation_H
