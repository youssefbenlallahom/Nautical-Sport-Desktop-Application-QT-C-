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
#include "employe.h"
#include "abonnement.h"
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
/*#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>*/
#include <QListView>
#include<QDir>
#include<QFile>
#include<QTextStream>
#include<QStringList>
#include<QtCharts>
#include <QStringListModel>

#include <QListView>
#include<QWidget>
#include<QDir>
#include<QFile>
#include<QTextStream>
#include<QStringList>
#include<QtCharts>
#include<QStringListModel>
#include <QListView>
#include <QPieSeries>
#include <QKeyEvent>

bool fileExists(const QString& filePath)
{
    QFile file(filePath);
    return file.exists();
}
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

/*
 * MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    abonnementModel = new QSqlTableModel(this);
    abonnementModel->setTable("ABONNEMENT");
    abonnementModel->select();

    abonnementModel->setHeaderData(0, Qt::Horizontal, "ID");
    QSet<QString> existingItems;
    for (int i = 0; i < abonnementModel->columnCount(); ++i) {
        QString headerData = abonnementModel->headerData(i, Qt::Horizontal).toString();
        if (!existingItems.contains(headerData)) { // Vérifiez si l'élément n'est pas déjà dans l'ensemble
            existingItems.insert(headerData); // Ajoutez l'élément à l'ensemble
            ui->choix_combo_ab->addItem(headerData); // Ajoutez l'élément à la combobox
        }
    }
    ui->tableView_7->setModel(abonnementModel);
    ui->tableView_7->setModel(amtp.afficherab());
    connect(ui->tableView_7->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(onHeaderClicked_2(int)));
    connect(ui->refresh_ab, &QPushButton::clicked, this, &MainWindow::on_refresh_ab_clicked);
    setupComboBoxIds();
    setupComboBoxcin();
    connect(ui->ok, &QPushButton::clicked, this, &MainWindow::on_ok_clicked_submitmod);
    connect(ui->modifier_ab, &QPushButton::clicked, this, &MainWindow::on_modifier_ab_clicked_modifier);
    connect(ui->recherche_ab_bouton_2, SIGNAL(clicked()), this, SLOT(on_recherche_ab_bouton_2_clicked()));
    connect(ui->tableView_7, SIGNAL(clicked(QModelIndex)), this, SLOT(afficherCodeBarre()));
    populateTodoList();
    QString styleSheet = "\
            QTableView { \
                border-collapse: collapse; \
                width: 100%; \
            } \
            QTableView::item { \
                border: 1px solid  #0EABB8;
                padding: 8px; \
                background-color: #004080;
                color: #FFFFFF;
            } \
            QTableView::item:selected { \
                background-color:  #0EABB8;
                color: #FFFFFF;
            }";

}*/

/*----------------------------------------------------------------------------------------------*/
void MainWindow::on_soumetre_ab_clicked()
    {
           int id = ui->id_ab->text().toInt();
           QString type = ui->type_ab->currentText();
           int prix = ui->prix_ab->text().toInt();
           QString acces = ui->acces_ab->currentText();
           QDate dateDebut = ui->date_deb->date();
           QDate dateFin = ui->date_fin->date();
           qDebug() << "Contenu du ComboBox:" << ui->combobox_mb->currentText();

           // Assurez-vous que les données peuvent être converties en entiers
           bool conversionOk;
           int id_membre = ui->combobox_mb->currentText().toInt(&conversionOk);

           if (!conversionOk) {
               qDebug() << "Erreur de conversion en entier.";
               // Gérer l'erreur de conversion
           }

           else {
               qDebug() << "ID membre lu avec succès:" << id_membre;
           }
           Abonnement A(id, type, prix, acces, dateDebut, dateFin,id_membre);
           if (type.isEmpty()) {
               QMessageBox::critical(this, "Erreur", "Le type ne peut pas être vide.");
                   return;
            }


               if (acces.isEmpty()) {
                   QMessageBox::critical(this, "Erreur", "L acces ne peut pas être vide.");
                   return;
               }

               if (!dateDebut.isValid()) {
                   QMessageBox::critical(this, "Erreur", "La date de début n'est pas valide.");
                   return;
               }

               if (!dateFin.isValid()) {
                   QMessageBox::critical(this, "Erreur", "La date de fin n'est pas valide.");
                   return;
               }

               if (dateDebut > dateFin) {
                   QMessageBox::critical(this, "Erreur", "La date de début doit être antérieure à la date de fin.");
                   return;
               }

           bool test = A.ajouter();

           if (test) {
               ui->tableView_7->setModel(amtp.afficherab());
               QMessageBox::information(this, "OK", "Ajout effectué.");
           } else {
               QMessageBox::critical(this, "Erreur", "Ajout non effectué.");
           }
    }

    void MainWindow::setupComboBoxIds()
    {

        Abonnement abonnementInstance;
        QList<int> ids = abonnementInstance.getAllIds();
        ui->mod_combobox->clear();
        for (int id : ids) {
            ui->mod_combobox->addItem(QString::number(id));
        }
    }
    void MainWindow::setupComboBoxcin()
    {
        Abonnement abonnementInstance; // Créer une instance de la classe Abonnement
        QList<int> cins = abonnementInstance.getAllcin(); // Utiliser l'instance pour appeler la fonction
        ui->combobox_mb->clear();
        for (int cin : cins) {
            ui->combobox_mb->addItem(QString::number(cin));
        }
    }
    void MainWindow::on_ok_clicked_submitmod()
    {
        QString selectedIdText = ui->mod_combobox->currentText();
        int selectedId = selectedIdText.toInt();
        Abonnement abonnementInstance;
        Abonnement abonnement = abonnementInstance.getAbonnementById(selectedId);

        // Charger les données de l'abonnement dans les champs d'édition
        ui->type_ab_2->setCurrentText(abonnement.getType());
        ui->prix_ab_2->setText(QString::number(abonnement.getprix()));
        ui->acces_ab_2->setCurrentText(abonnement.getAcces());
        ui->dateEdit_debut->setDate(abonnement.getDateDebut());
        ui->dateEdit_fin->setDate(abonnement.getDateFin());


        // Afficher les données dans les champs d'édition
        for (int i = 0; i < abonnementModel->rowCount(); ++i) {
            ui->tableView_7->showRow(i);
        }
    }
    void MainWindow::on_sup_ab_clicked()
    {
        QModelIndexList selectedRows = ui->tableView_7->selectionModel()->selectedRows();
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
            int id = ui->tableView_7->model()->data(ui->tableView_7->model()->index(row, 0)).toInt();
            bool test = amtp.supprimer(id);

            if (test) {
                ui->tableView_7->model()->removeRow(row);
            } else {
                QMessageBox::critical(this, "Error", "Deletion failed for some rows.");
            }
        }
        QMessageBox::information(this, "Success", "Deletion completed.");
    }
    void MainWindow::onHeaderClicked_3(int logicalIndex) {
        if (ui->tableView_7) {

            QSqlQueryModel *existingModel = qobject_cast<QSqlQueryModel*>(ui->tableView_7->model());

            if (existingModel) {

                QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
                proxyModel->setSourceModel(existingModel);
                ui->tableView_7->setModel(proxyModel);
                ui->tableView_7->setSortingEnabled(true);
                QString sortAttribute = existingModel->headerData(logicalIndex, Qt::Horizontal).toString();
                proxyModel->sort(logicalIndex, Qt::AscendingOrder);
            } else {
                qDebug() << "Existing model is not of type QSqlQueryModel.";
            }
        } else {
            qDebug() << "QTableView (tableView_7) not found.";
        }
    }


    void MainWindow::on_modifier_ab_clicked_modifier() {
        QString selectedIdText = ui->mod_combobox->currentText();
        int selectedId = selectedIdText.toInt();
        Abonnement abonnementInstance;
        Abonnement abonnement = abonnementInstance.getAbonnementById(selectedId);

        QString updatedType = ui->type_ab_2->currentText();
        float updatedPrix = ui->prix_ab_2->text().toFloat();
        QString updatedAcces = ui->acces_ab_2->currentText();
        QDate updatedDateDebut = ui->dateEdit_debut->date();
        QDate updatedDateFin = ui->dateEdit_fin->date();

        if (updatedType.isEmpty()) {
            QMessageBox::critical(this, "Erreur", "Le type ne peut pas être vide.");
            return;
        }

        if (updatedPrix == 0) {
            QMessageBox::critical(this, "Erreur", "Le prix ne peut pas être vide.");
            return;
        }

        if (updatedAcces.isEmpty()) {
            QMessageBox::critical(this, "Erreur", "L'accès ne peut pas être vide.");
            return;
        }

        if (!updatedDateDebut.isValid()) {
            QMessageBox::critical(this, "Erreur", "La date de début n'est pas valide.");
            return;
        }

        if (!updatedDateFin.isValid()) {
            QMessageBox::critical(this, "Erreur", "La date de fin n'est pas valide.");
            return;
        }

        if (updatedDateDebut > updatedDateFin) {
            QMessageBox::critical(this, "Erreur", "La date de début doit être antérieure à la date de fin.");
            return;
        }

        // Utilisation de l'instance 'abonnement' pour effectuer les modifications
        abonnement.setType(updatedType);
        abonnement.setprix(updatedPrix);
        abonnement.setAcces(updatedAcces);
        abonnement.setDateDebut(updatedDateDebut);
        abonnement.setDateFin(updatedDateFin);

        bool modificationResult = abonnement.modifierAbonnement(selectedId);
        if (modificationResult) {
            QMessageBox::information(this, "Success", "Abonnement modifié avec succès.");
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la modification de l'abonnement.");
        }
    }

    void MainWindow::on_refresh_ab_clicked()
    {
        abonnementModel->select();
            for (int i = 1; i < abonnementModel->rowCount(); ++i) {
                    ui->tableView_7->showRow(i);
                }
            ui->tableView_7->setModel(abonnementModel);
    }

    void MainWindow::on_refresh_ab_2_clicked()
    {
        setupComboBoxIds();
    }

    void MainWindow::fillComboBoxab()
    {
        ui->choix_combo_ab->clear();
        QStringList attributes;
        for (int i = 0; i < abonnementModel->columnCount(); ++i) {
            QString attribute = abonnementModel->headerData(i, Qt::Horizontal).toString().toLower(); // Convertir l'attribut en minuscules
            if (!attributes.contains(attribute)) {
                attributes.append(attribute);
            }
        }
        ui->choix_combo_ab->addItems(attributes);
    }
    void MainWindow::on_recherche_ab_bouton_2_clicked()
    {
        QString selectedAttribute = ui->choix_combo_ab->currentText();

        int columnIndex = abonnementModel->fieldIndex(selectedAttribute);

        QString searchValue = QInputDialog::getText(this, "Rechercher", "Entrez la valeur de recherche:");

        ui->tableView_7->clearSelection();

        if (searchValue.isEmpty()) {
            for (int i = 0; i < abonnementModel->rowCount(); ++i) {
                ui->tableView_7->showRow(i);
            }
        } else {
            for (int i = 0; i < abonnementModel->rowCount(); ++i) {
                if (abonnementModel->data(abonnementModel->index(i, columnIndex)).toString() == searchValue) {
                    ui->tableView_7->showRow(i);
                } else {
                    ui->tableView_7->hideRow(i);
                }
            }
        }
    }

    void MainWindow::on_pdf_ab_clicked()
    {
        QModelIndex index = ui->tableView_7->selectionModel()->currentIndex();
        if (!index.isValid()) {
            QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner un abonnement.");
            return;
        }

        int selectedId = index.sibling(index.row(), 0).data().toInt(); // Supposons que la colonne 0 contient l'ID

        // Demander confirmation à l'utilisateur
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Voulez-vous télécharger le PDF de cet abonnement ?", QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            Abonnement abonnement;
            abonnement.telechargerPDF_ab(selectedId);
            QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/mehdi/Downloads/integration_crud/abonnement.pdf"));

        }
    }
    void MainWindow::on_stat_abonnement_2_clicked()
    {
        // Récupérer les données de la base de données
        QSqlQueryModel *model = amtp.afficherab();

        // Créer une série de barres et la remplir avec les données
        QtCharts::QBarSeries *series = new QtCharts::QBarSeries();
        for (int i = 0; i < model->rowCount(); ++i) {
            QtCharts::QBarSet *set = new QtCharts::QBarSet(model->data(model->index(i, 3)).toString());
            *set << model->data(model->index(i, 2)).toInt(); // En supposant que la colonne 2 représente la quantité
            series->append(set);
        }

        // Créer un graphique à barres et ajouter la série
        QtCharts::QChart *chart = new QtCharts::QChart();
        chart->addSeries(series);
        chart->setTitle("Statistique sur le nombre d'abonnements par type");
        chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

        // Créer et configurer les axes
        QtCharts::QBarCategoryAxis *axisX = new QtCharts::QBarCategoryAxis();
        axisX->append(model->data(model->index(2, 3)).toString()); // En supposant que la colonne 1 représente les types d'abonnements
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

        QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis();
        chart->addAxis(axisY, Qt::AlignLeft);

        // Créer une vue de graphique pour afficher le graphique
        QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        // Mettre en place une nouvelle fenêtre pour afficher le graphique
        QDialog *chartDialog = new QDialog(this);
        QVBoxLayout *layout = new QVBoxLayout();
        layout->addWidget(chartView);
        chartDialog->setLayout(layout);

        // Afficher la fenêtre du graphique
        chartDialog->exec();
    }
    /*void MainWindow::afficherCodeBarre() {
        // Récupérer l'abonnement sélectionné dans tableView_7
        QModelIndex index = ui->tableView_7->selectionModel()->currentIndex();
        QString abonnement = ui->tableView_7->model()->data(index).toString();

        // Générer le code à barres
        ZXing::MultiFormatWriter writer(ZXing::BarcodeFormat::CODE_128); // Modifier selon le type de code à barres souhaité
        std::wstring abonnementWString = abonnement.toStdWString();
        ZXing::BitMatrix bitMatrix = writer.encode(abonnementWString, 200, 200);

        // Vérifier si le bitMatrix est valide
        if (bitMatrix.width() == 0 || bitMatrix.height() == 0) {
            QMessageBox::warning(this, "Avertissement", "Impossible de générer le code à barres.");
            return;
        }

        // Convertir le BitMatrix en QImage
        int width = bitMatrix.width();
        int height = bitMatrix.height();
        QImage image(width, height, QImage::Format_RGB32);
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                image.setPixel(x, y, bitMatrix.get(x, y) ? qRgb(0, 0, 0) : qRgb(255, 255, 255));
            }
        }

        // Afficher l'image
        QDialog barcodeDialog(this);
        QLabel barcodeLabel(&barcodeDialog);
        barcodeLabel.setPixmap(QPixmap::fromImage(image));
        barcodeLabel.show();
        barcodeDialog.exec();
    }*/

    QStringList readFileToList(const QString &fileName)
    {
        QFile file(fileName);
        QStringList dataList;

        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file);
            while (!in.atEnd())
            {
                QString line = in.readLine();
                dataList << line;
            }
            file.close();
        }
        return dataList;
    }

    void MainWindow::populateTodoList()
    {
        // Load "a faire.txt"
        QString fileNameTodo = QDir::currentPath() + "//../integration_crud/backlog/" + "afaire.txt";
        QStringList todoList = readFileToList(fileNameTodo);

        // Set the model for "a faire.txt"
        QStringListModel *todoModel = new QStringListModel(this);
        todoModel->setStringList(todoList);
        ui->widget_2->setModel(todoModel);

        // Load "en cours.txt"
        QString fileNameEnCours = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";
        QStringList enCoursList = readFileToList(fileNameEnCours);

        // Set the model for "en cours.txt"
        QStringListModel *enCoursModel = new QStringListModel(this);
        enCoursModel->setStringList(enCoursList);
        ui->widget_3->setModel(enCoursModel);

        // Load "terminé.txt"
        QString fileNameTermine = QDir::currentPath() + "/../integration_cruda/backlog/" + "terminé.txt";
        QStringList termineList = readFileToList(fileNameTermine);

        // Set the model for "terminé.txt"
        QStringListModel *termineModel = new QStringListModel(this);
        termineModel->setStringList(termineList);
        ui->widget_4->setModel(termineModel);
    }

    void MainWindow::on_pushButton_clicked()
    {
        QString text = ui->lineEdit_ab->text();
        QString fileName = QDir::currentPath() + "/../integration_crud/backlog/" + "afaire.txt";

        // Open the file in AppendText mode
        QFile file(fileName);
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            // Write the text to the file
            QTextStream stream(&file);
            stream << text << "\n";  // Use "\n" for newline

            // Close the file
            file.close();

        }
        populateTodoList();
    }

    void MainWindow::on_pushButton_ab_8_clicked()
    {
        // Get the selected index from the list view
        QModelIndexList selectedIndexes = ui->widget_2->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No item selected
            return;
        }

        // Get the selected row from the index
        int selectedRow = selectedIndexes.at(0).row();

        // Get the current file content
        QString fileName = QDir::currentPath() + "/../integration_crud/backlog/" + "afaire.txt";
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Failed to open file for reading:" << fileName;
            return;
        }

        QStringList dataList;
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            dataList << line;
        }
        file.close();

        // Remove the selected row from the list
        if (selectedRow >= 0 && selectedRow < dataList.size())
        {
            QString selectedLine = dataList.takeAt(selectedRow);

            // Write the updated list back to the file
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "Failed to open file for writing:" << fileName;
                return;
            }
            QTextStream out(&file);
            for (const QString &line : dataList)
            {
                out << line << endl;
            }
            file.close();

            // Append the selected line to the "en cours.txt" file
            QString enCoursFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";
            QFile enCoursFile(enCoursFileName);
            if (!enCoursFile.open(QIODevice::Append | QIODevice::Text))
            {
                qDebug() << "Failed to open file for appending:" << enCoursFileName;
                return;
            }
            QTextStream enCoursOut(&enCoursFile);
            enCoursOut << selectedLine << endl;
            enCoursFile.close();
        }

        // Refresh the list view
        populateTodoList();
    }

    void MainWindow::on_pushButton_10_clicked()
    {
        // Get the selected index from the list view
        QModelIndexList selectedIndexes = ui->widget_3->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No item selected
            return;
        }

        // Get the selected row from the index
        int selectedRow = selectedIndexes.at(0).row();

        // Get the current file content of "en cours.txt"
        QString enCoursFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";
        QFile enCoursFile(enCoursFileName);
        if (!enCoursFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Failed to open file for reading:" << enCoursFileName;
            return;
        }

        QStringList enCoursList;
        QTextStream in(&enCoursFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            enCoursList << line;
        }
        enCoursFile.close();

        // Remove the selected row from the list
        if (selectedRow >= 0 && selectedRow < enCoursList.size())
        {
            QString selectedLine = enCoursList.takeAt(selectedRow);

            // Write the updated list back to the file "en cours.txt"
            if (!enCoursFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "Failed to open file for writing:" << enCoursFileName;
                return;
            }
            QTextStream out(&enCoursFile);
            for (const QString &line : enCoursList)
            {
                out << line << endl;
            }
            enCoursFile.close();

            // Append the selected line to the "terminé.txt" file
            QString termineFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "terminé.txt";
            QFile termineFile(termineFileName);
            if (!termineFile.open(QIODevice::Append | QIODevice::Text))
            {
                qDebug() << "Failed to open file for appending:" << termineFileName;
                return;
            }
            QTextStream termineOut(&termineFile);
            termineOut << selectedLine << endl;
            termineFile.close();
        }

        // Refresh the list view
        populateTodoList();
    }

    void MainWindow::on_pushButton_11_clicked()
    {
        // Get the selected index from the list view
        QModelIndexList selectedIndexes = ui->widget_4->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No item selected
            return;
        }

        // Get the selected row from the index
        int selectedRow = selectedIndexes.at(0).row();

        // Get the current file content of "terminé.txt"
        QString termineFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "terminé.txt";
        QFile termineFile(termineFileName);
        if (!termineFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Failed to open file for reading:" << termineFileName;
            return;
        }

        QStringList termineList;
        QTextStream in(&termineFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            termineList << line;
        }
        termineFile.close();

        // Remove the selected row from the list
        if (selectedRow >= 0 && selectedRow < termineList.size())
        {
            QString selectedLine = termineList.takeAt(selectedRow);

            // Write the updated list back to the file "terminé.txt"
            if (!termineFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "Failed to open file for writing:" << termineFileName;
                return;
            }
            QTextStream out(&termineFile);
            for (const QString &line : termineList)
            {
                out << line << endl;
            }
            termineFile.close();

            // Append the selected line to the "en cours.txt" file
            QString enCoursFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";
            QFile enCoursFile(enCoursFileName);
            if (!enCoursFile.open(QIODevice::Append | QIODevice::Text))
            {
                qDebug() << "Failed to open file for appending:" << enCoursFileName;
                return;
            }
            QTextStream enCoursOut(&enCoursFile);
            enCoursOut << selectedLine << endl;
            enCoursFile.close();
        }

        // Refresh the list view
        populateTodoList();
    }



    void MainWindow::on_pushButton_9_clicked()
    {
        // Get the selected index from the list view
        QModelIndexList selectedIndexes = ui->widget_3->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No item selected
            return;
        }

        // Get the selected row from the index
        int selectedRow = selectedIndexes.at(0).row();

        // Get the current file content of "en cours.txt"
        QString enCoursFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";
        QFile enCoursFile(enCoursFileName);
        if (!enCoursFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Failed to open file for reading:" << enCoursFileName;
            return;
        }

        QStringList enCoursList;
        QTextStream in(&enCoursFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            enCoursList << line;
        }
        enCoursFile.close();

        // Remove the selected row from the list
        if (selectedRow >= 0 && selectedRow < enCoursList.size())
        {
            QString selectedLine = enCoursList.takeAt(selectedRow);

            // Write the updated list back to the file "en cours.txt"
            if (!enCoursFile.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "Failed to open file for writing:" << enCoursFileName;
                return;
            }
            QTextStream out(&enCoursFile);
            for (const QString &line : enCoursList)
            {
                out << line << endl;
            }
            enCoursFile.close();

            // Append the selected line to the "a faire.txt" file
            QString aFaireFileName = QDir::currentPath() + "/../integration_crud/backlog/" + "afaire.txt";
            QFile aFaireFile(aFaireFileName);
            if (!aFaireFile.open(QIODevice::Append | QIODevice::Text))
            {
                qDebug() << "Failed to open file for appending:" << aFaireFileName;
                return;
            }
            QTextStream aFaireOut(&aFaireFile);
            aFaireOut << selectedLine << endl;
            aFaireFile.close();
        }

        // Refresh the list view
        populateTodoList();
    }

    /*void MainWindow::on_pushButton_suppr_clicked()
    {
        // Determine which list view is currently active
        QListView *currentListView = nullptr;
        QString currentFileName;

        if (ui->tabWidget->currentIndex() == 0) {
            currentListView = ui->widget_2;
            currentFileName = "afaire.txt";
        } else if (ui->tabWidget->currentIndex() == 1) {
            currentListView = ui->widget_3;
            currentFileName = "en cours.txt";
        } else if (ui->tabWidget->currentIndex() == 2) {
            currentListView = ui->widget_4;
            currentFileName = "terminé.txt";
        }

        if (!currentListView)
        {
            // No list view selected
            return;
        }

        // Get the selected index from the list view
        QModelIndexList selectedIndexes = currentListView->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No item selected
            return;
        }

        // Get the selected row from the index
        int selectedRow = selectedIndexes.at(0).row();

        // Get the current file content
        QString fileName = QDir::currentPath() + "/../integration_crud2/backlog/" + currentFileName;
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Failed to open file for reading:" << fileName;
            return;
        }

        QStringList dataList;
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            dataList << line;
        }
        file.close();

        // Remove the selected row from the list
        if (selectedRow >= 0 && selectedRow < dataList.size())
        {
            dataList.removeAt(selectedRow);

            // Write the updated list back to the file
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "Failed to open file for writing:" << fileName;
                return;
            }
            QTextStream out(&file);
            for (const QString &line : dataList)
            {
                out << line << endl;
            }
            file.close();
        }

        // Refresh the list view
        populateTodoList();
    }*/

    void MainWindow::on_pushButton_5_clicked()
    {
        QString text = ui->lineEdit_ab1->text();
        QString fileName = QDir::currentPath() + "/../integration_crud/backlog/" + "en cours.txt";

        // Open the file in AppendText mode
        QFile file(fileName);
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            // Write the text to the file
            QTextStream stream(&file);
            stream << text << "\n";  // Use "\n" for newline

            // Close the file
            file.close();

        }
        populateTodoList();
    }

    void MainWindow::on_pushButton_6_clicked()
    {
        QString text = ui->lineEdit_ab2->text();
        QString fileName = QDir::currentPath() + "/../integration_crud/backlog/" + "terminé.txt";

        // Open the file in AppendText mode
        QFile file(fileName);
        if (file.open(QIODevice::Append | QIODevice::Text))
        {
            // Write the text to the file
            QTextStream stream(&file);
            stream << text << "\n";  // Use "\n" for newline

            // Close the file
            file.close();

        }
        populateTodoList();
    }
    /*void MainWindow::afficherCodeBarre() {
        // Récupérer l'abonnement sélectionné dans tableView_7
        QModelIndex index = ui->tableView_7->selectionModel()->currentIndex();
        QString abonnement = ui->tableView_7->model()->data(index).toString();
        qDebug() << "Abonnement récupéré depuis tableView_7 :" << abonnement;
        // Générer le code à barres
        QZXingEncoder encoder;
        QImage barcode = encoder.encodeData(abonnement);

        // Vérifier si le code à barres est valide
        if (barcode.isNull()) {
            QMessageBox::warning(this, "Avertissement", "Impossible de générer le code à barres.");
            return;
        }
        // Afficher le code à barres dans une boîte de dialogue modale
        QDialog dialog(this);
        QVBoxLayout layout(&dialog);
        QLabel label;
        label.setPixmap(QPixmap::fromImage(barcode));
        layout.addWidget(&label);
        dialog.setLayout(&layout);
        dialog.exec();
    }*/
    /*void MainWindow::afficherCodeBarre() {
        // Récupérer l'abonnement sélectionné dans tableView_7
        QModelIndex index = ui->tableView_7->selectionModel()->currentIndex();
        QString abonnement = ui->tableView_7->model()->data(index).toString();
        qDebug() << "Abonnement récupéré depuis tableView_7 :" << abonnement;

        // Créer un scanner ZBar
        zbar::ImageScanner scanner;
        scanner.set_config(zbar::ZBAR_NONE, zbar::ZBAR_CFG_ENABLE, 1);

        // Charger l'abonnement en tant qu'image (dans ce cas, nous utilisons une image bidimensionnelle)
        QImage qImage; // Chargez l'image de l'abonnement ici

        // Créer une image ZBar à partir de l'image Qt
        zbar::Image zImage(qImage.width(), qImage.height(), "Y800", qImage.bits(), qImage.width() * qImage.height());

        // Scanner le code-barres
        int n = scanner.scan(zImage);

        // Vérifier si un code-barres a été trouvé
        if (n == 0) {
            QMessageBox::warning(this, "Avertissement", "Aucun code-barres trouvé pour cet abonnement.");
            return;
        }


        // Récupérer les données du code-barres
        QString barcodeData;
        for (zbar::Image::SymbolIterator symbol = zImage.symbol_begin(); symbol != zImage.symbol_end(); ++symbol) {
            barcodeData = QString::fromStdString(symbol->get_data());
        }

        // Afficher les données du code-barres dans une boîte de dialogue modale
        QDialog dialog(this);
        QVBoxLayout layout(&dialog);
        QLabel label;
        label.setText(barcodeData);
        layout.addWidget(&label);
        dialog.setLayout(&layout);
        dialog.exec();
    }
*/







