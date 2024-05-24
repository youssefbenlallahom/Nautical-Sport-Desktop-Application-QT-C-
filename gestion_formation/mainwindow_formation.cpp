#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formation.h"
#include <QMessageBox>
#include <QString>
#include <QDate>
#include <QFile>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPainter>
#include <QObject>
#include <QDebug>
#include <QLineEdit>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QFileDialog>
#include <QInputDialog>
#include <QSqlRecord>
#include <QPixmap>
#include <QDialog>
#include <QDialogButtonBox>
#include <QSqlField>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QSortFilterProxyModel>
#include <QPushButton>
#include <QComboBox> // Ajout de l'en-tête pour QComboBox si nécessaire
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QSaveFile>
#include<QFile>

QList<int> formationsModifiees;



void MainWindow::on_PDF_clicked()
{
    QModelIndex index = ui->tabView_formation->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner une formation.");
        return;
    }

    int selectedRow = index.row();
    int selectedId = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, IdColumn)).toInt();

    // Générez le PDF avec mise en page
    QPdfWriter pdfWriter("exported_data.pdf");
    QPainter painter(&pdfWriter);

    // Définissez l'arrière-plan
    painter.fillRect(QRect(0, 0, pdfWriter.width(), pdfWriter.height()), QColor("#0EABB8")); // Couleur de fond

    // Set font for title
    QFont titleFont("Roboto", 30, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(1400, 1400, "PROFIL DE LA FORMATION");

    // Set font for content
    QFont contentFont("Roboto", 14);
    painter.setFont(contentFont);

    // Récupérez les données de la formation
    QString specialite = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, SpecialiteColumn)).toString();
    QString lieu = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, LieuColumn)).toString();
    QDate dated = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, DatedColumn)).toDate();
    QDate datef = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, DatefColumn)).toDate();
    QString niveau = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, NiveauColumn)).toString();
    int prix = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(selectedRow, PrixColumn)).toInt();

    // Dessinez les données de la formation
    int i = 4000; // Position verticale initiale
    int lineHeight = 900; // Hauteur de ligne

    painter.drawText(300, i, "Identifiant de la formation: " + QString::number(selectedId));
    i += lineHeight;

    painter.drawText(300, i, "Spécialité de la formation: " + specialite);
    i += lineHeight;

    painter.drawText(300, i, "Lieu de la formation: " + lieu);
    i += lineHeight;

    painter.drawText(300, i, "Date début de la formation: " + dated.toString("dd/MM/yyyy"));
    i += lineHeight;

    painter.drawText(300, i, "Date fin de la formation: " + datef.toString("dd/MM/yyyy"));
    i += lineHeight;

    painter.drawText(300, i, "Niveau de la formation: " + niveau);
    i += lineHeight;

    painter.drawText(300, i, "Prix de la formation: " + QString::number(prix));

    // Ajouter le logo en haut à droite
    QPixmap logo("C:/Users/youssef/Desktop/integration/image/logo.png");
    painter.drawPixmap(pdfWriter.width() - logo.width() - 10, 10, logo);

    // Ouvrez le fichier PDF
    QDesktopServices::openUrl(QUrl::fromLocalFile("exported_data.pdf"));
}



void MainWindow::on_tri_clicked()
{
    ui->tabView_formation->setModel(tmpformation.tri());

}



void MainWindow::on_add_form_clicked()
{
    formation f1;
    int id_formation=ui->id->text().toInt();
    QString specialite_formation=ui->specialite->currentText();
    QString lieu_formation=ui->lieu->currentText();
    QDate dated_formation=ui->dated_f->date();
    QDate datef_formation=ui->datef_f->date();
    QString niveau_formation=ui->niveau->currentText();
    int prix_formation=ui->prix->text().toInt();
    formation f(id_formation,specialite_formation,lieu_formation,dated_formation,datef_formation,niveau_formation,prix_formation);
    bool test=f.ajouter();
    if(test)
    {ui->tabView_formation->setModel(f1.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter une formation"),
                                 QObject::tr("formation ajouté.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        //History
        QString systemDateTime = QDateTime::currentDateTime().toString(Qt::ISODate);
        QString operation="ajout de formation :";
        QString SerieInfo = QString("%1, %2, %3, %4, %5, %6, %7, %8, %9")
                .arg(operation)
                .arg(id_formation)
                .arg(specialite_formation)
                .arg(lieu_formation)
                .arg(dated_formation.toString(Qt::ISODate))
                .arg(datef_formation.toString(Qt::ISODate))
                .arg(niveau_formation)
                .arg(prix_formation)
                .arg(systemDateTime);
        saveToFile("formation_history.txt", SerieInfo);

    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("Ajouter une formation"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->tabView_formation->setModel(tmpformation.afficher());


}

void MainWindow::on_modifier_form_clicked()
{

    QString id = ui->id_form_2->currentText();
    bool ok;
    int idInt = id.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "ID non valide.");
        return;
    }


    QString specialite = ui->specialite_form_2->currentText();
    QString lieu = ui->lieu_form_2->currentText();
    QDate dated = ui->dated_f_form_2->date();
    QDate datef = ui->datef_f_form_2->date();
    QString niveau = ui->niveau_form_2->currentText();
    int prix = ui->prix_form_2->text().toInt();


    formation f(idInt, specialite, lieu, dated, datef, niveau, prix);


    if (!formationsModifiees.contains(idInt)) {
        formationsModifiees.append(idInt);
    }


    bool success = f.modifier(idInt, specialite, lieu, dated, datef, niveau, prix);
    if (success) {
        QMessageBox::information(this, "Succès", "Modification effectuée avec succès.");
        //History
        QString systemDateTime = QDateTime::currentDateTime().toString(Qt::ISODate);
        QString operation="modification de formation d'id :";
        QString SerieInfo = QString("%1, %2, %3, %4, %5, %6, %7, %8, %9")
                .arg(operation)
                .arg(id)
                .arg(specialite)
                .arg(lieu)
                .arg(dated.toString(Qt::ISODate))
                .arg(datef.toString(Qt::ISODate))
                .arg(niveau)
                .arg(prix)
                .arg(systemDateTime);
        saveToFile("formation_history.txt", SerieInfo);

        ui->tabView_formation->setModel(tmpformation.afficher());
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la modification de la formation.");
    }
}

void MainWindow::on_id_form_2_activated(int index)
{
    QString id = ui->id_form_2->currentText();
    QSqlQuery query;
    query.prepare("SELECT * FROM FORMATION WHERE id = :id");
    query.bindValue(":id", id.toInt());
    if(query.exec() && query.next()) {
        ui->specialite_form_2->setCurrentText(query.value("specialite").toString());
        ui->lieu_form_2->setCurrentText(query.value("lieu").toString());
        ui->dated_f_form_2->setDate(query.value("dated").toDate());
        ui->datef_f_form_2->setDate(query.value("datef").toDate());
        ui->niveau_form_2->setCurrentText(query.value("niveau").toString());
        ui->prix_form_2->setText(query.value("prix").toString());
    }
}

void MainWindow::on_tri_form_activated(int index)
{
    QString option = ui->tri_form->itemText(index);

    if (option == "ID" ) {

        ui->tabView_formation->setModel(tmpformation.tri_par_id());
    } else if (option == "Prix" ) {

        ui->tabView_formation->setModel(tmpformation.tri_par_prix());

    } else if(option == "DateD") {
        ui->tabView_formation->setModel(tmpformation.tri_par_dated());

    } else if (option == "Prix" && lastTriOption != "ID") {

        ui->tabView_formation->setModel(tmpformation.tri_par_prix());
    } else if (option == "ID" && lastTriOption != "Prix") {

        ui->tabView_formation->setModel(tmpformation.tri_par_prix());
    }


    lastTriOption = option;
}




void MainWindow::on_supprimer_form_clicked()
{

    QModelIndex index = ui->tabView_formation->currentIndex();


    if (index.isValid()) {

        int id = ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), 0)).toInt();


        QString informations ="ID:"+QString::number(id);
        informations +=",Spécialité:"+ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), SpecialiteColumn)).toString();
        informations +=",Lieu:"+ ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), LieuColumn)).toString();

        informations +=",Date Début:"+ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), DatedColumn)).toString();
        informations +=",Date Fin:"+ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), DatefColumn)).toString();
        informations +=",Niveau:"+ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), NiveauColumn)).toString();
        informations +=",Prix:"+ui->tabView_formation->model()->data(ui->tabView_formation->model()->index(index.row(), PrixColumn)).toString();



        tmpformation.enregistrerDerniereFormationSupprimee(informations);


        if (tmpformation.supprimer(id)) {

            ui->tabView_formation->setModel(tmpformation.afficher());
            QMessageBox::information(this, "Suppression réussie", "La formation a été supprimée avec succès.");
            QString systemDateTime1 = QDateTime::currentDateTime().toString(Qt::ISODate);
            QString operation1="supression de formation d'id = ";
            QString SerieInfo = QString("%1 %2 , %3")
                    .arg(operation1)
                    .arg(id)
                    .arg(systemDateTime1);
            saveToFile("formation_history.txt", SerieInfo);

        } else {
            QMessageBox::critical(this, "Erreur de suppression", "Impossible de supprimer la formation.");
        }
    } else {
        QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner une formation à supprimer.");
    }
}


void MainWindow::on_chercher_formation_clicked()
{

    int index = ui->itemToSearch->currentIndex();

    int id = ui->recherche_formation->text().toInt();

    QSqlQueryModel *model;

    if(index==0){
        model = tmpformation.chercher_formation(id);


    }else{
        model = tmpformation.chercher_prix(id);


    }


    if (model->rowCount() > 0) {

        ui->tabView_formation->setModel(model);
    } else {

        ui->tabView_formation->setModel(new QStandardItemModel());
        QMessageBox::information(this, "Aucun résultat", "Aucune formation trouvée avec cent identifiant.");
    }
}



void MainWindow::on_stat_formation_clicked()
{

    QSqlQueryModel *model = tmpformation.afficher(); // Modifier selon votre modèle


    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();
    for (int i = 0; i < model->rowCount(); ++i) {
        QtCharts::QBarSet *set = new QtCharts::QBarSet(model->data(model->index(i, 1)).toString());
        *set << model->data(model->index(i, 6)).toInt(); // Modifier la colonne selon votre modèle (prix par exemple)
        series->append(set);
    }


    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique sur le prix des formations");
    chart->setAnimationOptions(QtCharts::QChart::AllAnimations);


    QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
    axisX->append(model->data(model->index(0, 1)).toString()); // Modifier selon votre modèle
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);


    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    QDialog *chartDialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(chartView);
    chartDialog->setLayout(layout);

    chartDialog->exec();
}

void MainWindow::on_historique_formation_clicked() {
    formation f;
    QString informations = f.derniereFormationSupprimee();
    if (!informations.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Dernière formation supprimée");
        msgBox.setInformativeText(informations);

        QPushButton *button1 = msgBox.addButton(tr("Ajouter"), QMessageBox::ActionRole);
        QPushButton *button2 = msgBox.addButton(tr("Annuler"), QMessageBox::ActionRole);
        msgBox.setDefaultButton(button1);
        msgBox.exec();
        if (msgBox.clickedButton() == button1) {
            QStringList parts = informations.split(",");

            // Extract the data from each segment
            QString  specialite, lieu,  niveau;
            QDate dated, datef;
            int prix=0;
            int id=0;
            for (const QString& part : parts) {
                qDebug() << "Part: " << part;
                // Find the first occurrence of ":"
                int colonIndex = part.indexOf(":");
                if (colonIndex != -1) {
                    // Extract the key and value
                    QString key = part.left(colonIndex).trimmed();
                    QString value = part.mid(colonIndex + 1).trimmed();
                    qDebug() << "Key: " << key << ", Value: " << value;

                    // Match the key to extract the corresponding data
                    if (key == "ID") {
                        id = value.toInt();
                    } else if (key == "Spécialité") {
                        specialite = value;
                    } else if (key == "Lieu") {
                        lieu = value;
                    } else if (key == "Date Début") {
                        // Split date-time string using "T" as separator
                        QStringList dateTimeParts = value.split("T");
                        if (dateTimeParts.size() == 2) {
                            QString dateString = dateTimeParts[0];
                            QString timeString = dateTimeParts[1];
                            value = dateString; // Take only the date part
                            dated = QDate::fromString(value, "yyyy-MM-dd");
                            qDebug() << "Date Début: " << dated;
                        }
                    } else if (key == "Date Fin") {
                        // Split date-time string using "T" as separator
                        QStringList dateTimeParts = value.split("T");
                        if (dateTimeParts.size() == 2) {
                            QString dateString = dateTimeParts[0];
                            QString timeString = dateTimeParts[1];
                            value = dateString; // Take only the date part
                            datef = QDate::fromString(value, "yyyy-MM-dd");
                        }
                    } else if (key == "Niveau") {
                        niveau = value;
                    } else if (key == "Prix") {
                        prix = value.toInt();
                    }
                }
            }

            qDebug() << "Date Début: " << dated;
            // Create a formation object with the extracted data
            formation f1(id , specialite, lieu, dated, datef, niveau, prix);

            // Add the formation
            f1.ajouter();

            ui->tabView_formation->setModel(f.afficher());



        }
        //QMessageBox::information(this, "Dernière formation supprimée", informations);

    } else {
        QMessageBox::information(this, "Aucune formation supprimée", "Aucune formation supprimée à afficher.");
    }
}

void MainWindow::saveToFile(const QString &filename, const QString &data) //history
{
    QFile file(filename);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream stream(&file);
        stream << data << "\n";
        file.close();
    } else {
        qDebug() << "Failed to open the file for writing.";
    }
}

void MainWindow::on_tri_form_currentIndexChanged(const QString &arg1)
{

}

void MainWindow::on_tri_form_activated(const QString &arg1){

}

void MainWindow::on_tabView_formation_activated(const QModelIndex &index)
{

}

void MainWindow::on_tabView_formation_clicked(const QModelIndex &index)
{

}
