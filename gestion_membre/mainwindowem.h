#ifndef MAINWINDOWEM_H
#define MAINWINDOWEM_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QSortFilterProxyModel>
#include"../integration_crud/gestion_membre/membre.h"
namespace Ui {
    class mainwindowem;
}

class mainwindowem : public QMainWindow {
    Q_OBJECT

public:
    explicit mainwindowem(QWidget *parent = nullptr);
    ~mainwindowem();

private slots:
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


    void on_Retour_6_clicked();

private:
    Ui::mainwindowem *ui;
    QSqlTableModel *MembreModel;
    Membre Mtmp;

    // Add any other private members or functions here
};

#endif // MAINWINDOWEM_H
