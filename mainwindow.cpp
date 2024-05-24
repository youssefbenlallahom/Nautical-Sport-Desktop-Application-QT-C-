#include "mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include "../Arduino/arduino.h"

#include"../integration_crud/gestion_membre/membre.h"
#include"../integration_crud/gestion_evenements/evenement.h"
#include "../integration_crud/gestion_formation/formation.h"
#include"../integration_crud/gestion_equipement_f/equipement.h"
#include "../integration_crud/gestion_abonnement/abonnement.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include<QInputDialog>
#include<QSqlQuery>
#include<chrono>
#include <thread>
#include<QSqlError>
#include <QTableView>
#include <QStyledItemDelegate>
#include <QPainter>
#include "../integration_crud/camera/camera.h"
#include"ui_camera.h"
#include "employe.h"
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
#include<QProgressDialog>
#include <QtWidgets>
#include<QThread>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>
#include <QtGlobal> // Include for qrand()
#include "smtpclient.h"
#include "mimepart.h"
#include "mimeattachment.h"
#include "emailaddress.h"
#include "mimetext.h"
#include <QDateTime>

QString mdp_admin="aquahub@2024";

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
class PasswordDelegate : public QStyledItemDelegate
{
public:
    PasswordDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
    {
        if (index.column() == 8) // Colonne "Mot de passe"
        {
            QString password = index.data(Qt::DisplayRole).toString();
            QString maskedPassword = password.replace(QRegularExpression("."), "*");

            QStyleOptionViewItem opt = option;
            initStyleOption(&opt, index);
            opt.displayAlignment = Qt::AlignLeft | Qt::AlignVCenter;

            // Draw the masked password
            painter->save();
            painter->drawText(opt.rect, opt.displayAlignment, maskedPassword);
            painter->restore();
        }
        else
        {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///
    ui->tableView_5->setModel(Mtmp.afficher());
    MembreModel = new QSqlTableModel(this);
    MembreModel ->setTable("MEMBRE");
    MembreModel -> select();

    MembreModel ->setHeaderData(0, Qt::Horizontal , "CIN");

    ui->tableView_5->setModel(MembreModel);

    connect(ui->tableView_5->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(onHeaderClickedmem(int)));
    setupComboBoxCINS();

    connect(ui->refresh_dach, &QPushButton::clicked, this, &MainWindow::on_refresh_dach_clicked);
    connect(ui->pdf_mem, &QPushButton::clicked, this, &MainWindow::on_pdf_mem_clicked);
    connect(ui->stat_mem, &QPushButton::clicked, this, &MainWindow::on_stat_mem_clicked);


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    formation f;
    ui->tabView_formation->setModel(f.afficher());
    ui->id->setValidator(new QIntValidator(0,99999,this));
    ui->prix->setValidator(new QIntValidator(0,99999999,this));

    // Connexion des signaux des QPushButton aux slots correspondants
    connect(ui->add_form, &QPushButton::clicked, this, &MainWindow::on_add_form_clicked);
    disconnect(ui->add_form, &QPushButton::clicked, this, &MainWindow::on_add_form_clicked);

    connect(ui->modifier_form, &QPushButton::clicked, this, &MainWindow::on_modifier_form_clicked);


    // Affichage de la liste des ID déjà enregistrés dans la combobox id_form_2
    QSqlQueryModel *modelId = new QSqlQueryModel();
    modelId->setQuery("SELECT id FROM FORMATION");
    ui->id_form_2->setModel(modelId);

    // Connexion du signal activated de la combobox id_form_2 au slot correspondant
    connect(ui->id_form_2, QOverload<int>::of(&QComboBox::activated), this, &MainWindow::on_id_form_2_activated);
    //connect(ui->tri_form, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_tri_form_activated);
    //connect(ui->tri_form, QOverload<int>::of(&QComboBox::activated), this, &MainWindow::on_tri_form_activated);

    //connect(ui->tri_form, QOverload<int>::of(&QComboBox::activated), this, &MainWindow::on_id_form_2_activated);


    connect(ui->supprimer_form, &QPushButton::clicked, this, &MainWindow::on_supprimer_form_clicked);
    disconnect(ui->supprimer_form, &QPushButton::clicked, this, &MainWindow::on_supprimer_form_clicked);

    connect(ui->chercher_formation, &QPushButton::clicked, this, &MainWindow::on_chercher_formation_clicked);
    connect(ui->stat_formation, &QPushButton::clicked, this, &MainWindow::on_stat_formation_clicked);
    connect(ui->historique_formation, &QPushButton::clicked, this, &MainWindow::on_historique_formation_clicked);
    disconnect(ui->historique_formation, &QPushButton::clicked, this, &MainWindow::on_historique_formation_clicked);

    ui->tabView_formation->setModel(tmpformation.afficher());
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*yassine*/
    equipementModel = new QSqlTableModel(this);
    equipementModel->setTable("equipement");
    equipementModel->select();

    equipementModel->setHeaderData(0, Qt::Horizontal, "Mat");

    for (int i = 0; i < equipementModel->columnCount(); ++i) {
        ui->comboBox_searchAttribute->addItem(equipementModel->headerData(i, Qt::Horizontal).toString());
    }

    ui->tableView_3->setModel(Etmp.affichereq());
    connect(ui->Retour_8, &QPushButton::clicked, this, &MainWindow::on_Retour_8_clicked);
    connect(ui->Retour_9, &QPushButton::clicked, this, &MainWindow::on_Retour_9_clicked);
    connect(ui->Retour_10, &QPushButton::clicked, this, &MainWindow::on_Retour_10_clicked);
    connect(ui->Retour_11, &QPushButton::clicked, this, &MainWindow::on_Retour_11_clicked);
    connect(ui->Retour_12, &QPushButton::clicked, this, &MainWindow::on_Retour_12_clicked);
    connect(ui->Bajout, &QPushButton::clicked, this, &MainWindow::on_Bajout_clicked);
    connect(ui->Retour_20, &QPushButton::clicked, this, &MainWindow::on_Retour_20_clicked_rech);
    connect(ui->Retour_21, &QPushButton::clicked, this, &MainWindow::on_Retour_21_clicked_refresh);
    connect(ui->Retour_6, &QPushButton::clicked, this, &MainWindow::on_Retour_6_clicked);

    connect(ui->tableView_3->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(onHeaderClicked_2(int)));
    setupComboBoxMatricules();
    connect(ui->tableView_3->horizontalHeader(), SIGNAL(sectionClicked(QString)), this, SLOT(onHeaderClicked(string)));
    setupComboBoxNoms();
    connect(ui->Bachat, &QPushButton::clicked, this, &MainWindow::on_Bachat_clicked);
    connect(ui->Bmodifier_2, &QPushButton::clicked, this, &MainWindow::on_Bmodifier_2_clicked_submitmod);
    connect(ui->Bmodifier, &QPushButton::clicked, this, &MainWindow::on_Bmodifier_clicked_modifier);
    connect(ui->Retour_25, &QPushButton::clicked, this, &MainWindow::on_Retour_25_clicked_achat);
    connect(ui->pdf_eq, &QPushButton::clicked, this, &MainWindow::on_pdf_eq_clicked);
    connect(ui->stat_eq, &QPushButton::clicked, this, &MainWindow::on_stat_eq_clicked);
    connect(ui->dispo_3, &QPushButton::clicked, this, &MainWindow::on_dispo_3_clicked);
    //connect(ui->upload, &QPushButton::clicked, this, &MainWindow::upload_click);
    connect(ui->tableView_3, SIGNAL(clicked(const QModelIndex&)), this, SLOT(on_tableView_3_clicked(const QModelIndex&)));
    checkStockLevels();
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::checkStockLevels);
    timer->start(50000);


    /*/////////////////////////////////////////////////////////////////////////*/
    /* mahdi */
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
    //////////////////////////////////////////////////////////////////////////////////////
    mSystemTrayIcon = new QSystemTrayIcon(this);
    mSystemTrayIcon->setIcon(QIcon(":/myappico.png"));
    mSystemTrayIcon->setVisible(true);
    verifier();
    evenementModel = new QSqlTableModel(this);
    evenementModel->setTable("evenement");
    evenementModel->select();

    listeModel = new QSqlTableModel(this);
    listeModel->setTable("participer");
    listeModel->select();

    evenementModel->setHeaderData(0, Qt::Horizontal, "id");

    // Définir les modèles pour les tableaux
    ui->tabe->setModel(evenementModel);
    ui->tab_liste->setModel(listeModel);

    // Ajouter les en-têtes dans le comboBox
    for (int i = 0; i < evenementModel->columnCount(); ++i) {
        ui->comboBox_11->addItem(evenementModel->headerData(i, Qt::Horizontal).toString());
    }

    loadEventsFromDatabase();

    // Connecter d'autres signaux et slots
    connect(ui->rechercher_ev, &QPushButton::clicked, this, &MainWindow::on_rechercher_ev_clicked);
    connect(ui->refresh_ev, &QPushButton::clicked, this, &MainWindow::on_refresh_ev_clicked);
    connect(ui->tabe->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(onHeaderClicked(int)));
    setupComboBoxIds_ev();
    setupComboBoxNoms_ev();
    connect(ui->submit_ev, &QPushButton::clicked, this, &MainWindow::on_submit_ev_clicked);
    connect(ui->modifier_ev, &QPushButton::clicked, this, &MainWindow::on_modifier_ev_clicked);
    connect(ui->supprimer_ev, &QPushButton::clicked, this, &MainWindow::on_supprimer_ev_clicked);
    connect(ui->sendBtn, &QPushButton::clicked, this, &MainWindow::on_sendBtn_clicked);

    connect(ui->ajout, &QPushButton::clicked, this, &MainWindow::on_ajout_clicked);
    connect(ui->nome, SIGNAL(currentIndexChanged(const QString&)), this, SLOT(on_afficher_clicked()));
    connect(ui->ajout_ev, &QPushButton::clicked, this, &MainWindow::addTaskFromTab);
    // Dans le constructeur de MainWindow ou un autre endroit approprié
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged, this, &MainWindow::updateDateField);
    connect(ui->listView, &QListView::doubleClicked, this, [=](const QModelIndex& index){
        QString eventName = index.data().toString();
        showEventDetails(eventName);
    });
    connect(ui->boutton_supprimer_tache, &QPushButton::clicked, this, &MainWindow::on_boutton_supprimer_tache_clicked);

    ui->tabe->setModel(tmpevenement.afficher_ev());
    ui->nome->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z_]{1,8}$"), this));
    ui->descr->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z_]{1,8}$"), this));
    ui->prixe->setValidator(new QIntValidator(0,99999999,this));
    ui->nbp->setValidator(new QIntValidator(0,50,this));
    ui->nome_m->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z_]{1,8}$"), this));
    ui->descr_m->setValidator(new QRegExpValidator(QRegExp("^[A-Za-z_]{1,8}$"), this));
    ui->prixe_m->setValidator(new QIntValidator(0,99999999,this));
    ui->nbp_m->setValidator(new QIntValidator(0,50,this));

    // Connexion aux signaux pour vérifier les événements et mettre à jour périodiquement
    QTimer *timerr = new QTimer(this);
    connect(timerr, &QTimer::timeout, this, &MainWindow::checkevents);
    timerr->start(600000);

    // Vérifier les événements une fois que l'interface utilisateur est entièrement construite
    checkevents();
    /*//////////////////////////////////////////////////*/
    connect(ui->gestion_employe, &QPushButton::clicked, this, &MainWindow::on_gestionButton_clicked);
    connect(ui->gestion_equi, &QPushButton::clicked, this, &MainWindow::on_gestion_equi_clicked);
    connect(ui->gestion_event, &QPushButton::clicked, this, &MainWindow::on_gestion_event_clicked);
    connect(ui->gestion_formation, &QPushButton::clicked, this, &MainWindow::on_gestion_formation_clicked);
    connect(ui->gestion_membre, &QPushButton::clicked, this, &MainWindow::on_gestion_membre_clicked);
    connect(ui->gestion_abo, &QPushButton::clicked, this, &MainWindow::on_gestion_abo_clicked);

    connect(ui->id_emp_modifier, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_id_emp_modifier_currentIndexChanged);
    connect(ui->image_emp_ajout, &QLineEdit::textChanged, this, [this](const QString &imagePath) {
        afficherImage(imagePath, "zone_image");
    });
    connect(ui->image_emp_modifier, &QLineEdit::textChanged, this, [this](const QString &imagePath) {
        afficherImage(imagePath, "zone_image_modifier");
    });
    connect(ui->nom_emp_ajout, &QLineEdit::textChanged, this, &MainWindow::validateNom);
    connect(ui->prenom_emp_ajout, &QLineEdit::textChanged, this, &MainWindow::validatePrenom);
    connect(ui->id_emp_ajout, &QLineEdit::textChanged, this, &MainWindow::validateCIN);
    connect(ui->mdp_emp_ajout, &QLineEdit::textChanged, this, &MainWindow::validateMDP);
    connect(ui->email_emp_ajout, &QLineEdit::textChanged, this, &MainWindow::validateEmail);
    connect(ui->nom_emp_modifier, &QLineEdit::textChanged, this, &MainWindow::validateNom);
    connect(ui->prenom_emp_modifier, &QLineEdit::textChanged, this, &MainWindow::validatePrenom);
    connect(ui->mdp_emp_modifier, &QLineEdit::textChanged, this, &MainWindow::validateMDP);
    connect(ui->email_emp_modifier, &QLineEdit::textChanged, this, &MainWindow::validateEmail);
    remplirComboBoxEmployes();
    connect(ui->id_emp_modifier, SIGNAL(currentIndexChanged(int)), this, SLOT(on_id_emp_modifier_currentIndexChanged(int)));
    disconnect(ui->recherche_emp_bouton, &QPushButton::clicked, this, &MainWindow::on_recherche_emp_bouton_clicked);

    connect(ui->recherche_emp_bouton, &QPushButton::clicked, this, &MainWindow::on_recherche_emp_bouton_clicked);

    ui->stackedWidget->setCurrentIndex(3);
    ui->icone_mdp->setIcon(QIcon("../integration_crud/image/hide.png"));
    Employe employe;
    Model = new QSqlTableModel(this);
    Model->setTable("EMPLOYE");
    Model->select();
    ui->table_emp->setModel(Model);


    //QSet<QString> existingItems;
    for (int i = 0; i < Model->columnCount(); ++i) {
        QString headerData = Model->headerData(i, Qt::Horizontal).toString();
        if (!existingItems.contains(headerData)) { // Vérifiez si l'élément n'est pas déjà dans l'ensemble
            existingItems.insert(headerData); // Ajoutez l'élément à l'ensemble
            ui->choix_recherche_emp->addItem(headerData); // Ajoutez l'élément à la combobox
        }
    }

    ui->table_emp->setModel(employe.afficher()); // Associe le modèle à votre QTableView
    ui->table_emp->setItemDelegateForColumn(6, new ImageDelegate(ui->table_emp)); // Colonne "Image"
    ui->table_emp->resizeColumnsToContents(); // Redimensionne les colonnes pour afficher les données correctement

    QSqlQueryModel *ModelId = employe.afficher();
    for (int i = 0; i < ModelId->rowCount(); ++i) {
        ui->id_emp_modifier->addItem(ModelId->record(i).value("ID_EMPLOYE").toString());
    }
    ui->mdp_emp_ajout->setEchoMode(QLineEdit::Password);
    ui->mdp_emp_modifier->setEchoMode(QLineEdit::Password);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);

    ui->table_emp->setItemDelegateForColumn(8, new PasswordDelegate(ui->table_emp));
    connect(ui->tri_emp, QOverload<int>::of(&QComboBox::activated), this, &MainWindow::on_tri_emp_activated);
    disconnect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
    A=new Arduino();
    A->connect_arduino();
    if(A->getarduino_port_name()=="COM5")
    {
        connect(ui->mat_dispo, &QPushButton::clicked, this, &MainWindow::on_exist_clicked);
            connect(ui->dispo_3, &QPushButton::clicked, this, &MainWindow::on_dispo_3_clicked);
    }
    else if(A->getarduino_port_name()=="COM4")
    {
        QObject::connect(A->getserial(), &QSerialPort::readyRead, this, &MainWindow::onArduinoDataReceived);
    }
    else if(A->getarduino_port_name()=="COM3")
    {
        connect(A->getserial(), &QSerialPort::readyRead, this, &MainWindow::checkCarte);

    }else
    {
        A->close_arduino();
    }


}
void MainWindow::readSerialData(const int &mat)
{
    QByteArray data;
    data += A->read_from_arduino();
    QString command = QString::fromUtf8(data).trimmed();
    if (command == "oui") {
        disponibilites(mat);
    }
    if (command == "non") {
        modifier_disponibilite(mat);
    }
    ui->tableView_3->setModel(Etmp.affichereq());

    // Rafraîchir l'affichage de la table
    ui->tableView_3->reset();
}


void MainWindow::on_dispo_3_clicked()
 {
     int mat = ui->gsh->text().toInt();

     connect(A->getserial(), &QSerialPort::readyRead, this, [=]() {
             readSerialData(mat); });

 }

void MainWindow::on_exist_clicked()
{
    // Récupérer le nom saisi dans l'interface utilisateur
    ui->nom_ard->clear();

    QString nomeq = ui->nom_ard->text();

    // Effectuer une requête SQL pour vérifier l'existence du nom dans la base de données
    QSqlQuery query;
    query.prepare("SELECT nom FROM equipement WHERE nom = nom");
    query.addBindValue(nomeq);
    query.exec();
    QString  x="";
    if (query.next()) {
            x= query.value(0).toString();
            A->write_to_arduino(x.toUtf8());

        }
}
QString code="037d8a0f";
void MainWindow::onArduinoDataReceived()
{
    static QString receivedData; // Déclarer receivedData en tant que static pour qu'elle conserve sa valeur entre les appels
    bool abonnementExiste = false;

    QByteArray data = A->read_from_arduino();
    if (!data.isEmpty()) {
        // Convertir les données en QString et supprimer les caractères indésirables
        QString newData = QString::fromUtf8(data);
        receivedData.append(newData); // Concaténer les nouvelles données à receivedData
        qDebug() << "Données reçues depuis Arduino :" << receivedData;

        // Vérifier si la commande "A" a été reçue
        if (receivedData.contains("A")) {
            // Récupérer l'ID du membre à partir de receivedData
            QString idMembreString = receivedData.remove('A'); // Supprimer la lettre 'A' de receivedData
            bool conversionOk;
            int idMembre = idMembreString.toInt(&conversionOk);
            if (!conversionOk) {
                qDebug() << "Conversion de l'ID du membre en entier a échoué.";
                // Gérer l'erreur de conversion
                return;
            }

            // Créer une requête SQL pour vérifier l'abonnement
            QSqlQuery query;
            query.prepare("SELECT date_fin FROM Abonnement WHERE ID_MEMBRE = :id_membre");
            query.bindValue(":id_membre", idMembre);

            // Exécuter la requête
            if (!query.exec()) {
                qDebug() << "Erreur lors de l'exécution de la requête SQL:" << query.lastError().text();
                // Gérer l'erreur de requête
                return;
            }

            // Vérifier si des résultats ont été trouvés
            if (query.next()) {
                // Si des résultats ont été trouvés, récupérer la date de fin de l'abonnement
                QDate dateFin = query.value(0).toDate();

                // Obtenir la date et l'heure actuelles pour la comparaison
                QDate dateRecherche = QDate::currentDate();

                // Comparer la date de fin de l'abonnement avec la date actuelle pour vérifier si l'abonnement est expiré
                abonnementExiste = dateFin >= dateRecherche;
            }

            qDebug() << "Abonnement existant :" << abonnementExiste;

            // Envoyer une réponse à l'Arduino en fonction du statut de l'abonnement
            if (abonnementExiste) {
                // Envoyer une commande à l'Arduino pour activer le servomoteur et la LED verte
                A->write_to_arduino("1");
            } else {
                // Envoyer une commande à l'Arduino pour activer la LED rouge
                A->write_to_arduino("0");
            }

            // Effacer receivedData pour la prochaine commande
            receivedData.clear();
        }
    }
}

void MainWindow::checkCarte()
{

    if (carte())
    {
        carteDetectee();
    }
}
QString uid_global="";
bool MainWindow::carte()
{
    QByteArray data = A->read_from_arduino();
    QString uid = QString::fromUtf8(data).trimmed();
    if(uid!="")uid_global+=uid;
    if (uid_global.length()==8)uid=uid_global.toUpper();
    QSqlQuery query;
    query.prepare("SELECT uid_emp FROM employe WHERE uid_emp = :uid");
    query.bindValue(":uid", uid);
    if (!query.exec() || !query.first()) {
        return false;
    } else {
        return true;
    }
}

void MainWindow::carteDetectee()
{
    QSqlQuery query;
    query.prepare("SELECT email, mdp, poste , prenom FROM employe WHERE uid_emp = :uid");
    query.bindValue(":uid", uid_global.toUpper());
    if (!query.exec() || !query.first()) {
        qDebug() << "Erreur de requete !!";
        return;
    }
    QString prenom="";
    QString email = query.value(0).toString();
    QString mdp = query.value(1).toString();
    QString poste = query.value(2).toString();
    qDebug() << poste;

    prenom = query.value(3).toString();
    A->write_to_arduino(prenom.toUtf8());

    if (poste == "Responsable des evenements") {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + prenom);
        ui->stackedWidget->setCurrentIndex(6);
        ui->gestion_employe->setEnabled(false);
        ui->gestion_formation->setEnabled(false);
        ui->gestion_abo->setEnabled(false);
        ui->gestion_equi->setEnabled(false);
        ui->gestion_event->setEnabled(true);
        ui->gestion_membre->setEnabled(false);
    } else if (poste == "RH") {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + prenom);
        ui->stackedWidget->setCurrentIndex(3);
        ui->gestion_employe->setEnabled(true);
        ui->gestion_formation->setEnabled(false);
        ui->gestion_abo->setEnabled(false);
        ui->gestion_equi->setEnabled(false);
        ui->gestion_event->setEnabled(false);
        ui->gestion_membre->setEnabled(false);
    } else if (poste == "Agent d'accueil") {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + prenom);
        ui->stackedWidget->setCurrentIndex(1);
        ui->gestion_employe->setEnabled(false);
        ui->gestion_formation->setEnabled(false);
        ui->gestion_abo->setEnabled(true);
        ui->gestion_equi->setEnabled(false);
        ui->gestion_event->setEnabled(false);
        ui->gestion_membre->setEnabled(true);
    } else if (poste == "Responsable des equipements") {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + prenom);
        ui->stackedWidget->setCurrentIndex(5);
        ui->gestion_employe->setEnabled(false);
        ui->gestion_formation->setEnabled(false);
        ui->gestion_abo->setEnabled(false);
        ui->gestion_equi->setEnabled(true);
        ui->gestion_event->setEnabled(false);
        ui->gestion_membre->setEnabled(false);
    }else if (poste == "Formateur") {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue " + prenom);
        ui->stackedWidget->setCurrentIndex(7);
        ui->gestion_employe->setEnabled(false);
        ui->gestion_formation->setEnabled(true);
        ui->gestion_abo->setEnabled(false);
        ui->gestion_equi->setEnabled(false);
        ui->gestion_event->setEnabled(false);
        ui->gestion_membre->setEnabled(false);
    }
}

void MainWindow::on_mdp_oublie_clicked()
{
    auto startTime = std::chrono::steady_clock::now();
    QString verificationCode = QString::number(qrand() % 10000);
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
    QString email = QInputDialog::getText(this, "Adresse e-mail", "Entrer votre adresse e-mail :", QLineEdit::Normal, "");
    if(email=="admin" || email=="ADMIN")
    {
        cv::Ptr<cv::face::FaceRecognizer> model = cv::face::createEigenFaceRecognizer();
        model->load("../integration_crud/trained_model.xml");

        cv::VideoCapture cap(0);
        if (!cap.isOpened()) {
            std::cerr << "Failed to open camera." << std::endl;
            return ;
        }

        std::vector<cv::CascadeClassifier> faceCascades;
        faceCascades.emplace_back();

        if (!faceCascades[0].load("../integration_crud/haarcascade_frontalface_alt.xml") ) {
            std::cerr << "Failed to load face cascade classifiers." << std::endl;
            return ;
        }
        cv::namedWindow("Face Recognition", cv::WINDOW_NORMAL);

        bool isYoussef = false; // Variable pour indiquer si le visage est celui de "Youssef"
        auto start = std::chrono::steady_clock::now();
        while (true) {
            auto end = std::chrono::steady_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            if (elapsed >= 5) {
                break;
            }

            cv::Mat frame;
            cap >> frame;
            if (frame.empty()) {
                std::cerr << "Failed to capture frame." << std::endl;
                return ;
            }

            cv::Mat grayFrame;
            cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);

            std::vector<cv::Rect> faces;
            for (auto& faceCascade : faceCascades) {
                faceCascade.detectMultiScale(grayFrame, faces, 1.3, 5, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));
                if (!faces.empty()) {
                    break; // Exit the loop if faces are detected by any cascade
                }
            }
            double confidenceThreshold = 5500.0;

            for (const auto& faceRect : faces) {
                cv::Mat faceROI = grayFrame(faceRect);
                cv::resize(faceROI, faceROI, cv::Size(100, 100)); // Redimensionner pour correspondre à la taille des données d'entraînement

                int predictedLabel = -1;
                double confidence = 0.0;
                model->predict(faceROI, predictedLabel, confidence);

                std::string label;
                if (predictedLabel > 1 || confidence > confidenceThreshold) {
                    label = "Unknown";
                } else {
                    // Dictionnaire associant les labels aux noms des personnes
                    std::unordered_map<int, std::string> labelToName = {
                        {1, "ADMIN"},
                        {2, "Omar"},
                        {3, "Yassine"},
                        {4, "Mahdi"}
                        // Ajoutez d'autres correspondances label-nom au besoin
                    };

                    if (labelToName.find(predictedLabel) != labelToName.end()) {
                        label = labelToName[predictedLabel];
                    } else {
                        label = "Unknown";
                    }
                }

                // Afficher le nom du label et la confiance dans la console
                std::cout << "Label: " << label << ", Confidence: " << confidence << std::endl;

                cv::putText(frame, label, cv::Point(faceRect.x, faceRect.y - 10), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);
                cv::rectangle(frame, faceRect, cv::Scalar(255, 0, 0), 2);
            }

            cv::imshow("Face Recognition", frame);

            if (cv::waitKey(1) == 27) { // ESC key to exit
                break;
            }
        }

        int countYoussef = 0, countOmar = 0, countYassine = 0, countMahdi = 0;

        // Boucle de traitement des visages et de comptage des prédictions
        while (true) {
            cv::Mat frame;
            cap >> frame;
            if (frame.empty()) {
                std::cerr << "Failed to capture frame." << std::endl;
                break;
            }

            cv::Mat grayFrame;
            cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);

            std::vector<cv::Rect> faces;
            for (auto& faceCascade : faceCascades) {
                faceCascade.detectMultiScale(grayFrame, faces, 1.3, 5, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));
                if (!faces.empty()) {
                    break; // Exit the loop if faces are detected by any cascade
                }
            }

            for (const auto& faceRect : faces) {
                cv::Mat faceROI = grayFrame(faceRect);
                cv::resize(faceROI, faceROI, cv::Size(100, 100)); // Redimensionner pour correspondre à la taille des données d'entraînement

                int predictedLabel = -1;
                double confidence = 0.0;
                model->predict(faceROI, predictedLabel, confidence);

                switch(predictedLabel) {
                case 1:
                    countYoussef++;
                    qDebug() << countYoussef ;
                    break;
                case 2:
                    countOmar++;
                    qDebug() << countOmar ;

                    break;
                case 3:
                    countYassine++;
                    qDebug() << countYassine ;

                    break;
                case 4:
                    countMahdi++;
                    qDebug() << countMahdi ;

                    break;
                }

                // Afficher le nom du label et la confiance dans la console
                std::cout << "Label: " << predictedLabel << ", Confidence: " << confidence << std::endl;

                cv::putText(frame, std::to_string(predictedLabel), cv::Point(faceRect.x, faceRect.y - 10), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);
                cv::rectangle(frame, faceRect, cv::Scalar(255, 0, 0), 2);
            }

            cv::imshow("Face Recognition", frame);
            auto currentTime = std::chrono::steady_clock::now();
            auto elapsedTime = std::chrono::duration_cast<std::chrono::seconds>(currentTime - startTime).count();
            if (elapsedTime >= 5) {
                break;
            }
            if (cv::waitKey(1) == 27) { // Touche ESC pour quitter
                break;
            }
        }

        // Calcul du label avec le maximum de prédictions
        int maxCount = std::max({countYoussef, countOmar, countYassine, countMahdi});
        std::string maxLabel;

        if (maxCount == countYoussef) {
            maxLabel = "ADMIN";
        } else if (maxCount == countOmar) {
            maxLabel = "Omar";
        } else if (maxCount == countYassine) {
            maxLabel = "Yassine";
        } else if (maxCount == countMahdi) {
            maxLabel = "Mahdi";
        } else {
            maxLabel = "Unknown";
        }

        std::cout << "Label detected: " << maxLabel << " (Count: " << maxCount << ")" << std::endl;

        if (maxLabel == "ADMIN") {
            isYoussef=true;
        } else {
            isYoussef=false;

        }

        cap.release();
        cv::destroyAllWindows();


        // Afficher le résultat final de la détection
        if (isYoussef) {
            QMessageBox::information(this, "Success", "Bonjour ADMIN .");
            // Code SMTP pour envoyer un e-mail à Youssef
            // Générer un code de vérification aléatoire

            // Create the email message
            MimeMessage message;
            message.setSender(new EmailAddress("AquaHub@gmail.com", "AquaHub"));
            message.addRecipient(new EmailAddress("youssefbenlallahom03@gmail.com", "Youssef"));
            message.setSubject("Recuperation de mot de passe - Code de verification");
            message.addPart(new MimeText("Bonjour Youssef,\n\nVous avez demandé à réinitialiser votre mot de passe. \nVeuillez utiliser le code de vérification suivant : " + verificationCode + ".\n\nCordialement, AquaHub"));

            // Send the email
            SmtpClient smtp("smtp-relay.brevo.com", 587, SmtpClient::TcpConnection);
            smtp.setUser("youssefbenlallahom03@gmail.com");
            smtp.setPassword("L8d6qHknr9OMRAQ0");

            if (!smtp.connectToHost() || !smtp.login() || !smtp.sendMail(message)) {
                QMessageBox::critical(this, "Error", "Failed to send email. Exiting...", QMessageBox::Cancel);
                return ;
            }

            smtp.quit();

            QMessageBox::information(this, "Email Envoyé", "Email envoyé avec succes.", QMessageBox::Ok);

            // Vérification du code de vérification
            bool isVerificationCodeCorrect = false;
            for (int i = 0; i < 3; ++i) { // Testez jusqu'à 3 fois
                QString enteredCode = QInputDialog::getText(this, "Code de verification", "Entrer le code de verification :", QLineEdit::Normal, "");
                if (enteredCode == verificationCode) {
                    isVerificationCodeCorrect = true;
                    break;
                }
                else if (enteredCode=="") return;
            }

            if (isVerificationCodeCorrect) {
                // Si le code de vérification est correct, demandez le nouveau mot de passe
                QString newPassword = QInputDialog::getText(this, "Nouveau mot de passe", "Entrer votre nouveau password:", QLineEdit::Password, "");
                QString confirmPassword = QInputDialog::getText(this, "Confirmer Mot de passe", "Confirm your new password:", QLineEdit::Password, "");

                if (newPassword == confirmPassword) {
                    mdp_admin = newPassword;
                    QMessageBox::information(this, "Mot de passe change", "Votre mot de passe a ete change avec succe.");
                } else {
                    QMessageBox::critical(this, "Error", "Passwords do not match. Please try again.");
                }
            } else {
                QMessageBox::critical(this, "Error", "Incorrect verification code. Please try again later.");
                return;
            }
        } else {
            QMessageBox::critical(this, "Failure", "Visage admin verifié incorrect.");
            return;
        }
    }
    else {
        QSqlQuery query;
        query.prepare("SELECT mdp FROM employe WHERE email = :email");
        query.bindValue(":email", email);
        if (!query.exec()) {
            qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
        } else {
            qDebug() << "Requête exécutée avec succès.";
        }

        if (query.next()) {
            // Envoi du code de vérification par e-mail
            MimeMessage message;
            message.setSender(new EmailAddress("AquaHub@gmail.com", "AquaHub"));
            message.addRecipient(new EmailAddress(email, "Destinataire"));
            message.setSubject("Recuperation de mot de passe - Code de verification");
            message.addPart(new MimeText("Bonjour,\n\nVous avez demandé à réinitialiser votre mot de passe. \nVeuillez utiliser le code de vérification suivant : " + verificationCode + ".\n\nCordialement, AquaHub"));

            SmtpClient smtp("smtp-relay.brevo.com", 587, SmtpClient::TcpConnection);
            smtp.setUser("youssefbenlallahom03@gmail.com");
            smtp.setPassword("L8d6qHknr9OMRAQ0");

            if (!smtp.connectToHost() || !smtp.login() || !smtp.sendMail(message)) {
                QMessageBox::critical(this, "Error", "Failed to send email. Exiting...", QMessageBox::Cancel);
                return ;
            }

            smtp.quit();

            // Vérification du code de vérification
            bool isVerificationCodeCorrect = false;
            for (int i = 0; i < 3; ++i) { // Testez jusqu'à 3 fois
                QString enteredCode = QInputDialog::getText(this, "Code de vérification", "Entrer le code de vérification :", QLineEdit::Normal, "");
                if (enteredCode == verificationCode) {
                    isVerificationCodeCorrect = true;
                    break;
                }
            }

            if (isVerificationCodeCorrect) {
                QString newPassword = QInputDialog::getText(this, "Nouveau mot de passe", "Entrer votre nouveau mot de passe :", QLineEdit::Password, "");
                QString confirmPassword = QInputDialog::getText(this, "Confirmer Mot de passe", "Confirmer votre nouveau mot de passe :", QLineEdit::Password, "");

                if (newPassword == confirmPassword) {
                    QSqlQuery updateQuery;
                    updateQuery.prepare("UPDATE employe SET mdp = :mdp WHERE email = :email");
                    updateQuery.bindValue(":email", email);
                    updateQuery.bindValue(":mdp", newPassword);
                    if (updateQuery.exec()) {
                        qDebug() << "Mot de passe mis à jour avec succès.";
                        QMessageBox::information(this, "Mot de passe changé", "Votre mot de passe a été changé avec succès.");
                    } else {
                        qDebug() << "Erreur lors de la mise à jour du mot de passe :" << updateQuery.lastError().text();
                        QMessageBox::critical(this, "Erreur", "Une erreur est survenue lors de la mise à jour du mot de passe. Veuillez réessayer.");
                        return;
                    }
                } else {
                    QMessageBox::critical(this, "Erreur", "Les mots de passe ne correspondent pas. Veuillez réessayer.");
                    return;
                }
            }
        }
    }
}




void MainWindow::on_loginButton_clicked()
{
    QString email = ui->usernameLineEdit->text();
    QString mdp = ui->passwordLineEdit->text();

    Employe employe;
    bool test = employe.verifierConnexion(email, mdp);
    QString poste = employe.getPost(email,mdp);
    QString prenom = employe.getnom(email,mdp);
    if((email=="admin" || email=="ADMIN") && mdp==mdp_admin && test==false) {
        QMessageBox::information(this, "Connexion réussie", "Bienvenue admin");
        ui->stackedWidget->setCurrentIndex(1);
        return;
    }
    if (test) {
        if (poste == "Responsable des evenements") {
            QMessageBox::information(this, "Connexion réussie", "Bienvenue "+prenom);
            ui->stackedWidget->setCurrentIndex(6);
            ui->gestion_employe->setEnabled(false);
            ui->gestion_formation->setEnabled(false);
            ui->gestion_abo->setEnabled(false);
            ui->gestion_equi->setEnabled(false);
            ui->gestion_event->setEnabled(true);
            ui->gestion_membre->setEnabled(false);
        } else if (poste == "RH") {
            QMessageBox::information(this, "Connexion réussie", "Bienvenue "+prenom);
            ui->stackedWidget->setCurrentIndex(3);
            ui->gestion_employe->setEnabled(true);
            ui->gestion_formation->setEnabled(false);
            ui->gestion_abo->setEnabled(false);
            ui->gestion_equi->setEnabled(false);
            ui->gestion_event->setEnabled(false);
            ui->gestion_membre->setEnabled(false);
        } else if (poste == "Agent d'accueil") {
            QMessageBox::information(this, "Connexion réussie", "Bienvenue "+prenom);
            ui->stackedWidget->setCurrentIndex(4);
            ui->gestion_employe->setEnabled(false);
            ui->gestion_formation->setEnabled(false);
            ui->gestion_abo->setEnabled(true);
            ui->gestion_equi->setEnabled(false);
            ui->gestion_event->setEnabled(false);
            ui->gestion_membre->setEnabled(true);
        } else if (poste == "Responsable des equipements") {
            QMessageBox::information(this, "Connexion réussie", "Bienvenue "+prenom);
            ui->stackedWidget->setCurrentIndex(5);
            ui->gestion_employe->setEnabled(false);
            ui->gestion_formation->setEnabled(false);
            ui->gestion_abo->setEnabled(false);
            ui->gestion_equi->setEnabled(true);
            ui->gestion_event->setEnabled(false);
            ui->gestion_membre->setEnabled(false);
        } else if (poste == "Formateur") {
            QMessageBox::information(this, "Connexion réussie", "Bienvenue "+prenom);
            ui->stackedWidget->setCurrentIndex(7);
            ui->gestion_employe->setEnabled(false);
            ui->gestion_formation->setEnabled(true);
            ui->gestion_abo->setEnabled(false);
            ui->gestion_equi->setEnabled(false);
            ui->gestion_event->setEnabled(false);
            ui->gestion_membre->setEnabled(false);
        } else {
            // Poste non reconnu
        }
    } else {
        QMessageBox::warning(this, "Erreur de connexion", "Email, mot de passe incorrect");
        return;
    }

}

void MainWindow::on_gestionButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void MainWindow::on_parcourir_ajout_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Sélectionner une image", QDir::homePath(), "Images (*.png *.jpg *.jpeg *.bmp)");

    if (!imagePath.isEmpty())
    {
        ui->image_emp_ajout->setText(imagePath);
    }

}

void MainWindow::on_Retour_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Retour_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_Retour_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_Retour_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}








void MainWindow::on_gestion_event_clicked()
{

    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_gestion_membre_clicked()
{

    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_gestion_abo_clicked()
{

    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_gestion_formation_clicked()
{

    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_gestion_equi_clicked()
{

    ui->stackedWidget->setCurrentIndex(5);
}
bool MainWindow::validateNom()
{
    QString nom = ui->nom_emp_ajout->text();
    QString nom_m = ui->nom_emp_modifier->text();
    bool test=true;
    QRegExp regexNom("^[a-zA-Z ]+$"); // Permet uniquement les lettres alphabétiques
    if (!nom.contains(regexNom) && nom.length() != 0)
    {
        ui->label_error_nom->setText("Le nom doit contenir uniquement des lettres alphabétiques.");
        ui->label_error_nom->setStyleSheet("color: red;");
        test=false;
    }
    else
    {
        ui->label_error_nom->setText("");
        test=true;
    }

    if (!nom_m.contains(regexNom) && nom_m.length() != 0)
    {
        ui->label_error_nom_modifer->setText("Le nom doit contenir uniquement des lettres alphabétiques.");
        ui->label_error_nom_modifer->setStyleSheet("color: red;");
        test=false;

    }
    else
    {
        ui->label_error_nom_modifer->setText("");
        test=true;
    }
    return test;

}

bool MainWindow::validatePrenom()
{
    QString prenom = ui->prenom_emp_ajout->text();
    QString prenom_m = ui->prenom_emp_modifier->text();
    bool test=true;

    QRegExp regexPrenom("^[a-zA-Z]+$"); // Permet uniquement les lettres alphabétiques
    if (!prenom.contains(regexPrenom) && prenom.length() != 0)
    {
        ui->label_error_prenom->setText("Le prénom doit contenir uniquement des lettres alphabétiques.");
        ui->label_error_prenom->setStyleSheet("color: red;");
        test=false;
    }
    else
    {
        ui->label_error_prenom->setText("");
        test=true;
    }

    if (!prenom_m.contains(regexPrenom) && prenom_m.length() != 0)
    {
        ui->label_error_prenom_modifier->setText("Le prénom doit contenir uniquement des lettres alphabétiques.");
        ui->label_error_prenom_modifier->setStyleSheet("color: red;");
        test=false;

    }
    else
    {
        ui->label_error_prenom_modifier->setText("");
        test=true;
    }
    return test;

}

bool MainWindow::validateCIN()
{
    QString cin = ui->id_emp_ajout->text();
    bool test=true;
    QRegExp regexCIN("^\\d{8}$"); // Contient exactement 8 chiffres
    if (!cin.contains(regexCIN) && cin.length() != 0)
    {
        ui->label_error_cin->setText("Le CIN doit contenir exactement 8 chiffres.");
        ui->label_error_cin->setStyleSheet("color: red;");
        test=false;
    }
    else
    {
        ui->label_error_cin->setText("");
        test=true;
    }
    return test;

}

bool MainWindow::validateMDP()
{
    QString mdp = ui->mdp_emp_ajout->text();
    QString mdp_m = ui->mdp_emp_modifier->text();
    bool test = false;
    QRegExp regexMDP("^(?=.*[0-9])(?=.*[a-zA-Z]).{1,}$"); // Contient au moins une lettre et un chiffre

    if (!mdp.contains(regexMDP) && mdp.length() != 0)
    {
        ui->label_error_mdp->setText("Le mot de passe doit contenir à la fois des lettres et des chiffres.");
        ui->label_error_mdp->setStyleSheet("color: red;");
        test = false;
    }
    else
    {
        test=true;
        ui->label_error_mdp->setText("");
    }

    if (!mdp_m.contains(regexMDP) && mdp_m.length() != 0)
    {
        ui->label_error_mdp_modifier->setText("Le mot de passe doit contenir à la fois des lettres et des chiffres.");
        ui->label_error_mdp_modifier->setStyleSheet("color: red;");
        test = false;
    }
    else
    {
        test=true;
        ui->label_error_mdp_modifier->setText("");
    }

    return test;
}


bool MainWindow::validateEmail()
{
    QString email = ui->email_emp_ajout->text();
    QString email_m = ui->email_emp_modifier->text();
    bool test=true;
    QRegExp regexEmail("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b"); // Vérifie le format de l'email
    if (!email.contains(regexEmail) && email.length() != 0)
    {
        ui->label_error_email->setText("Veuillez saisir une adresse email valide.");
        ui->label_error_email->setStyleSheet("color: red;");
        test=false;
    }
    else
    {
        ui->label_error_email->setText("");
        test=true;
    }

    if (!email_m.contains(regexEmail) && email_m.length() != 0)
    {
        ui->label_error_email_modifier->setText("Veuillez saisir une adresse email valide.");
        ui->label_error_email_modifier->setStyleSheet("color: red;");
        test=false;
    }
    else
    {
        ui->label_error_email_modifier->setText("");
        test=true;
    }
    return test;
}



void MainWindow::on_ajout_emp_clicked()
{
    int id;
    QString cin = ui->id_emp_ajout->text();
    QString nom = ui->nom_emp_ajout->text();
    QString prenom = ui->prenom_emp_ajout->text();
    QString sexe;
    if (ui->male_ajout->isChecked())
    {
        sexe = "Male";
    }
    else if (ui->femelle_ajout->isChecked())
    {
        sexe = "Femelle";
    }
    QString poste = ui->poste_emp_ajout->currentText();
    QString email = ui->email_emp_ajout->text();
    QString image = ui->image_emp_ajout->text();
    QString mdp = ui->mdp_emp_ajout->text();
    QDate date = ui->date_emp_ajout->date();
    int salaire = ui->salaire_emp_ajout->value();
    QString uid = ui->uid_emp_ajout->text();

    bool nomValide = validateNom();
    bool prenomValide = validatePrenom();
    bool cinValide = validateCIN();

    bool mdpValide = validateMDP();
    bool emailValide = validateEmail();
    qDebug() << "Validation nom1:" << nomValide;
    qDebug() << "Validation nom2:" << prenomValide;
    qDebug() << "Validation nom3:" << cinValide;
    qDebug() << "Validation nom4:" << mdpValide;
    qDebug() << "Validation nom5:" << emailValide;

    QString defaultImagePath = "C:/Users/youssef/Desktop/integration/image/pngwing.com.png";
    Employe e(id,cin, nom, prenom, sexe, poste, image, email, mdp, date, salaire,uid);

    if(cin.isEmpty()||nom.isEmpty()||prenom.isEmpty()||image.isEmpty()||email.isEmpty()||mdp.isEmpty())
    {
        QMessageBox::critical(this, "Erreur", "Tous les champs doivent etre remplis");
    }
    else if (nomValide && prenomValide && cinValide && mdpValide && emailValide)
    {
        e.ajouter();
        ui->zone_image->setPixmap(QPixmap(defaultImagePath));
        QMessageBox::information(this, "Succès", "L'employé a été ajouté avec succès");
        ui->id_emp_ajout->clear();
        ui->nom_emp_ajout->clear();
        ui->prenom_emp_ajout->clear();
        ui->male_ajout->setChecked(false);
        ui->femelle_ajout->setChecked(false);
        ui->poste_emp_ajout->setCurrentIndex(0);
        ui->email_emp_ajout->clear();
        ui->image_emp_ajout->clear();
        ui->mdp_emp_ajout->clear();
        ui->date_emp_ajout->setDate(QDate::currentDate());
        ui->salaire_emp_ajout->setValue(0.0);
        ui->uid_emp_ajout->clear();
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Veuillez verifier la bonne saisie des champs");
    }
}

void MainWindow::afficherImage(const QString &imagePath, const QString &labelName)
{
    if (!imagePath.isEmpty())
    {
        QImage image(imagePath);
        if (!image.isNull())
        {
            if (labelName == "zone_image")
            {
                ui->zone_image->setPixmap(QPixmap::fromImage(image));
            }
            if(labelName == "zone_image_modifier")
            {
                ui->zone_image_modifier->setPixmap(QPixmap::fromImage(image));
            }
        }
    }
}


void MainWindow::on_capturer_ajout_clicked()
{
    cameraWidget = new Camera(this);
    cameraWidget->show();
    connect(cameraWidget, &Camera::imagePathCaptured, this, [this](const QString &imagePath) {
        qDebug() << "Chemin de l'image capturée:" << imagePath;
        ui->image_emp_ajout->setText(imagePath);
    });
}


void MainWindow::fillComboBox()
{
    ui->choix_recherche_emp->clear();
    QStringList attributes;
    for (int i = 0; i < Model->columnCount(); ++i) {
        QString attribute = Model->headerData(i, Qt::Horizontal).toString().toLower(); // Convertir l'attribut en minuscules
        if (!attributes.contains(attribute)) {
            attributes.append(attribute);
        }
    }
    ui->choix_recherche_emp->addItems(attributes);
}

void MainWindow::on_recherche_emp_bouton_clicked()
{
    QString selectedAttribute = ui->choix_recherche_emp->currentText();

    int columnIndex = Model->fieldIndex(selectedAttribute);

    QString searchValue = QInputDialog::getText(this, "Rechercher", "Entrez la valeur de recherche:");

    ui->table_emp->clearSelection();

    if (searchValue.isEmpty()) {
        for (int i = 0; i < Model->rowCount(); ++i) {
            ui->table_emp->showRow(i);
        }
        return;
    } else {
        for (int i = 0; i < Model->rowCount(); ++i) {
            if (Model->data(Model->index(i, columnIndex)).toString() == searchValue) {
                ui->table_emp->showRow(i);

            } else {
                ui->table_emp->hideRow(i);

            }
        }
    }

}

void MainWindow::on_supprimer_emp_clicked()
{
    // Récupérer les index des lignes sélectionnées
    QModelIndexList selectedRows = ui->table_emp->selectionModel()->selectedRows();

    // Vérifier si des lignes sont sélectionnées
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner au moins une ligne à supprimer.");
        return;
    }

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Êtes-vous sûr de vouloir supprimer les employés sélectionnés ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::No) {
        return;
    }

    // Supprimer les employés de la base de données
    Employe employe;
    bool success = true;
    for (const QModelIndex &index : selectedRows) {
        QString id = index.data().toString(); // Assuming ID is in the first column
        if (!employe.supprimer(id)) {
            success = false;
            break;
        }
    }

    if (success) {
        QMessageBox::information(this, "Succès", "Les employés sélectionnés ont été supprimés avec succès.");
        Model->select();
    } else {
        QMessageBox::critical(this, "Erreur", "Une erreur s'est produite lors de la suppression des employés.");
    }
}
void MainWindow::remplirComboBoxEmployes() {
    // Assurez-vous que la combobox est vide
    ui->id_emp_modifier->clear();
    QSqlQuery query("SELECT id_employe FROM employe");
    while (query.next()) {
        QString id = query.value(0).toString();
        ui->id_emp_modifier->addItem(id);
    }
}
void MainWindow::on_id_emp_modifier_currentIndexChanged(int index) {
    // Récupérer l'ID sélectionné dans le combobox
    int selectedId = ui->id_emp_modifier->currentText().toInt();
    if (selectedId == -1) {
        return;
    }

    // Récupérer les informations de l'employé correspondant à cet ID depuis la base de données
    QSqlQuery query;
    query.prepare("SELECT * FROM employe WHERE id_employe = :id");
    query.bindValue(":id", selectedId);
    if (query.exec() && query.first()) {
        ui->cin_emp_modifier->setText(query.value(1).toString());
        ui->nom_emp_modifier->setText(query.value(2).toString());
        ui->prenom_emp_modifier->setText(query.value(3).toString());
        QString sexe = query.value(4).toString();
        if (sexe == "Homme") {
            ui->male_emp_modifier->setChecked(true);
        } else {
            ui->femelle_emp_modifier->setChecked(true);
        }
        ui->poste_emp_modifier->setCurrentText(query.value(5).toString());
        ui->image_emp_modifier->setText(query.value(6).toString());
        ui->email_emp_modifier->setText(query.value(7).toString());
        ui->mdp_emp_modifier->setText(query.value(8).toString());
        ui->date_emp_modifier->setDate(query.value(9).toDate());
        ui->salaire_emp_modifier->setValue(query.value(10).toDouble());
        ui->uid_emp_modifier->setText(query.value(11).toString());
    }
}





void MainWindow::on_modifer_emp_clicked()
{

    QString selectedIdStr = ui->id_emp_modifier->currentText();
    bool ok;
    int selectedId = selectedIdStr.toInt(&ok);
    if (!ok || selectedId <= 0) {
        QMessageBox::critical(this, "Erreur", "Veuillez sélectionner un ID valide.");
        return;
    }
    qDebug() << "selectedId: " << selectedId;

    QString updatedNom = ui->nom_emp_modifier->text();
    qDebug() << "updatedNom: " << updatedNom;

    QString updatedPrenom = ui->prenom_emp_modifier->text();
    qDebug() << "updatedPrenom: " << updatedPrenom;

    QString updatedSexe;
    if (ui->male_emp_modifier->isChecked()) {
        updatedSexe = "Homme";
    } else if (ui->femelle_emp_modifier->isChecked()) {
        updatedSexe = "Femme";
    }
    qDebug() << "updatedSexe: " << updatedSexe;

    QString updatedCin = ui->cin_emp_modifier->text();
    qDebug() << "updatedCin: " << updatedCin;

    QString updatedPoste = ui->poste_emp_modifier->currentText();
    qDebug() << "updatedPoste: " << updatedPoste;

    QString updatedEmail = ui->email_emp_modifier->text();
    qDebug() << "updatedEmail: " << updatedEmail;

    QString updatedImage = ui->image_emp_modifier->text();
    qDebug() << "updatedImage: " << updatedImage;

    QString updatedMdp = ui->mdp_emp_modifier->text();
    qDebug() << "updatedMdp: " << updatedMdp;
    QString uid = ui->uid_emp_modifier->text();

    QDate updatedDateNaissance = ui->date_emp_modifier->date();
    if (!updatedDateNaissance.isValid()) {
        QMessageBox::critical(this, "Erreur", "Veuillez entrer une date de naissance valide.");
        return;
    }
    qDebug() << "updatedDateNaissance: " << updatedDateNaissance;


    int salaire = ui->salaire_emp_modifier->text().toInt();

    qDebug() << "updatedSalaire: " << salaire;

    bool nomValide = validateNom();
    bool prenomValide = validatePrenom();
    bool mdpValide = validateMDP();
    bool emailValide = validateEmail();
    Employe e(selectedId,updatedCin,updatedNom,updatedPrenom,updatedSexe,updatedPoste,updatedImage,updatedEmail,updatedMdp,updatedDateNaissance,salaire,uid);
    if(updatedCin.isEmpty()||updatedNom.isEmpty()||updatedPrenom.isEmpty()||updatedImage.isEmpty()||updatedEmail.isEmpty()||updatedMdp.isEmpty())
    {
        QMessageBox::critical(this, "Erreur", "Tous les champs doivent etre remplis");
    }
    else if(nomValide && prenomValide && mdpValide && emailValide)
    {
        e.modifier();
        QMessageBox::information(this, "Succès", "Les informations de l'employé ont été mises à jour avec succès.");

    }
    else
    {
        QMessageBox::critical(this, "Erreur", "verifier les champs saisi.");
    }

}


void MainWindow::on_annuler_emp_clicked()
{

    // Effacer les valeurs des champs du formulaire
    ui->nom_emp_modifier->clear();
    ui->prenom_emp_modifier->clear();
    ui->male_emp_modifier->setChecked(false);
    ui->femelle_emp_modifier->setChecked(false);
    ui->poste_emp_modifier->setCurrentIndex(0);
    ui->email_emp_modifier->clear();
    QString defaultImagePath = "C:/Users/youssef/Desktop/integration/image/pngwing.com.png";
    ui->zone_image_modifier->setPixmap(QPixmap(defaultImagePath));
    ui->mdp_emp_modifier->clear();
    ui->date_emp_modifier->setDate(QDate::currentDate());
    ui->salaire_emp_modifier->setValue(0.0);


}

void MainWindow::on_refresh_emp_clicked()
{
    // Rafraîchir le modèle de données du tableau
    Model->select();

    for (int row = 0; row < Model->rowCount(); ++row) {
        Model->setData(Model->index(row, 8), "**********"); // Colonne 8 pour le mot de passe
    }
    ui->table_emp->setModel(Model);
    ui->table_emp->setItemDelegateForColumn(6, new ImageDelegate(ui->table_emp)); // Colonne "Image"
    ui->table_emp->resizeColumnsToContents(); // Redimensionne les colonnes pour afficher les données correctement
}

void MainWindow::on_capturer_modifier_clicked()
{
    cameraWidget = new Camera(this);
    cameraWidget->show();
    connect(cameraWidget, &Camera::imagePathCaptured, this, [this](const QString &imagePath) {
        qDebug() << "Chemin de l'image capturée:" << imagePath;
        ui->image_emp_modifier->setText(imagePath);
    });
}
int MainWindow::getIdFromTableView() {
    QItemSelectionModel *selection = ui->table_emp->selectionModel();
    QModelIndexList selectedRows = selection->selectedIndexes();
    int id = -1; // Valeur par défaut si aucun élément n'est sélectionné ou si l'ID n'est pas valide

    foreach (QModelIndex index, selectedRows) {
        // Vérifier si l'élément est de la colonne ID_EMPLOYE
        if (index.column() == 0) { // Supposons que la colonne 0 contient l'ID
            id = index.data().toInt();
            break; // Sortir de la boucle si l'ID est trouvé
        }
    }

    return id;
}
void MainWindow::on_parcourir_modifier_clicked()
{
    // Ouvrir une boîte de dialogue pour sélectionner un fichier image
    QString imagePath = QFileDialog::getOpenFileName(this, "Sélectionner une image", QDir::homePath(), "Images (*.png *.jpg *.jpeg *.bmp)");

    // Vérifier si un fichier a été sélectionné
    if (!imagePath.isEmpty())
    {
        // Afficher le chemin de l'image dans le QLineEdit
        ui->image_emp_modifier->setText(imagePath);
    }
}

void MainWindow::on_pdf_emp_clicked()
{
    QModelIndex index = ui->table_emp->selectionModel()->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "Aucune sélection", "Veuillez sélectionner un employé.");
        return;
    }

    int selectedId = index.sibling(index.row(), 0).data().toInt(); // Supposons que la colonne 0 contient l'ID

    // Demander confirmation à l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous télécharger le PDF de cet employé ?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Créer une boîte de dialogue avec une barre de progression
        QProgressDialog dialog("Génération du PDF en cours...", "Annuler", 0, 100, this);
        dialog.setWindowTitle("Génération du PDF");
        dialog.setWindowModality(Qt::WindowModal);
        dialog.setMinimumDuration(0);
        dialog.setCancelButton(nullptr); // Ne pas afficher de bouton Annuler

        // Simuler une génération de PDF en utilisant une boucle
        for (int i = 0; i <= 100; ++i) {
            dialog.setValue(i); // Mettre à jour la valeur de la barre de progression
            QCoreApplication::processEvents(); // Mettre à jour l'interface utilisateur
            if (dialog.wasCanceled()) // Vérifier si l'utilisateur a annulé
                break;
            // Simulation d'un délai pour la génération du PDF
            QThread::msleep(50); // Attendre 50 millisecondes
        }

        // Fermer la boîte de dialogue une fois la génération terminée
        dialog.close();
        Employe employe;
        employe.telechargerPDF(selectedId);
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/youssef/Desktop/integration_crud/import.pdf"));

    }
}
void MainWindow::on_stat_emp_clicked()
{
    QAbstractItemModel *Model = ui->table_emp->model();
    QMap<QString, int> employeeCountMap;

    int totalEmployees = Model->rowCount();

    for (int row = 0; row < Model->rowCount(); ++row)
    {
        QModelIndex index = Model->index(row, 5);
        QString poste = index.data().toString();

        if (employeeCountMap.contains(poste))
        {
            employeeCountMap[poste]++;
        }
        else
        {
            employeeCountMap.insert(poste, 1);
        }
    }

    QPieSeries *series = new QPieSeries();
    for (const QString &poste : employeeCountMap.keys())
    {
        int count = employeeCountMap[poste];
        double percentage = (static_cast<double>(count) / totalEmployees) * 100;
        series->append(poste, percentage);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Pourcentage des employés par poste");

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->resize(800, 600); // Taille en pixels

    chartView->show();
}

void MainWindow::on_tri_emp_activated(int index)
{
    static Qt::SortOrder order = Qt::AscendingOrder; // Garder l'ordre actuel
    QString critereTri = ui->tri_emp->currentText();
    if (critereTri == "Poste") {
        ui->table_emp->sortByColumn(5, order);
    } else if (critereTri == "Salaire") {
        ui->table_emp->sortByColumn(10, order);
    }
    else if (critereTri == "Sexe") {
        ui->table_emp->sortByColumn(4, order);
    }
    order = (order == Qt::AscendingOrder) ? Qt::DescendingOrder : Qt::AscendingOrder;
}

void MainWindow::on_refresh_emp_modifier_clicked()
{
    ui->id_emp_modifier->clear();
    QSqlQuery query("SELECT id_employe FROM employe");
    while (query.next()) {
        QString id = query.value(0).toString();
        ui->id_emp_modifier->addItem(id);
    }
}

MainWindow::~MainWindow()
{

    cameraWidget->close();
    delete cameraWidget;
    delete ui;
    delete Model;
}



void MainWindow::on_icone_mdp_clicked()
{
    static bool mdpVisible = false; // Variable statique pour suivre l'état de l'affichage du mot de passe

    if (!mdpVisible) {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal); // Afficher le mot de passe
        ui->icone_mdp->setIcon(QIcon("../integration_crud/image/view.png")); // Changer l'icône en œil barré
    } else {
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password); // Masquer le mot de passe
        ui->icone_mdp->setIcon(QIcon("../integration_crud/image/hide.png")); // Changer l'icône en œil
    }

    mdpVisible = !mdpVisible; // Inverser l'état de l'affichage du mot de passe pour la prochaine fois
}





void MainWindow::on_gestion_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}



void MainWindow::on_Retour_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_Retour_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_quit_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_Retour_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}
