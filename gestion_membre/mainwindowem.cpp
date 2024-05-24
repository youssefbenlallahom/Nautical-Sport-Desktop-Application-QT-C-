#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPainter>
#include<QMessageBox>
#include<QSqlTableModel>
#include<QFileDialog>
#include<QInputDialog>
#include<QSqlRecord>
#include<QPixmap>
#include<QDialog>
#include<QDialogButtonBox>
#include<QSqlField>
#include<QPdfWriter>
#include<QDesktopServices>
#include<QSortFilterProxyModel>
#include <QLineEdit>
#include <QSqlTableModel>
#include <QDialogButtonBox>
#include <QDialog>
#include <QSqlError>
#include <QInputDialog>
#include <QSortFilterProxyModel>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QSqlRecord>
#include <QSqlField>
#include <QMessageBox>
#include <QPainter>
#include <QtCharts/QLineSeries>
#include <QtCharts/QPieSlice>
#include <QDesktopServices>
#include <QPdfWriter>
#include <QWidget>
#include <QDebug>
#include <QSystemTrayIcon>

//pour le statique

#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QTimer>

#include <QStandardItemModel>
#include <QStandardItem>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPainter>

#include"ui_camera.h"

#include<QMessageBox>
#include<QSqlTableModel>
#include<QFileDialog>
#include<QInputDialog>
#include<QSqlRecord>
#include<QPixmap>
#include<QDialog>
#include<QDialogButtonBox>
#include<QSqlField>
#include<QPdfWriter>
#include<QDesktopServices>
#include<QSortFilterProxyModel>
#include <QLineEdit>
#include <QSqlTableModel>
#include <QDialogButtonBox>
#include <QDialog>
#include <QDebug>
#include <QSqlError>
#include <QInputDialog>
#include <QSortFilterProxyModel>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QSqlRecord>
#include <QSqlField>
#include <QMessageBox>
#include<QFile>



#include <QtCharts>
#include <QPainter>
#include <QtCharts/QLineSeries>
#include <QtCharts/QPieSlice>
#include <QChartView>
#include <QDesktopServices>
#include <QPdfWriter>
#include <QWidget>
//pour le statique

#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


class ImageDelegate : public QStyledItemDelegate {
public:
    ImageDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        if (index.column() == 6) {  // Colonne "Image"
            QVariant value = index.data(Qt::DisplayRole);
            QString imagePath = value.toString();

            QImage image(imagePath);
            if (!image.isNull()) {
                QRect targetRect = option.rect;

                // Redimensionner l'image pour s'adapter à la cellule sans déborder
                QImage scaledImage = image.scaled(targetRect.size(), Qt::KeepAspectRatio);

                // Centrer l'image dans la cellule
                QPoint center = targetRect.center();
                QRect imageRect(center.x() - scaledImage.width() / 2, center.y() - scaledImage.height() / 2, scaledImage.width(), scaledImage.height());

                painter->drawImage(imageRect, scaledImage);
            }
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }

    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override {
        if (index.column() == 6) {  // Colonne "Image"
            return QSize(100, 100);  // Ajustez la taille de la cellule d'image selon vos besoins
        } else {
            return QStyledItemDelegate::sizeHint(option, index);
        }
    }
};

void MainWindow::on_Retour_7_clicked()
{
    // Validate CIN
    bool cinConversionOk;
    int CIN = ui->mem_cin->text().toInt(&cinConversionOk);
    if (!cinConversionOk || CIN == 0) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir un CIN valide.");
        return;
    }

    // Validate nom
    QString nom = ui->mem_nom->text();
    if (nom.isEmpty() || nom.contains(QRegExp("\\d"))) {
        QMessageBox::critical(this, "Erreur", "Le nom ne peut pas être vide et ne doit pas contenir de chiffres.");
        return;
    }

    // Validate prenom
    QString prenom = ui->mem_prenom->text();
    if (prenom.isEmpty() || prenom.contains(QRegExp("\\d"))) {
        QMessageBox::critical(this, "Erreur", "Le prénom ne peut pas être vide et ne doit pas contenir de chiffres.");
        return;
    }

    // Validate Sexe
    QString Sexe;
    if (ui->mem_male->isChecked()) {
        Sexe = "male";
    } else if (ui->mem_femelle->isChecked()) {
        Sexe = "femelle";
    } else {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner le sexe.");
        return;
    }

    // Validate Date_D (Date de Naissance)
    QDate Date_D = ui->mem_date->date();
    // You can add additional validation for Date_D if needed.

    // Validate tel (numéro de téléphone)
    QString telStr = ui->mem_tel->text();
    QRegularExpression re("^\\d{8}$");  // Expression régulière pour 8 chiffres exactement
    if (!re.match(telStr).hasMatch()) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir un numéro de téléphone valide (8 chiffres).");
        return;
    }
    int tel = telStr.toInt();
    if (tel == 0) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir un numéro de téléphone valide (8 chiffres).");
        return;
    }

    // Validate Email
    QString Email = ui->mem_email->text();
    QRegExp emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");
    if (!emailRegex.exactMatch(Email)) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir une adresse email valide.");
        return;
    }

    // Validate MDP (mot de passe)
    QString MDP = ui->mem_mdp->text();
    if (MDP.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Le mot de passe ne peut pas être vide.");
        return;
    }

    qDebug()<<CIN;
    // Create the Membre object
    Membre M(CIN, nom, prenom, Sexe, Date_D, tel, Email, MDP);

    // Perform the insertion
    bool test = M.ajouter();
    if (test) {
        ui->tableView_5->setModel(M.afficher());
        QMessageBox::information(this, "OK", "Ajout avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "L'ajout n'a pas pu être effectué.");
    }
}


void MainWindow::on_supprimer_clicked()
{
    int CIN= ui->supplineedit->text().toInt();
        bool test = Mtmp.supprimer(CIN);

        if (test) {
            ui->tableView_5->setModel(Mtmp.afficher());
            QMessageBox::information(this, "OK", "Suppression avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "La suppression n'a pas pu être effectuée.");
        }
}

void MainWindow::on_modifier_clicked()
{
    // Validate CIN
    bool cinConversionOk;
    int CIN = ui->memm_cin->text().toInt(&cinConversionOk);
    if (!cinConversionOk || CIN == 0) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir un CIN valide.");
        return;
    }

    // Validate nom
    QString nom = ui->memm_nom->text();
    if (nom.isEmpty() || nom.contains(QRegExp("\\d"))) {
        QMessageBox::critical(this, "Erreur", "Le nom ne peut pas être vide et ne doit pas contenir de chiffres.");
        return;
    }

    // Validate prenom
    QString prenom = ui->memm_prenom->text();
    if (prenom.isEmpty() || prenom.contains(QRegExp("\\d"))) {
        QMessageBox::critical(this, "Erreur", "Le prénom ne peut pas être vide et ne doit pas contenir de chiffres.");
        return;
    }

    // Validate Sexe
    QString Sexe;
    if (ui->memm_male->isChecked()) {
        Sexe = "male";
    } else if (ui->memm_femelle->isChecked()) {
        Sexe = "femelle";
    } else {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner le sexe.");
        return;
    }

    // Validate Date_D (Date de Naissance)
    QDate Date_D = ui->memm_date->date();
    // You can add additional validation for Date_D if needed.

    // Validate tel (numéro de téléphone)
    bool telConversionOk;
    int tel = ui->memm_tel->text().toInt(&telConversionOk);
    if (!telConversionOk || tel == 0 || QString::number(tel).length() != 8) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir un numéro de téléphone valide (8 chiffres).");
        return;
    }

    // Validate Email
    QString Email = ui->memm_email->text();
    QRegExp emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");
    if (!emailRegex.exactMatch(Email)) {
        QMessageBox::critical(this, "Erreur", "Veuillez saisir une adresse email valide.");
        return;
    }

    // Validate MDP (mot de passe)
    QString MDP = ui->memm_mdp->text();
    if (MDP.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Le mot de passe ne peut pas être vide.");
        return;
    }

    // Create the Membre object
    Membre M(CIN, nom, prenom, Sexe, Date_D, tel, Email, MDP);

    // Perform the modification
    bool test = M.modifier(CIN);
    if (test) {
        ui->tableView_5->setModel(M.afficher());
        QMessageBox::information(this, "OK", "Mise à jour avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "La mise à jour n'a pas pu être effectuée.");
    }
}

void MainWindow::setupComboBoxCINS() {
    QList<int> cins = Mtmp.getAllCINS();
    ui->comboBox_mod_2->clear();
    for (int CIN : cins) {
        ui->comboBox_mod_2->addItem(QString::number(CIN));
    }
}












void MainWindow::on_recherche_clicked()
{
    QString nom = ui->lineEdit_nr->text();
    QString prenom = ui->lineEdit_pr->text();
    QString CIN = ui->lineEdit_cinr->text();

    qDebug() << "Recherche avec nom :" << nom << "prenom :" << prenom << "CIN :" << CIN;

    QSqlQueryModel* searchResults = Mtmp.chercher(nom, prenom, CIN);

    if (searchResults && searchResults->rowCount() > 0) {
        qDebug() << "Résultats de la recherche : " << searchResults->rowCount();
        ui->tableView_5->setModel(searchResults);
    } else {
        qDebug() << "Aucun résultat trouvé.";
        QMessageBox::critical(this, "Erreur", "Aucun résultat trouvé pour les critères de recherche spécifiés.");
    }
}






/*void MainWindow::on_statistique_clicked()
{
    // Créez un modèle de données pour le graphique circulaire
    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();

    // Ajoutez des tranches (slices) pour chaque groupe d'âge
    // Vous devrez obtenir les données de votre base de données ici
    // Par exemple, supposons que vous ayez une fonction "getAgeDistribution()" qui renvoie un QHash<QString, int>
    QHash<QString, int> Distribution = Membre::getstat();

    for (const QString &Group : Distribution.keys()) {
        QtCharts::QPieSlice *slice = series->append(Group, Distribution.value(Group));
        // Vous pouvez personnaliser l'apparence de chaque tranche si vous le souhaitez
        Q_UNUSED(slice); // Utilisez cette ligne pour éviter l'avertissement "unused variable"
    }

    // Créez un graphique circulaire et configurez-le
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition par Age");

    // Créez une vue de graphique pour afficher le graphique circulaire
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Affichez la vue du graphique dans une nouvelle fenêtre
    QMainWindow *chartWindow = new QMainWindow(this);
    chartWindow->setCentralWidget(chartView);
    chartWindow->resize(800, 600);
    chartWindow->show();
}*/


/*void MainWindow::on_pushButton_4_clicked()
{
    qDebug() << "Clicked!!";
    int CIN = ui->lineEdit_pdf->text().toInt();
    Membre Mtmp = Membre::findBycode(CIN);
    if (Mtmp.GetCIN() != 0) {
        Membre::imprimer(CIN);

        QMessageBox::information(nullptr, QObject::tr("PDF File created"),
                                 QObject::tr("PDF File created.\n"
                                             "Check your debug directory."), QMessageBox::Cancel);
    } else {
        QMessageBox::warning(nullptr, "CLIENT Not Found", "The specified CLIENT was not found in the database.");
    }

}*/

void MainWindow::on_refresh_dach_clicked()
{
    ui->tableView_5->setModel(Mtmp.afficher());
}

void MainWindow::on_Bmodifier_3_clicked()
{
    // Ajoutez 'Sélectionnez l'ID' comme premier élément dans le QComboBox
    ui->comboBox_mod_2->addItem("Sélectionnez l'ID");

    QString selectedCINText = ui->comboBox_mod_2->currentText();
    int selectedCIN = selectedCINText.toInt();
    Membre MInstance;
    Membre M = MInstance.getMembrebyCINS(selectedCIN);

    ui->memm_cin->setText(QString::number(M.GetCIN()));
    ui->memm_nom->setText(M.GetNom());
    ui->memm_prenom->setText(M.Getprenom());

    if (M.GetSexe() == "male") {
        ui->memm_male->setChecked(true);
    } else if (M.GetSexe() == "femelle") {
        ui->memm_femelle->setChecked(true);
    }

    ui->memm_date->setDate(QDate::fromString(M.GetDate_D().toString("yyyy-MM-dd"), "yyyy-MM-dd"));
    ui->memm_tel->setText(QString::number(M.Gettel()));
    ui->memm_email->setText(M.GetEmail());
    ui->memm_mdp->setText(M.GetMDP());

    // Ajouter le reste de vos champs en fonction de votre classe Membre

    // Ajouter la logique pour les boutons radio en fonction de votre classe Membre

    for (int i = 0; i < MembreModel->rowCount(); ++i) {
        ui->tableView_5->showRow(i);
    }

}



void MainWindow::on_stat_mem_clicked()
{
    // Fetch data from the database
    QSqlQueryModel *model = Mtmp.afficher();

    // Count the number of men and women members
    int numMen = 0;
    int numWomen = 0;
    for (int i = 0; i < model->rowCount(); ++i) {
        QString gender = model->data(model->index(i, 3)).toString(); // Assuming 'SEXE' column is at index 3
        if (gender.toLower() == "male") {
            numMen++;
        } else if (gender.toLower() == "femelle") {
            numWomen++;
        }
    }

    // Create a bar series and populate it with data
    QtCharts::QBarSet *setMen = new QtCharts::QBarSet("Men");
    *setMen << numMen;
    QtCharts::QBarSet *setWomen = new QtCharts::QBarSet("Women");
    *setWomen << numWomen;

    QtCharts::QBarSeries *series = new QtCharts::QBarSeries();
    series->append(setMen);
    series->append(setWomen);

    // Create a bar chart and add the series
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistics on the number of men and women members");
    chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

    // Create and configure the axes
    QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
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

    // Adjust the minimum size policy to prevent the error
    chartDialog->setMinimumSize(400, 300); // Adjust the size as needed

    // Show the chart window
    chartDialog->show();
}
void MainWindow::onHeaderClickedmem(int logicalIndex) {
    if (ui->tableView_5) {

        QSqlQueryModel *existingModel = qobject_cast<QSqlQueryModel*>(ui->tableView_5->model());

        if (existingModel) {

            QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(existingModel);
            ui->tableView_5->setModel(proxyModel);
            ui->tableView_5->setSortingEnabled(true);
            QString sortAttribute = existingModel->headerData(logicalIndex, Qt::Horizontal).toString();
            proxyModel->sort(logicalIndex, Qt::AscendingOrder);
        } else {
            qDebug() << "Existing model is not of type QSqlQueryModel.";
        }
    } else {
        qDebug() << "QTableView (tableView_5) not found.";
    }
}
void MainWindow::on_pdf_mem_clicked()
{
    QModelIndex index = ui->tableView_5->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner un membre.");
        return;
    }

    int selectedId = index.sibling(index.row(), 0).data().toInt(); // Supposons que la colonne 0 contient l'ID

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous télécharger le PDF de ce membre ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Membre membre;
        membre.telecharger_PDF(selectedId);
        QDesktopServices::openUrl(QUrl::fromLocalFile("../integration_crud/import_membre.pdf"));

    }
}
