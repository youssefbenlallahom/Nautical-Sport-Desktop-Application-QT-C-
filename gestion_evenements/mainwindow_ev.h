#ifndef MAINWINDOW_EV_H
#define MAINWINDOW_EV_H

#include <QMainWindow>
#include "evenement.h"
#include <QSqlTableModel>
#include <QSystemTrayIcon>
#include"../integration_crud/gestion_evenements/evenement.h"

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow_ev; }
QT_END_NAMESPACE

class mainwindow_ev : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow_ev(QWidget *parent = nullptr);
    ~mainwindow_ev();

private slots:
    ///////////////hidaya///////////////////////
    void on_ajout_ev_clicked();
    void on_supprimer_ev_clicked();
    void on_modifier_ev_clicked();
    void on_submit_ev_clicked();
    void on_rechercher_ev_clicked();
    void on_refresh_ev_clicked();
    void onHeaderClicked(int logicalIndex);
    void setupComboBoxIds_ev();

    void setupComboBoxNoms_ev();

    void on_pdf_ev_clicked();

    void on_stat_ev_clicked();

    void on_ajout_clicked();

    void on_afficher_liste_clicked();

    void verifier();

    void checkevents();

    void on_sendBtn_clicked();

    QString getEmailContentForCin(const QString &cin);

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

private:
    Ui::mainwindow_ev *ui;
    evenement tmpevenement;
    QSqlTableModel *evenementModel;
    QSqlTableModel *listeModel;
    QDate selectedDate;
    QMap<QDate, QStringList> tasksByDate;
    QStringList files;
    QSystemTrayIcon *mSystemTrayIcon;
};

#endif // mainwindow_ev_H
