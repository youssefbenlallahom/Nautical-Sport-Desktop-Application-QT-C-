#include"../integration_crud/gestion_equipement_f/equipement.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QLineEdit>
#include<QSqlTableModel>
#include <qsqltablemodel.h>
#include <QDialogButtonBox>
#include<QDialog>
#include<QString>
#include<QDebug>
#include<QSqlError>
#include <QMessageBox>
#include <QWidgetList>
#include <QInputDialog>
#include"qrcode.h"
#include <QSortFilterProxyModel>
#include "QMessageBox"
#include <QVBoxLayout>
#include <QtCharts>
#include <QPainter>
#include <QtCharts/QLineSeries>
#include <QtCharts/QPieSlice>
#include <QChartView>
#include <QDesktopServices>
#include <QPdfWriter>
#include <QWidget>
//pour le statique
#include <QPixmap>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QNetworkRequest>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

using qrcodegen::QrCode;
using qrcodegen::QrSegment;
using namespace qrcodegen;



/*
void MainWindow::upload_click() {
    QString filePath = "C:/Users/yessine/Documents/qr_code.pdf";
    QString accessToken = "eyJ0eXAiOiJKV1QiLCJub25jZSI6IllaN1lMcHBNcTVrZ2hEb1M5SjQyZ3FUQ0E1a3d1RG10LUplZDJpbGl0elUiLCJhbGciOiJSUzI1NiIsIng1dCI6InEtMjNmYWxldlpoaEQzaG05Q1Fia1A1TVF5VSIsImtpZCI6InEtMjNmYWxldlpoaEQzaG05Q1Fia1A1TVF5VSJ9.eyJhdWQiOiIwMDAwMDAwMy0wMDAwLTAwMDAtYzAwMC0wMDAwMDAwMDAwMDAiLCJpc3MiOiJodHRwczovL3N0cy53aW5kb3dzLm5ldC82MDRmMWE5Ni1jYmU4LTQzZjgtYWJiZi1mOGVhZjVkODU3MzAvIiwiaWF0IjoxNzExNzcxNDMxLCJuYmYiOjE3MTE3NzE0MzEsImV4cCI6MTcxMTg1ODEzMSwiYWNjdCI6MCwiYWNyIjoiMSIsImFpbyI6IkFWUUFxLzhXQUFBQVJIRTNnaWlCelZsQVF2Si8zU3l6RU1QVk1qNEZnY24wb1VETEhNZlZVUFlGZUJTcHFHelVsT2RycHhIN1RSeHdtT2tSdk1SRDBxM0J2UENJVTdwTm55eVgvUkZpajRYT1lhVys5VHRZb3c0PSIsImFtciI6WyJwd2QiLCJtZmEiXSwiYXBwX2Rpc3BsYXluYW1lIjoiR3JhcGggRXhwbG9yZXIiLCJhcHBpZCI6ImRlOGJjOGI1LWQ5ZjktNDhiMS1hOGFkLWI3NDhkYTcyNTA2NCIsImFwcGlkYWNyIjoiMCIsImZhbWlseV9uYW1lIjoiQUJJREkiLCJnaXZlbl9uYW1lIjoiTW9oYW1lZCBZYXNzaW5lIiwiaWR0eXAiOiJ1c2VyIiwiaXBhZGRyIjoiMTk3LjIzOC4xMTEuMjA2IiwibmFtZSI6Ik1vaGFtZWQgWWFzc2luZSBBQklESSIsIm9pZCI6IjcwZTgxZDkyLTBlZjYtNDg1Mi05YjQzLTA0YmFlMjAxMjUzZiIsInBsYXRmIjoiMyIsInB1aWQiOiIxMDAzMjAwMzA5QTkzMzRGIiwicmgiOiIwLkFUb0FsaHBQWU9qTC1FT3J2X2pxOWRoWE1BTUFBQUFBQUFBQXdBQUFBQUFBQUFBNkFCay4iLCJzY3AiOiJvcGVuaWQgcHJvZmlsZSBVc2VyLlJlYWQgZW1haWwiLCJzaWduaW5fc3RhdGUiOlsia21zaSJdLCJzdWIiOiJ0NWxWRTk4bTY5N29sdDFTX3hNZzR1VTdQN0doUENyRTExNnVVdjJyWTBjIiwidGVuYW50X3JlZ2lvbl9zY29wZSI6IkFGIiwidGlkIjoiNjA0ZjFhOTYtY2JlOC00M2Y4LWFiYmYtZjhlYWY1ZDg1NzMwIiwidW5pcXVlX25hbWUiOiJNb2hhbWVkeWFzc2luZS5BYmlkaUBlc3ByaXQudG4iLCJ1cG4iOiJNb2hhbWVkeWFzc2luZS5BYmlkaUBlc3ByaXQudG4iLCJ1dGkiOiJGMnVNYWVqNlMwYWZmWC1NcU9VV0FBIiwidmVyIjoiMS4wIiwid2lkcyI6WyJiNzlmYmY0ZC0zZWY5LTQ2ODktODE0My03NmIxOTRlODU1MDkiXSwieG1zX2NjIjpbIkNQMSJdLCJ4bXNfc3NtIjoiMSIsInhtc19zdCI6eyJzdWIiOiJuRjlFenVKVG1jRTQ5WGhDNExIc1ZUTy1aNnZpVWpZX3lnOWQwNkJtSDFBIn0sInhtc190Y2R0IjoxMzYzMjE4NzM1fQ.VnxYc9SArTY1X9Nc-mlGag-wm3_GfARoyqJmo9Zmx8sb5ZAZsJlsYNr2Jq08oOYEICpbAR_eWpKq343NQxJUaa7ogtuJFm1ifR1ct2k3b7xE01mvfV5l_Pw1rmIu0Gy28w-E2qNquGYiYXXkOXYbIs7plRImUe_mMVnJyxI8MJZ1pTu7DTEfStaQXEyq2e1NDwRKi79QU_4en_QAUu-rSaZd7yAC2L8fml0qrNgXhxmI64Z6nCGXdZQj0ER9z9FlA654LMCF-4t2t5NW903tQDxjJ9-daiZzya_CLg8pTm2-NHuqqcNFJ665skhNM1TDfXEAm5oF1xGbE0cZb-73hw";
    uploadToOneDrive(filePath, accessToken);
}*/
/*
void MainWindow::updateEquipmentDisplay() {
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("equipement");
    model->select();

    // Set headers
    model->setHeaderData(0, Qt::Horizontal, "Mat");
    model->setHeaderData(1, Qt::Horizontal, "Nom");
    model->setHeaderData(2, Qt::Horizontal, "Type");
    model->setHeaderData(3, Qt::Horizontal, "Etat");
    model->setHeaderData(4, Qt::Horizontal, "Prix");
    model->setHeaderData(5, Qt::Horizontal, "Qte");
    model->setHeaderData(6, Qt::Horizontal, "Dispo");
    model->setHeaderData(7, Qt::Horizontal, "Four");

    ui->tableView_3->setModel(model);
    ui->tableView_3->resizeColumnsToContents();
}*/




void MainWindow::on_Bajout_clicked()
{

    int mat = ui->LineEdit_mat->text().toInt();
    QString nom = ui->LineEdit_nom->text();
    QString type = ui->LineEdit_type->text();
    float prix = ui->LineEdit_prix->text().toFloat();
    int qte = ui->LineEdit_qte->text().toInt();
    QString etat;
    QString dispo;
    QString four = ui->LineEdit_four->text();
    bool valid = true;


    if (mat < 10000000 || mat > 99999999) {
        ui->LineEdit_mat->setText(" invalid");
        valid = false;
    }

    if (nom.isEmpty() || nom.length() > 30 || !nom.contains(QRegExp("^[a-zA-Z]+$")) || nom.contains(" ")) {
            ui->LineEdit_nom->setText("invalid");
            valid = false;
        }

        if (type.isEmpty() || type.length() > 30 || !type.contains(QRegExp("^[a-zA-Z]+$")) || type.contains(" ")) {
            ui->LineEdit_type->setText("invalid");
            valid = false;
        }

    if (prix <= 0) {
        ui->LineEdit_prix->setText("invalid");
        valid = false;
    }

    if (qte < 0 || qte > 100) {
        ui->LineEdit_qte->setText("invalid");
        valid = false;
    }

    if (!(ui->radioButton_etat->isChecked() || ui->radioButton_etat2->isChecked())) {
        QMessageBox::warning(this, "Avertissement", "Veuillez choisir un état");

        valid = false;
    }

    if (!(ui->radioButton_dispo->isChecked() || ui->radioButton_dispo_2->isChecked())) {
        QMessageBox::warning(this, "Avertissement", "Veuillez choisir la disponibilité");
        valid = false;
    }
    if (four.isEmpty() || four.length() > 30 || !four.contains(QRegExp("^[a-zA-Z]+$")) || four.contains(" ")) {
            ui->LineEdit_four->setText("invalid");
            valid = false;
        }


    if (valid) {
        if (ui->radioButton_etat->isChecked()) {
            etat = "neuf";
        } else {
            etat = "usage";
        }

        if (ui->radioButton_dispo->isChecked()) {
            dispo = "oui";
        } else {
            dispo = "non";
        }

        equipement eq(mat, nom, type, etat, prix, qte, dispo, four);
        bool test = eq.ajoutereq();

        if (test) {
            ui->tableView_3->setModel(Etmp.affichereq());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                      QObject::tr("Ajout effectué.\n" "Cliquez sur Annuler pour quitter."),
                                      QMessageBox::Cancel);
            ui->LineEdit_mat->clear();
            ui->LineEdit_nom->clear();
            ui->LineEdit_type->clear();
            ui->LineEdit_prix->clear();
            ui->LineEdit_qte->clear();
            ui->LineEdit_four->clear();
            ui->radioButton_dispo_2->setChecked(false);
            ui->radioButton_dispo->setChecked(false);
            ui->radioButton_etat2->setChecked(false);
            ui->radioButton_etat->setChecked(false);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                  QObject::tr("Ajout non effectué.\n" "Cliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }
    }
}


void MainWindow::on_Retour_31_clicked() {
    QModelIndexList selectedRows = ui->tableView_3->selectionModel()->selectedRows();
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a row to delete.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete the selected row(s)?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::No) {
        return;
    }
    for (const QModelIndex& index : selectedRows) {
        int row = index.row();
        int mat = ui->tableView_3->model()->data(ui->tableView_3->model()->index(row, 0)).toInt();
        bool test = Etmp.supprimereq(mat, equipementModel);

        if (test) {
            ui->tableView_3->model()->removeRow(row);
        } else {
            QMessageBox::critical(this, "Error", "Deletion failed for some rows.");
        }
    }
    QMessageBox::information(this, "Success", "Deletion completed.");

}




void MainWindow::on_Retour_20_clicked_rech()
{
    QString selectedAttribute = ui->comboBox_searchAttribute->currentText();
    int columnIndex = equipementModel->fieldIndex(selectedAttribute);
    QString searchValue = QInputDialog::getText(this, "Search", "Enter the value to search for:");

    ui->tableView_3->clearSelection();

    if (searchValue.isEmpty()) {

        for (int i = 0; i < equipementModel->rowCount(); ++i) {
            ui->tableView_3->showRow(i);
        }
    } else {

        for (int i = 0; i < equipementModel->rowCount(); ++i) {
            if (equipementModel->data(equipementModel->index(i, columnIndex)).toString() == searchValue) {
                ui->tableView_3->showRow(i);
            } else {
                ui->tableView_3->hideRow(i);
            }
        }
    }
}


void MainWindow::on_Retour_21_clicked_refresh()
{
    equipementModel->select();
    for (int i = 0; i < equipementModel->rowCount(); ++i) {
            ui->tableView_3->showRow(i);
        }
          ui->tableView_3->setModel(equipementModel);


}



void MainWindow::onHeaderClicked(int logicalIndex) {
    if (ui->tableView_3) {

        QSqlQueryModel *existingModel = qobject_cast<QSqlQueryModel*>(ui->tableView_3->model());

        if (existingModel) {

            QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(existingModel);
            ui->tableView_3->setModel(proxyModel);
            ui->tableView_3->setSortingEnabled(true);
            QString sortAttribute = existingModel->headerData(logicalIndex, Qt::Horizontal).toString();
            proxyModel->sort(logicalIndex, Qt::AscendingOrder);
        } else {
            qDebug() << "Existing model is not of type QSqlQueryModel.";
        }
    } else {
        qDebug() << "QTableView (tableView_3) not found.";
    }
}


void MainWindow::setupComboBoxMatricules() {

    equipement equipementInstance;
    QList<int> matricules = equipementInstance.getAllMatricules();
    ui->comboBox_mod->clear();
    for (int matricule : matricules) {
        ui->comboBox_mod->addItem(QString::number(matricule));
    }
}

void MainWindow::setupComboBoxNoms()
{
    equipement eq;
    QList<QString> noms = eq.getAllNoms();
    ui->comboBox_achat->clear();
    for (QString nom : noms) {
       ui->comboBox_achat->addItem(nom);
    }
}

void MainWindow::on_Bachat_clicked() {
    QString selectednomText = ui->comboBox_achat->currentText();
    QString selectednom = selectednomText;
    equipement eqInstance;
    equipement eq = eqInstance.getEquipementByNom(selectednom);
    ui->MATA->setText(QString::number(eq.getmat()));
    ui->NOMA->setText(eq.getnom());
    ui->TYPEA->setText(eq.gettyp());
    ui->PRIXA->setText(QString::number(eq.getprix()));
    for (int i = 0; i < equipementModel->rowCount(); ++i) {
        ui->tableView_3->showRow(i);
    }
}


void MainWindow::on_Bmodifier_2_clicked_submitmod() {
    QString selectedMatText = ui->comboBox_mod->currentText();
    int selectedMat = selectedMatText.toInt();
    equipement eqInstance;
    equipement eq = eqInstance.getEquipementByMatricule(selectedMat);
    ui->LineEdit_matm->setText(QString::number(eq.getmat()));
    ui->LineEdit_nomm->setText(eq.getnom());
    ui->LineEdit_typem->setText(eq.gettyp());

    ui->LineEdit_prixm->setText(QString::number(eq.getprix()));
    ui->LineEdit_qtem->setText(QString::number(eq.getqte()));
    ui->LineEdit_fourm->setText(eq.getfour());

    if (eq.getetat() == "neuf") {
        ui->radioENM->setChecked(true);
    } else if (eq.getetat() == "usage") {
        ui->radioButton_22->setChecked(true);
    }
    if (eq.getdispo() == "oui") {
        ui->radioDOM->setChecked(true);
    } else if (eq.getdispo() == "non") {
        ui->radioButton_20->setChecked(false);
    }
    for (int i = 0; i < equipementModel->rowCount(); ++i) {
            ui->tableView_3->showRow(i);
        }

}




void MainWindow::on_Bmodifier_clicked_modifier()
{
    if (ui->LineEdit_matm->text().isEmpty() ||
        ui->LineEdit_nomm->text().isEmpty() ||
        ui->LineEdit_typem->text().isEmpty() ||
        ui->LineEdit_prixm->text().isEmpty() ||
        ui->LineEdit_qtem->text().isEmpty() ||
        ui->LineEdit_fourm->text().isEmpty() ||
        (!ui->radioENM->isChecked() && !ui->radioButton_22->isChecked()) ||
        (!ui->radioDOM->isChecked() && !ui->radioButton_20->isChecked())) {
        QMessageBox::critical(this, "Erreur", "Veuillez remplir tous les champs avant de modifier.");
        return;
    }


    QString selectedMatText = ui->comboBox_mod->currentText();
    int selectedMat = selectedMatText.toInt();
    equipement eqi;
    equipement eq = eqi.getEquipementByMatricule(selectedMat);
    int updatedMat = ui->LineEdit_matm->text().toInt();
    QString updatedNom = ui->LineEdit_nomm->text();
    QString updatedType = ui->LineEdit_typem->text();
    float updatedPrix = ui->LineEdit_prixm->text().toFloat();
    int updatedQte = ui->LineEdit_qtem->text().toInt();
    QString updatedFour = ui->LineEdit_fourm->text();
    QString updatedEtat;
    if (ui->radioENM->isChecked()) {
        updatedEtat = "neuf";
    } else if (ui->radioButton_22->isChecked()) {
        updatedEtat = "usage";
    }
    QString updatedDispo;
    if (ui->radioDOM->isChecked()) {
        updatedDispo = "oui";
    } else if (ui->radioButton_20->isChecked()) {
        updatedDispo = "non";
    }
    eqi.setmat(updatedMat);
    eqi.setnom(updatedNom);
    eqi.settyp(updatedType);
    eqi.setprix(updatedPrix);
    eqi.setqte(updatedQte);
    eqi.setfour(updatedFour);
    eqi.setetat(updatedEtat);
    eqi.setdispo(updatedDispo);
    bool valid = true;




    if (updatedNom.isEmpty() || updatedNom.length() > 30 || !updatedNom.contains(QRegExp("^[a-zA-Z]+$")) || updatedNom.contains(" ")) {
            ui->LineEdit_nomm->setText("invalid");
            valid = false;
        }

        if (updatedType.isEmpty() || updatedType.length() > 30 || !updatedType.contains(QRegExp("^[a-zA-Z]+$")) || updatedType.contains(" ") ) {
            ui->LineEdit_typem->setText("invalid");
            valid = false;
        }

    if (updatedPrix <= 0) {
        ui->LineEdit_prixm->setText("invalid");
        valid = false;
    }

    if (updatedQte < 0 || updatedQte > 100) {
        ui->LineEdit_qtem->setText("invalid");
        valid = false;
    }

    if (!(ui->radioENM->isChecked() || ui->radioButton_22->isChecked())) {
        QMessageBox::warning(this, "Avertissement", "Veuillez choisir un état");

        valid = false;
    }

    if (!(ui->radioDOM->isChecked() || ui->radioButton_20->isChecked())) {
        QMessageBox::warning(this, "Avertissement", "Veuillez choisir la disponibilité");
        valid = false;
    }
    if (updatedFour.isEmpty() || updatedFour.length() > 30 || !updatedFour.contains(QRegExp("^[a-zA-Z]+$")) || updatedFour.contains(" ")) {
            ui->LineEdit_fourm->setText("invalid");
            valid = false;
        }


    if (valid) {
        if (ui->radioENM->isChecked()) {
            updatedEtat = "neuf";
        } else {
            updatedEtat = "usage";
        }

        if (ui->radioDOM->isChecked()) {
            updatedDispo = "oui";
        } else {
            updatedDispo = "non";
        }

    bool modR = eqi.modifiereq(selectedMat);
    if (modR) {
        QMessageBox::information(this, "Succès", "Équipement modifié avec succès.");
        ui->LineEdit_matm->clear();
        ui->LineEdit_nomm->clear();
        ui->LineEdit_typem->clear();
        ui->LineEdit_prixm->clear();
        ui->LineEdit_qtem->clear();
        ui->LineEdit_fourm->clear();
        ui->radioENM->setChecked(false);
        ui->radioButton_22->setChecked(false);
        ui->radioButton_20->setChecked(false);
        ui->radioDOM->setChecked(false);
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de la modification de l'équipement.");
    }
}
}

void MainWindow::on_pdf_eq_clicked()
{
    QString filePath = "C:/yessine/facturation.pdf";

    QPdfWriter pdf(filePath);
    pdf.setPageSize(QPageSize(QPageSize::A4));

    if (pdf.resolution() <= 0) {
        QMessageBox::critical(this, "Erreur", "Impossible de créer le fichier PDF.");
        return;
    }

    QPainter painter(&pdf);

    if (!painter.isActive()) {
        QMessageBox::critical(this, "Erreur", "Impossible de créer QPainter.");
        return;
    }

    int i = 400; // Ajustez la coordonnée y de départ

    // Définir les polices
    QFont titleFont("Bodoni MT", 18, QFont::Bold);
    QFont headerFont("Arial", 10, QFont::Bold);
    QFont normalFont("Arial", 10);

    // Dessiner le titre
    painter.setFont(titleFont);
    painter.drawText(200, i, "FACTURE D'ACHAT");
    i += 200; // Ajustez l'espacement vertical

    // Dessiner les en-têtes de tableau
    painter.setFont(headerFont);
    painter.drawText(100, i, "MAT");
    painter.drawText(1500, i, "NOM");
    painter.drawText(3000, i, "TYPE");
    painter.drawText(4500, i, "PRIX");
    painter.drawText(6000, i, "nom");
    painter.drawText(7500, i, "prenom");
    painter.drawText(9000, i, "cin");
    i += 200; // Ajustez l'espacement vertical

    QString value = ui->MATA->text();
    QString value2 = ui->cin_achat->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM equipement WHERE mat = :value");
    query.bindValue(":value", value);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'exécution de la requête SQL pour l'équipement.");
        return;
    }

    while (query.next())
    {
        painter.setFont(normalFont);
        painter.drawText(100, i, query.value(0).toString());
        painter.drawText(1500, i, query.value(1).toString());
        painter.drawText(3000, i, query.value(2).toString());
        painter.drawText(4500, i, query.value(4).toString());
        i += 200;
    }

    query.prepare("SELECT * FROM membre WHERE cin = :value2");
    query.bindValue(":value2", value2);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'exécution de la requête SQL pour le membre.");
        return;
    }

    while (query.next())
    {
        painter.setFont(normalFont);
        painter.drawText(6000, i, query.value(2).toString());
        painter.drawText(7500, i, query.value(1).toString());
        painter.drawText(9000, i, query.value(0).toString());
        i += 200;
    }

    // Ajuster la taille de la page PDF pour s'adapter à la hauteur de la table
    pdf.setPageSize(QPageSize(QPageSize::A4));
    pdf.setPageMargins(QMarginsF(10, 10, 10, 10));

    painter.end();

    int reponse = QMessageBox::question(this, "PDF généré", "Afficher le PDF ?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
    }
}


 void MainWindow::on_stat_eq_clicked()
 {
     // Fetch data from the database
     QSqlQueryModel *model = Etmp.affichereq();

     // Create a bar series and populate it with data
     QtCharts::QBarSeries *series = new QtCharts::QBarSeries();
     for (int i = 0; i < model->rowCount(); ++i) {
         QtCharts::QBarSet *set = new QtCharts::QBarSet(model->data(model->index(i, 1)).toString());
         *set << model->data(model->index(i, 5)).toInt(); // Assuming column 5 represents quantity (qte)
         series->append(set);
     }

     // Create a bar chart and add the series
     QtCharts::QChart *chart = new QtCharts::QChart();
     chart->addSeries(series);
     chart->setTitle("Statistique sur la quantité d'équipements");
     chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

     // Create and configure the axes
     QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
    // axisX->append(model->data(model->index(0, 1)).toString());
     chart->addAxis(axisX, Qt::AlignBottom);
     series->attachAxis(axisX);

     QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
     chart->addAxis(axisY, Qt::AlignLeft);

     // Create a chart view to display the chart
     QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
     chartView->setRenderHint(QPainter::Antialiasing);

     // Set up a new window to display the chart
     QDialog *chartDialog = new QDialog(this);
     QVBoxLayout *layout = new QVBoxLayout();
     layout->addWidget(chartView);
     chartDialog->setLayout(layout);

     // Show the chart window
     chartDialog->exec();
 }
 /*
     void MainWindow::on_Retour_25_clicked_achat(){
         QString nomSelectionne = ui->comboBox_achat->currentText();
         equipement eqInstance;
         equipement eq = eqInstance.getEquipementByNom(nomSelectionne);
         if (eq.getqte() == 0) {
             QMessageBox::information(this, "Stock épuisé", "Le stock est déjà épuisé.");
         } else {
             int qteMiseAJour = eq.getqte() - 1;
             eqInstance.modifiereqQuantite(eq.getmat(), qteMiseAJour);
            if (qteMiseAJour == 0) {
                 QMessageBox::information(this, "Stock épuisé", "Le stock est maintenant épuisé.");
             } else {
                 QMessageBox::information(this, "Achat réussi", "Achat effectué avec succès.");
             }
         }
     }
 */
 void MainWindow::on_Retour_25_clicked_achat()
 {
     // Récupérer le nom de l'événement sélectionné
     QString nomSelectionne = ui->comboBox_achat->currentText();

     // Récupérer le CIN du membre
     QString cin = ui->cin_achat->text();

     // Vérifier si le CIN existe dans la table des membres
     QSqlQuery query;
     query.prepare("SELECT COUNT(*) FROM membre WHERE CIN = :cin");
     query.bindValue(":cin", cin);
     if (query.exec() && query.next()) {
         int count = query.value(0).toInt();
         if (count > 0) {
             // Le CIN existe, donc ajouter à la table participer
             query.prepare("SELECT mat, qte FROM equipement WHERE nom = :nomSelectionne");
             query.bindValue(":nomSelectionne", nomSelectionne);
             if (query.exec() && query.next()) {
                 int eqmat = query.value(0).toInt();
                 int qte = query.value(1).toInt();
                 if (qte > 0) {
                     // Mise à jour de la quantité dans la table equipement
                     query.prepare("UPDATE equipement SET qte = qte - 1 WHERE mat = :eqmat");
                     query.bindValue(":eqmat", eqmat);
                     if (!query.exec()) {
                         QMessageBox::critical(this, "Erreur", "Erreur lors de la mise à jour de la quantité de l'équipement.");
                         return;
                     }

                     // Insertion de l'achat dans la table achat
                     query.prepare("INSERT INTO achat (MAT_EQ, CIN_M, NOM_EQ, TYPE_EQ, PRIX_EQ) "
                                     "VALUES (:eqmat, :cin, :nomSelectionne, (SELECT type FROM equipement WHERE mat = :eqmat), (SELECT prix FROM equipement WHERE mat = :eqmat))");
                     query.bindValue(":eqmat", eqmat);
                     query.bindValue(":cin", cin);
                     query.bindValue(":nomSelectionne", nomSelectionne);

                     if (query.exec()) {
                         QMessageBox::information(this, "Succès", "l'achat ajouté avec succès !");
                     } else {
                         QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout du achat !");
                     }
                 } else {
                     QMessageBox::information(this, "Stock épuisé", "Le stock est épuisé pour cet équipement.");
                 }
             } else {
                 QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération de mat de equipement !");
             }
         } else {
             QMessageBox::warning(this, "Avertissement", "CIN invalide !");
         }
     } else {
         QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification du CIN !");
     }
 }



 void MainWindow::checkStockLevels() {
     QSqlQuery query;
         query.prepare("SELECT mat, nom FROM equipement WHERE qte = 0");
         if (query.exec()) {
             QStringList zeroQuantityEquipments;
             while (query.next()) {
                 QString matricule = query.value(0).toString();
                 QString nom = query.value(1).toString();
                 zeroQuantityEquipments.append("Matricule: " + matricule + ", Nom: " + nom);
             }

             // If there are equipments with quantity equal to zero, display a notification
             if (!zeroQuantityEquipments.isEmpty()) {
                 QString notificationMessage = "The following equipments have a quantity of zero:\n";
                 notificationMessage += zeroQuantityEquipments.join("\n");
                 QMessageBox::information(this, "Zero Quantity Equipments", notificationMessage);
             }
         } else {
             qDebug() << "Error while checking for zero quantity equipments:" << query.lastError().text();
         }
 }



 QByteArray MainWindow::generatePDF(const QString &matricule) {
     QByteArray pdfContent;

     // Change the directory where the PDF will be saved
     QString directory = "C:/Users/youssef/OneDrive - ESPRIT"; // Update this with your desired directory
     QString fileName = directory + "equipement_" + matricule + ".pdf"; // Modify the directory part

     // Rest of the code remains the same
     QPdfWriter pdfWriter(fileName);
     QPainter painter(&pdfWriter);
     pdfWriter.setPageSize(QPageSize(QPageSize::A4));
     painter.setPen(Qt::black);
     painter.setFont(QFont("Arial", 12));

     // Retrieve equipment information from the database
     QSqlQuery qry;
     qry.prepare("SELECT * FROM equipement WHERE mat = :value");
     qry.bindValue(":value", matricule);
     if (!qry.exec()) {
         qDebug() << "Error executing SQL query:" << qry.lastError().text();
         return pdfContent;
     }

     if (!qry.next()) {
         qDebug() << "No data found for matricule:" << matricule;
         return pdfContent;
     }

     QString nom = qry.value(1).toString();
     QString type = qry.value(2).toString();
     QString prix = qry.value(4).toString();
     QString qte = qry.value(5).toString();

     painter.drawText(100, 100, "Matricule: " + matricule);
     painter.drawText(100, 300, "Nom: " + nom);
     painter.drawText(100, 600, "Type: " + type);
     painter.drawText(100, 9000, "Prix: " + prix);
     painter.drawText(100, 1200, "Quantité disponible: " + qte);

     qDebug() << "PDF generated successfully:" << fileName;

     // Read the generated PDF content
     QFile pdfFile(fileName);
     if (!pdfFile.open(QIODevice::ReadOnly)) {
         qDebug() << "Error opening PDF file for reading.";
         return pdfContent;
     }
     pdfContent = pdfFile.readAll();
     pdfFile.close();

     return pdfContent;
 }

 void MainWindow::on_tableView_3_clicked(const QModelIndex &index) {
     if (index.isValid()) {
         QString value = ui->tableView_3->model()->data(ui->tableView_3->model()->index(index.row(), 0)).toString();

         // Generate the direct link to the PDF file on OneDrive
         QString pdfFileName = value + ".pdf";
         QString pdfLink = "https://onedrive.live.com/view.aspx?resid=<your_resource_id>&wd=target%28" + pdfFileName + "%7C<your_file_id>%2F" + pdfFileName + "%29"; // Replace <your_resource_id> and <your_file_id> with actual values
         QrCode qr = QrCode::encodeText(pdfLink.toUtf8().data(), QrCode::Ecc::MEDIUM);

         // Create the QR code image
         int size = qr.getSize();
         QImage image(size, size, QImage::Format_RGB32);
         QRgb black = qRgb(0, 0, 0);
         QRgb white = qRgb(255, 255, 255);
         for (int y = 0; y < size; y++) {
             for (int x = 0; x < size; x++) {
                 image.setPixel(x, y, qr.getModule(x, y) ? black : white);
             }
         }

         // Display the QR code image
         ui->qrLabel->setPixmap(QPixmap::fromImage(image.scaled(100, 100, Qt::KeepAspectRatio, Qt::FastTransformation)));

         // Generate the PDF content
         QByteArray pdfContent = generatePDF(value);

         // Upload the PDF to OneDrive
         QString accessToken = "eyJ0eXAiOiJKV1QiLCJub25jZSI6ImxjZjBjNXUzd3M5N2VPWlc4TndXa1g1QzF0b2tiN3psQlp5WkdPTVkyTjQiLCJhbGciOiJSUzI1NiIsIng1dCI6IkwxS2ZLRklfam5YYndXYzIyeFp4dzFzVUhIMCIsImtpZCI6IkwxS2ZLRklfam5YYndXYzIyeFp4dzFzVUhIMCJ9.eyJhdWQiOiIwMDAwMDAwMy0wMDAwLTAwMDAtYzAwMC0wMDAwMDAwMDAwMDAiLCJpc3MiOiJodHRwczovL3N0cy53aW5kb3dzLm5ldC82MDRmMWE5Ni1jYmU4LTQzZjgtYWJiZi1mOGVhZjVkODU3MzAvIiwiaWF0IjoxNzE1MjU1NTIzLCJuYmYiOjE3MTUyNTU1MjMsImV4cCI6MTcxNTM0MjIyMywiYWNjdCI6MCwiYWNyIjoiMSIsImFpbyI6IkFUUUF5LzhXQUFBQW56Yjh1R3Y1ZDRLVmUwN3FjZXFSdGlXQ2Iza2Q0WVppMWhzSnNHNUZ4N3BNSFVCMW5LbnJVU3JPN1c5UG1YbkkiLCJhbXIiOlsicHdkIl0sImFwcF9kaXNwbGF5bmFtZSI6IkdyYXBoIEV4cGxvcmVyIiwiYXBwaWQiOiJkZThiYzhiNS1kOWY5LTQ4YjEtYThhZC1iNzQ4ZGE3MjUwNjQiLCJhcHBpZGFjciI6IjAiLCJmYW1pbHlfbmFtZSI6IkJFTiBMQUxMQUhPTSIsImdpdmVuX25hbWUiOiJZb3Vzc2VmIiwiaWR0eXAiOiJ1c2VyIiwiaXBhZGRyIjoiMTU0LjEwOC41NS44MSIsIm5hbWUiOiJZb3Vzc2VmIEJFTiBMQUxMQUhPTSIsIm9pZCI6IjgyMzJkMmVlLTIyNzYtNDY1Ny05MzZlLWQ2ZWU4NGIzNWVlNSIsInBsYXRmIjoiMyIsInB1aWQiOiIxMDAzMjAwMzA5QTkzMzM1IiwicmgiOiIwLkFUb0FsaHBQWU9qTC1FT3J2X2pxOWRoWE1BTUFBQUFBQUFBQXdBQUFBQUFBQUFBNkFGcy4iLCJzY3AiOiJvcGVuaWQgcHJvZmlsZSBVc2VyLlJlYWQgZW1haWwiLCJzaWduaW5fc3RhdGUiOlsia21zaSJdLCJzdWIiOiJHLTBoNHJwQVU4TnV0LTJDM0dxZUVEVXN0SDlHOUszM2tuT09rLTZmcjhFIiwidGVuYW50X3JlZ2lvbl9zY29wZSI6IkFGIiwidGlkIjoiNjA0ZjFhOTYtY2JlOC00M2Y4LWFiYmYtZjhlYWY1ZDg1NzMwIiwidW5pcXVlX25hbWUiOiJ5b3Vzc2VmLmJlbmxhbGxhaG9tQGVzcHJpdC50biIsInVwbiI6InlvdXNzZWYuYmVubGFsbGFob21AZXNwcml0LnRuIiwidXRpIjoiNGdyMkhlcmcta2VZUkkya3g5WnZBQSIsInZlciI6IjEuMCIsIndpZHMiOlsiYjc5ZmJmNGQtM2VmOS00Njg5LTgxNDMtNzZiMTk0ZTg1NTA5Il0sInhtc19jYyI6WyJDUDEiXSwieG1zX3NzbSI6IjEiLCJ4bXNfc3QiOnsic3ViIjoiVExaR3RyYXQwN3lZdW5lcVhlS2VXdkNVaEpnY1NNZHBFWWlTdjcxd3JNNCJ9LCJ4bXNfdGNkdCI6MTM2MzIxODczNX0.lIU8fgY3mHYhow215BPCoOGXvmzrvgtO5lE_QuiY95dpWc36vQWujumSQws9vSWypfoTq6piSRbYXzOmVbwRNabIvNH0ZExarm1stnxtlI_-gi2gSvUvAxHb1ZzRIzGlmEXISsZSxuu1mSFpUsHsqWa-FT_OAWM72OGDfh0INTTuTPaLbSp5wwSv7PsG92BsqHxOmr9JgRdHQqA3-36NPiDy8mTuqoLFQFvTVURqqr9Yekn3YY3jaM7d5okroxSnAzD0phJH_yNG32c8JpKw_fZhZCA4Br8ZQarJj_RPODWalqm_nAsIsAF1gIDNANRZyXO9UiaDMbnUryZd4bq6Hg"; // Replace with your actual access token
         uploadQRCodeToOneDrive(pdfContent, pdfFileName, accessToken);
     }
 }





 void MainWindow::uploadQRCodeToOneDrive(const QByteArray& pdfContent, const QString& pdfFileName, const QString& accessToken) {
     QNetworkAccessManager manager;
     QNetworkRequest request(QUrl("https://graph.microsoft.com/v1.0/me/drive/root:/Nouveau dossier/" + pdfFileName + ":/content"));
     request.setRawHeader("Authorization", ("Bearer " + accessToken).toUtf8());
     request.setHeader(QNetworkRequest::ContentTypeHeader, "application/pdf");

     QNetworkReply *reply = manager.put(request, pdfContent);

     QObject::connect(reply, &QNetworkReply::finished, [=]() {
         if (reply->error() == QNetworkReply::NoError) {
             qDebug() << "File uploaded successfully.";
         } else {
             qDebug() << "Error:" << reply->errorString();
         }
         reply->deleteLater();
     });
 }
 void MainWindow::modifier_disponibilite(const int &mat)
 {
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
 void MainWindow::disponibilites(const int &mat)
 {
     QSqlQuery query;
     QString strSql = "UPDATE equipement SET qte = 50 , dispo = 'oui' WHERE mat = :mat ";
     query.prepare(strSql);
     query.bindValue(":mat", mat);

     if (!query.exec()) {
         qDebug() << "Erreur lors de la m-a-j bdd : ";
     } else {
         qDebug() << "Base de données mise à jour avec succès:non";
     }
 }

