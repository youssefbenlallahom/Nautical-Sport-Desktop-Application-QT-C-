#include"mainwindow.h"
#include"ui_mainwindow.h"

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
#include <QObject>
#include <QComboBox>
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
#include <QtGlobal> // Include for qrand()
#include "mimepart.h"
#include "mimeattachment.h"
#include "emailaddress.h"
#include "mimetext.h"
#include "mimemessage.h"
#include "smtpclient.h"
//pour le statique

#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>


void MainWindow::on_ajout_ev_clicked()
{
    QString nome = ui->nome->text();
    QString typee = ui->typee->currentText();
    QDate dated = ui->dated->date();
    QDate datef = ui->datef->date();
    int nbp = ui->nbp->text().toInt();
    float prixe = ui->prixe->text().toFloat();
    QString descr = ui->descr->text();
    QDate currentDate = QDate::currentDate();

    if (nome.isEmpty() || typee.isEmpty() || descr.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }

    if (nome.length() < 2) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom et le prénom doivent contenir au moins 2 caractères."), QMessageBox::Cancel);
        return;
    }

    QRegExp nomeRegex("^[a-zA-Z ]+$");
    if (!nomeRegex.exactMatch(nome)) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom doit contenir uniquement des lettres et des espaces."), QMessageBox::Cancel);
        return;
    }

    if (prixe <= 0) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le prix de l'evenement doit être supérieur à zéro."), QMessageBox::Cancel);
        return;
    }
    if (dated < currentDate) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("La date de debut de l'evenement ne doit pas etre inferieure a la date d'aujourd'hui."), QMessageBox::Cancel);
        return;
    }
    if (datef < dated){
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("La date de fin de l'evenement ne doit pas etre inferieure a la date de debut ."), QMessageBox::Cancel);
        return;
    }

    evenement e;
    e.setNom(nome);
    e.setDated(dated);
    e.setDatef(datef);
    if (e.existe_ev()) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Cet événement existe déjà."), QMessageBox::Cancel);
        return;
    }

    e.setType(typee);
    e.setNbp(nbp);
    e.setPrix(prixe);
    e.setDescr(descr);
    if(e.ajouter_ev()) {
        ui->tabe->setModel(tmpevenement.afficher_ev());
        ui->tabe->resizeColumnsToContents();
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué.\n"
                                             "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                               QObject::tr("Ajout non effectué.\n"
                                           "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
    loadEventsFromDatabase();
}

void MainWindow::on_supprimer_ev_clicked()
{
    QModelIndexList selectedRows = ui->tabe->selectionModel()->selectedRows();

    // Vérifier si des lignes sont sélectionnées
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner au moins une ligne à supprimer.");
        return;
    }

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer les evenements sélectionnés ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::No) {
        return;
    }

    // Supprimer les employés de la base de données
    evenement evenement;
    bool success = true;
    for (const QModelIndex &index : selectedRows) {
        QString id = index.data().toString(); // Assuming ID is in the first column
        if (!evenement.supprimer_ev(id)) {
            success = false;
            break;
        }
    }

    if (success) {
        QMessageBox::information(this, "Succès", "Les evenements sélectionnés ont été supprimés avec succès.");
        evenementModel->select();
    } else {
        QMessageBox::critical(this, "Erreur", "Une erreur s'est produite lors de la suppression des evenements.");
    }
}



void MainWindow::on_rechercher_ev_clicked()
{
    QString selectedAttribute = ui->comboBox_11->currentText();
    int columnIndex = evenementModel->fieldIndex(selectedAttribute);
    QString searchValue = QInputDialog::getText(this, "Search", "Enter the value to search for:");

    ui->tabe->clearSelection();

    if (searchValue.isEmpty()) {
        for (int i = 0; i < evenementModel->rowCount(); ++i) {
            ui->tabe->showRow(i);
        }
    } else {
        for (int i = 0; i < evenementModel->rowCount(); ++i) {
            if (evenementModel->data(evenementModel->index(i, columnIndex)).toString() == searchValue) {
                ui->tabe->showRow(i);
            } else {
                ui->tabe->hideRow(i);
            }
        }
    }
}

void MainWindow::on_refresh_ev_clicked()
{
    evenementModel->select();
    for (int i = 0; i < evenementModel->rowCount(); ++i) {
        ui->tabe->showRow(i);
    }
    ui->tabe->setModel(evenementModel);
}

void MainWindow::onHeaderClicked_2(int logicalIndex) {
    if (ui->tabe) {

        QSqlQueryModel *existingModel = qobject_cast<QSqlQueryModel*>(ui->tabe->model());

        if (existingModel) {

            QSortFilterProxyModel *proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(existingModel);
            ui->tabe->setModel(proxyModel);
            ui->tabe->setSortingEnabled(true);
            QString sortAttribute = existingModel->headerData(logicalIndex, Qt::Horizontal).toString();
            proxyModel->sort(logicalIndex, Qt::AscendingOrder);
        } else {
            qDebug() << "Existing model is not of type QSqlQueryModel.";
        }
    } else {
        qDebug() << "QTableView (tabe) not found.";
    }
}


void MainWindow::setupComboBoxIds_ev() {

    evenement evenementInstance;
    QList<int> ids = evenementInstance.getAllIds_ev();
    ui->mod->clear();
    for (int id : ids) {
        ui->mod->addItem(QString::number(id));
    }
}

void MainWindow::on_submit_ev_clicked() {
    QString selectedIdText = ui->mod->currentText();
    int selectedId = selectedIdText.toInt();
    evenement evInstance;
    evenement ev = evInstance.getEvenementById(selectedId);
    ui->nome_m->setText(ev.getNom());
    ui->typee_m->setCurrentText(ev.getType());
    ui->dated_m->setDate(ev.getDated());
    ui->datef_m->setDate(ev.getDatef());
    ui->nbp_m->setText(QString::number(ev.getNbp()));
    ui->prixe_m->setText(QString::number(ev.getPrix()));
    ui->descr_m->setText(ev.getDescr());
    for (int i = 0; i < evenementModel->rowCount(); ++i) {
            ui->tabe->showRow(i);
        }
}

void MainWindow::on_modifier_ev_clicked()
{
    QString selectedIdText = ui->mod->currentText();
    int selectedId = selectedIdText.toInt();
    evenement evInstance;
    evenement ev = evInstance.getEvenementById(selectedId);
    QString updatedNom = ui->nome_m->text();
    QString updatedType = ui->typee_m->currentText();
    QDate updateddated = ui->dated_m->date();
    QDate updateddatef = ui->datef_m->date();
    int updatedNbp = ui->nbp_m->text().toInt();
    float updatedPrix = ui->prixe_m->text().toFloat();
    QString updatedDescr = ui->descr_m->text();

    // Vérification de la validité des champs
    if (updatedNom.isEmpty() || updatedType.isEmpty() || updatedDescr.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }

    if (updatedNom.length() < 2) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom et le prénom doivent contenir au moins 2 caractères."), QMessageBox::Cancel);
        return;
    }

    QRegExp nomeRegex("^[a-zA-Z ]+$");
    if (!nomeRegex.exactMatch(updatedNom)) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le nom doit contenir uniquement des lettres et des espaces."), QMessageBox::Cancel);
        return;
    }

    if (updatedPrix <= 0) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("Le prix de l'evenement doit être supérieur à zéro."), QMessageBox::Cancel);
        return;
    }
    if (updateddated < QDate::currentDate()) {
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("La date de debut de l'evenement ne doit pas etre inferieure a la date d'aujourd'hui."), QMessageBox::Cancel);
        return;
    }
    if (updateddatef < updateddated){
        QMessageBox::warning(nullptr, QObject::tr("Erreur"), QObject::tr("La date de fin de l'evenement ne doit pas etre inferieure a la date de debut ."), QMessageBox::Cancel);
        return;
    }

    // Modification de l'événement
    evInstance.setNom(updatedNom);
    evInstance.setType(updatedType);
    evInstance.setDated(updateddated);
    evInstance.setDatef(updateddatef);
    evInstance.setNbp(updatedNbp);
    evInstance.setPrix(updatedPrix);
    evInstance.setDescr(updatedDescr);

    bool modificationResult = evInstance.modifier_ev(selectedId);
    if (modificationResult) {
        QMessageBox::information(this, "succes", "evenement modifié.");
    } else {
        QMessageBox::critical(this, "Erreur", "evenement non modifié.");
    }
}

void MainWindow::on_pdf_ev_clicked()
{
    QModelIndex index = ui->tabe->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner un evenement.");
        return;
    }

    int selectedId = index.sibling(index.row(), 0).data().toInt(); // Supposons que la colonne 0 contient l'ID

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous télécharger le PDF de cet evenement ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        evenement evenement;
        evenement.telecharger_PDF(selectedId);
        QDesktopServices::openUrl(QUrl::fromLocalFile("../integration_crud/import_event.pdf"));

    }
}

void MainWindow::on_stat_ev_clicked()
{
    // Fetch data from the database
    QSqlQueryModel *model = tmpevenement.afficher_ev();

    if (!model) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des données.");
        return;
    }

    // Create a pie series and populate it with data
    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    for (int i = 0; i < model->rowCount(); ++i) {
        QString eventName = model->data(model->index(i, 1)).toString();
        int quantity = model->data(model->index(i, 5)).toInt(); // Assuming column 5 represents quantity (qte)
        series->append(eventName, quantity);
    }

    // Create a pie chart and add the series
    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistique sur le nombre de personne qui sont arrivé à l'evenement");
    chart->setAnimationOptions(QtCharts::QChart::AllAnimations);

    // Create a chart view to display the chart
    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Set up a new window to display the chart
    QDialog *chartDialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(chartView);
    chartDialog->setLayout(layout);
    chartView->resize(800, 600); // Taille en pixels

    // Show the chart window non-modally
    chartDialog->show();
}

void MainWindow::setupComboBoxNoms_ev() {

    evenement evenementInstance;
    QList<QString> noms = evenementInstance.getAllNoms_ev();
    ui->liste_nom->clear();
    for (QString nome : noms) {
        ui->liste_nom->addItem(QString(nome));
    }
}

void MainWindow::verifier() {
    QSqlQuery lowQuantityQuery;
    lowQuantityQuery.prepare("SELECT nome, id FROM evenement WHERE datef < :currentDate");
    lowQuantityQuery.bindValue(":currentDate", QDate::currentDate());

    if (lowQuantityQuery.exec()) {
        QString message;

        while (lowQuantityQuery.next()) {
            QString nomEvenement = lowQuantityQuery.value(0).toString();
            QString idEvenement = lowQuantityQuery.value(1).toString();
            message += "ID: " + idEvenement + " - Nom: " + nomEvenement + "\n";
        }

        if (!message.isEmpty()) {
            mSystemTrayIcon->showMessage(tr("Evénements à venir"), message);
        }
    } else {
        qDebug() << "Erreur lors de l'exécution de la requête: " << lowQuantityQuery.lastError().text();
    }
}

void MainWindow::updateTableView()
{
    // Mettez à jour votre table view avec les données actualisées depuis la base de données
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM participer");
    ui->tab_liste->setModel(model);
}
void MainWindow::on_ajout_clicked()
{
    // Récupérer le nom de l'événement sélectionné
    QString eventName = ui->liste_nom->currentText();

    // Récupérer le CIN du membre
    QString cin = ui->CIN->text();
    QString mail = ui->mail->text();
    // Vérifier si le CIN existe dans la table des membres
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM membre WHERE CIN = :cin");
    query.bindValue(":cin", cin);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        if (count > 0) {
            // Le CIN existe, donc ajouter à la table participer
            query.prepare("SELECT id FROM evenement WHERE nome = :eventName");
            query.bindValue(":eventName", eventName);
            if (query.exec() && query.next()) {
                int eventId = query.value(0).toInt();
                query.prepare("INSERT INTO participer (id_event, id_membre, date_event, mail) "
                              "VALUES (:eventId, :cin, (SELECT dated FROM evenement WHERE nome = :eventName), :mail)");
                query.bindValue(":eventId", eventId);
                query.bindValue(":cin", cin);
                query.bindValue(":eventName", eventName);
                query.bindValue(":mail", mail); // Corrected binding for mail parameter
                if (query.exec()) {
                    updateTableView();
                    QMessageBox::information(this, "Succès", "Participant ajouté avec succès !");
                } else {
                    QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout du participant !");
                }
            } else {
                QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération de l'identifiant de l'événement !");
            }
        } else {
            QMessageBox::warning(this, "Avertissement", "CIN invalide !");
        }
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification du CIN !");
    }
}


void MainWindow::on_afficher_liste_clicked() {
    QString eventName = ui->liste_nom->currentText();
    QSqlQuery query;
    query.prepare("SELECT id_event, id_membre, date_event FROM participer WHERE id_event = (SELECT id FROM evenement WHERE nome = :eventName)");
    query.bindValue(":eventName", eventName);

    if (query.exec()) {
        QList<QString> uniqueEvents;  // Utilisation d'une QList pour stocker les événements uniques
        while (query.next()) {
            QString memberId = query.value(1).toString();
            QString dateEvent = query.value(2).toDate().toString("yyyy-MM-dd");
            QString eventInfo = "Vous êtes invité à l'événement: " + eventName + "\nDate de l'événement: " + dateEvent + "\n";

            // Vérifier si l'événement est déjà présent dans la liste unique
            if (!uniqueEvents.contains(eventInfo)) {
                uniqueEvents.append(eventInfo);  // Ajouter l'événement unique à la liste
            }
        }

        QString emailContent = uniqueEvents.join("\n");
        if (!emailContent.isEmpty()) {
            // Ajouter la date de l'événement au contenu de l'email
            QString subject = "Liste des événements";
            QString body = "Bonjour,\n\nVoici la liste des événements auxquels vous êtes invité(e) :\n\n" + emailContent;
            on_sendBtn_clicked();  // Appeler la fonction d'envoi en passant le sujet et le contenu du mail
        } else {
            QMessageBox::warning(this, "Avertissement", "Aucun événement trouvé pour cet événement.");
        }
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des données.");
    }
}

void MainWindow::checkevents() {
    QSqlQuery query;
    query.prepare("SELECT id, datef FROM evenement WHERE datef < :currentDate");
    query.bindValue(":currentDate", QDate::currentDate());

    if (query.exec()) {
        QStringList finevent;
        while (query.next()) {
            QString id = query.value(0).toString();
            QString datefin = query.value(1).toString();
            qDebug() << "ID:" << id << ", Date de fin:" << datefin;
            finevent.append("ID: " + id + ", Date de fin: " + datefin);
        }

        if (!finevent.isEmpty()) {
            QString notificationMessage = "les evenements suivants ont fini :\n";
            notificationMessage += finevent.join("\n");

            // Utilisation de QSystemTrayIcon pour afficher la notification de manière non modale
            QSystemTrayIcon *trayIcon = new QSystemTrayIcon(this);
            QIcon icon(":/myappico.png");
            trayIcon->setIcon(icon);
            trayIcon->show();
            trayIcon->showMessage("Evenement Termine", notificationMessage, QSystemTrayIcon::Information, 5000); // Afficher la notification pendant 5 secondes

            // Vous pouvez également utiliser d'autres méthodes d'affichage de notifications si vous le préférez
        } else {
            QMessageBox::information(this, "Aucun Evenement terminé", "Aucun Evenement terminé.");
        }
    } else {
        qDebug() << "Error while checking for ending events: " << query.lastError().text();
    }
}

void MainWindow::on_sendBtn_clicked()
{
    QDialog dialog(this);
    QVBoxLayout layout(&dialog);

    QLabel label("Entrez l'adresse e-mail de l'utilisateur :"); // Changed the label text
    QLineEdit *emailLineEdit = new QLineEdit(&dialog); // Changed to QLineEdit for email input
    QPushButton okButton("Envoyer");
    layout.addWidget(&label);
    layout.addWidget(emailLineEdit); // Changed to emailLineEdit
    layout.addWidget(&okButton);
    dialog.setLayout(&layout);

    connect(&okButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    if (dialog.exec() == QDialog::Accepted) {
        QString memberEmail = emailLineEdit->text(); // Get the entered email directly
        qDebug () << memberEmail;
        if (!memberEmail.isEmpty()) {
            // Retrieve event information based on the email address
            QString eventInfo = getEventInfoForMember(memberEmail);
            if (!eventInfo.isEmpty()) {
                // Créer et envoyer l'e-mail avec les informations de l'événement
                SmtpClient smtp("smtp-relay.brevo.com", 587, SmtpClient::TcpConnection);
                smtp.setUser("hidayahanafi03@gmail.com"); // Utiliser l'identifiant utilisateur du membre
                smtp.setPassword("qKUjkYH42Dgb107G");
                MimeMessage message;
                message.setSender(new EmailAddress("AquaHub@gmail.com", "AquaHub"));
                message.addRecipient(new EmailAddress(memberEmail)); // Utiliser l'adresse e-mail directement
                message.setSubject("Informations sur l'événement");
                message.addPart(new MimeText(eventInfo)); // Ajouter les informations de l'événement au corps de l'e-mail

                if (!smtp.connectToHost() || !smtp.login() || !smtp.sendMail(message)) {
                    QMessageBox::critical(this, "Erreur", "Impossible d'envoyer l'e-mail.", QMessageBox::Cancel);
                } else {
                    smtp.quit();
                    QMessageBox::information(this, "Succès", "E-mail envoyé avec succès !");
                }
            } else {
                QMessageBox::warning(this, "Avertissement", "Aucun événement trouvé pour cette adresse e-mail.");
            }
        } else {
            QMessageBox::warning(this, "Avertissement", "Veuillez saisir une adresse e-mail valide.");
        }
    }
}

QString MainWindow::getEventInfoForMember(const QString &email) {
    // Récupérer les informations sur les événements associés à cette adresse e-mail
    QSqlQuery query;
    query.prepare("SELECT * FROM participer WHERE mail = :email");
    query.bindValue(":email", email);
    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la récupération des informations sur l'événement.");
        return "";
    }

    QString eventInfo;
    while (query.next()) {
        // Ajouter les informations de chaque événement au texte à envoyer par e-mail
        QString memberId = query.value(1).toString();
        QString eventDate = query.value(2).toDate().toString("yyyy-MM-dd");
        eventInfo += "Membre ID: " + memberId + "\n";
        eventInfo += "Date de l'événement: " + eventDate + "\n\n";
    }

    return eventInfo;
}

QString MainWindow::getEventName(int eventId)
{
    // Récupérer le nom de l'événement à partir de son identifiant
    QSqlQuery query;
    query.prepare("SELECT nome FROM evenement WHERE id = :eventId");
    query.bindValue(":eventId", eventId);
    if (!query.exec() || !query.next()) {
        return "Événement inconnu";
    }

    return query.value(0).toString();
}

void MainWindow::on_calendarWidget_selectionChanged()
{
    QDate selectedDate = ui->calendarWidget->selectedDate();
    deleteTask(selectedDate, "new event");
    updateListViewForDate(selectedDate);
}

void MainWindow::on_boutton_ajouter_tache_clicked()
{
    ui->tabWidget_4->setCurrentWidget(ui->tab_8);

}

void MainWindow::addTaskFromTab()
{
    QString taskText = ui->nome->text();
    QDate taskDate = QDate::fromString(ui->dated->text(), "yyyy-MM-dd");

    if (!taskText.isEmpty()) {
        addTask(taskDate, taskText);

        // Mettre à jour la liste des tâches pour la date actuelle dans le calendrier
        updateListViewForDate(ui->calendarWidget->selectedDate());
    }
}

void MainWindow::updateDateField() {
    QDate date = ui->calendarWidget->selectedDate();
    ui->dated->setDate(date);
}

void MainWindow::addTask(const QDate &date, const QString &taskText)
{
    if (taskText.isEmpty()) {

        return;
    }
    if (!tasksByDate.contains(date)) {
        tasksByDate[date] = QStringList();
    }
    QStringList &tasks = tasksByDate[date];
    int index = tasks.indexOf(taskText);

    if (index != -1) {

        tasks[index] = taskText;
    } else {

        tasks.append(taskText);
    }
    updateListViewForDate(ui->calendarWidget->selectedDate());
}

void MainWindow::updateListViewForDate(const QDate &date)
{
    QStandardItemModel *listModel = qobject_cast<QStandardItemModel*>(ui->listView->model());

    if (!listModel) {
        listModel = new QStandardItemModel(ui->listView);
        ui->listView->setModel(listModel);
    }

    listModel->clear();

    // Vérifiez si la date sélectionnée a des événements
    if (tasksByDate.contains(date)) {
        // Récupérez la liste des événements correspondant à la date sélectionnée
        const QStringList &tasks = tasksByDate[date];

        // Ajoutez chaque événement à la liste
        for (const QString &task : tasks) {
            QStandardItem *taskItem = new QStandardItem(task);
            listModel->appendRow(taskItem);
        }
    }
}

void MainWindow::deleteTask(const QDate &date, const QString &taskText)
{
    if (tasksByDate.contains(date)) {
        QStringList &tasks = tasksByDate[date];
        int index = tasks.indexOf(taskText);

        if (index != -1) {
            tasks.removeAt(index);

            // Mise à jour de la QListView après la suppression
            updateListViewForDate(date);

            // Supprimer l'événement de la base de données
            QSqlQuery query;
            query.prepare("DELETE FROM evenement WHERE nome = :eventName");
            query.bindValue(":eventName", taskText);
            if (query.exec()) {
                qDebug() << "L'événement a été supprimé de la base de données.";
            } else {
                qDebug() << "Erreur lors de la suppression de l'événement de la base de données:" << query.lastError().text();
            }
        }
    }
}

void MainWindow::on_boutton_supprimer_tache_clicked()
{
    QModelIndex selectedIndex = ui->listView->currentIndex();
    QString selectedTask = selectedIndex.data().toString();

    if (!selectedTask.isEmpty()) {
        // Supprimer la tâche de la liste
        deleteTask(ui->calendarWidget->selectedDate(), selectedTask);
    } else {
        qDebug() << "Aucune tâche sélectionnée à supprimer.";
    }
}

void MainWindow::refreshListViewModel()
{
    qDebug() << "Refreshing List View Model";
    QStandardItemModel *listModel = new QStandardItemModel(this);

    // Ajoutez les éléments mis à jour depuis tasksByDate au listModel
    for (const QDate &date : tasksByDate.keys()) {
        for (const QString &task : tasksByDate[date]) {
            QStandardItem *item = new QStandardItem(task);
            listModel->appendRow(item);
        }
    }

    // Assurez-vous que le modèle actuel est supprimé pour éviter les fuites de mémoire
    if (ui->listView->model()) {
        delete ui->listView->model();
    }

    // Définissez le nouveau modèle
    ui->listView->setModel(listModel);
}

void MainWindow::loadEventsFromDatabase()
{
    // Charger les événements depuis la base de données
    QList<evenement> eventsList = tmpevenement.getAllEvenements();

    // Parcourir les événements et les ajouter au calendrier et à la liste des tâches
    for (const auto& event : eventsList) {
        // Créer un format de texte pour l'événement
        QTextCharFormat eventFormat;
        // Modifier le format de texte selon vos préférences (par exemple, couleur, police, etc.)
        eventFormat.setForeground(Qt::blue);

        // Appliquer le format de texte à la date de début de l'événement
        ui->calendarWidget->setDateTextFormat(event.getDated(), eventFormat);
        // Appliquer le format de texte à la date de fin de l'événement
        ui->calendarWidget->setDateTextFormat(event.getDatef(), eventFormat);

        // Ajouter l'événement à la liste des tâches
        addTask(event.getDated(), event.getNom()); // Supposons que le nom de l'événement est utilisé comme tâche
    }

    // Parcourir les jours du mois actuel dans le calendrier
    QDate currentDate = ui->calendarWidget->selectedDate();
    QDate firstDayOfMonth = currentDate.addDays(-currentDate.day() + 1);
    QDate lastDayOfMonth = firstDayOfMonth.addMonths(1).addDays(-1);

    for (QDate date = firstDayOfMonth; date <= lastDayOfMonth; date = date.addDays(1)) {
        if (!tasksByDate.contains(date)) {
            // Si la date ne contient pas d'événement, définir le format de texte par défaut
            QTextCharFormat defaultFormat;
            ui->calendarWidget->setDateTextFormat(date, defaultFormat);
        }
    }
}

void MainWindow::showEventDetails(const QString& eventName) {
    QSqlQuery query;
    query.prepare("SELECT * FROM evenement WHERE nome = ?");
    query.addBindValue(eventName);

    qDebug() << "Executing query:" << query.lastQuery();  // Affichez la requête SQL exécutée

    if (query.exec() && query.next()) {
        QString id = query.value(0).toString();
        QString nome = query.value(1).toString();
        QString typee = query.value(2).toString();
        QString descr = query.value(7).toString();  // Colonne descr
        int nbp = query.value(5).toInt();  // Colonne nbp
        float prixe = query.value(6).toFloat();  // Colonne prixe

        // Créer un QDialog pour afficher les détails de l'événement
        QDialog *eventDetailsDialog = new QDialog(this);
        QVBoxLayout *layout = new QVBoxLayout(eventDetailsDialog);

        QLabel *titleLabel = new QLabel("Détails de l'événement");
        layout->addWidget(titleLabel);

        QLabel *idLabel = new QLabel("ID: " + id);
        layout->addWidget(idLabel);

        QLabel *nomeLabel = new QLabel("Nom: " + nome);
        layout->addWidget(nomeLabel);

        QLabel *typeLabel = new QLabel("Type: " + typee);
        layout->addWidget(typeLabel);

        QLabel *descrLabel = new QLabel("Description: " + descr);
        layout->addWidget(descrLabel);

        QLabel *nbpLabel = new QLabel("Nombre de participants: " + QString::number(nbp));
        layout->addWidget(nbpLabel);

        QLabel *prixeLabel = new QLabel("Prix: " + QString::number(prixe));
        layout->addWidget(prixeLabel);

        eventDetailsDialog->setLayout(layout);
        eventDetailsDialog->exec();
    } else {
        // Aucun événement trouvé pour le nom donné
        QMessageBox::information(this, "Pas d'événement", "Aucun événement trouvé pour le nom donné.");
    }
}
