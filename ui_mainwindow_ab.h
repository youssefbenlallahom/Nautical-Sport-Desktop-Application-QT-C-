/********************************************************************************
** Form generated from reading UI file 'mainwindow_ab.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_AB_H
#define UI_MAINWINDOW_AB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_ab
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *index5;
    QPushButton *Retour_6;
    QTabWidget *tabWidget_3;
    QWidget *tab;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_4;
    QLabel *label_34;
    QLineEdit *id_ab;
    QLabel *label_37;
    QLineEdit *prix_ab;
    QLabel *label_35;
    QComboBox *type_ab;
    QLabel *label_36;
    QComboBox *acces_ab;
    QLabel *label_38;
    QComboBox *combobox_mb;
    QLabel *label_33;
    QDateEdit *date_deb;
    QLabel *label_32;
    QDateEdit *date_fin;
    QPushButton *soumetre_ab;
    QWidget *tab_2;
    QLabel *label_10;
    QPushButton *modifier_ab;
    QWidget *formLayoutWidget_14;
    QFormLayout *formLayout_5;
    QLabel *label_52;
    QLineEdit *prix_ab_2;
    QLabel *label_51;
    QComboBox *type_ab_2;
    QLabel *label_47;
    QComboBox *acces_ab_2;
    QLabel *label_48;
    QDateEdit *dateEdit_debut;
    QLabel *label_46;
    QDateEdit *dateEdit_fin;
    QPushButton *ok;
    QComboBox *mod_combobox;
    QLabel *label_49;
    QPushButton *refresh_ab_2;
    QWidget *tab_3;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *sup_ab;
    QTableView *tableView_7;
    QComboBox *choix_combo_ab;
    QPushButton *recherche_ab_bouton_2;
    QPushButton *refresh_ab;
    QPushButton *pdf_ab;
    QPushButton *stat_abonnement_2;
    QWidget *tab_7;
    QLabel *label_15;
    QLabel *label_21;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QListView *widget_2;
    QListView *widget_3;
    QListView *widget_4;
    QLineEdit *lineEdit_ab;
    QLineEdit *lineEdit_ab1;
    QLineEdit *lineEdit_ab2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_ab_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow_ab)
    {
        if (MainWindow_ab->objectName().isEmpty())
            MainWindow_ab->setObjectName(QStringLiteral("MainWindow_ab"));
        MainWindow_ab->setEnabled(true);
        MainWindow_ab->resize(1366, 768);
        MainWindow_ab->setMaximumSize(QSize(2500, 2500));
        MainWindow_ab->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow_ab);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setEnabled(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 1366, 768));
        index5 = new QWidget();
        index5->setObjectName(QStringLiteral("index5"));
        Retour_6 = new QPushButton(index5);
        Retour_6->setObjectName(QStringLiteral("Retour_6"));
        Retour_6->setEnabled(true);
        Retour_6->setGeometry(QRect(30, 60, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Retour_6->setFont(font);
        Retour_6->setAutoFillBackground(false);
        Retour_6->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #ffffff; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #0EABB8; /* Texte blanc */\n"
"    padding: 10px ; /* Espacement int\303\251rieur */\n"
"\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"  \n"
"    overflow: hidden; /* Cache le contenu d\303\251bordant */\n"
"    transition: background-color 0.3s, color 0.3s; /* Transition des couleurs */\n"
"}\n"
"\n"
"/* Style au survol du bouton */\n"
"QPushButton:hover {\n"
"    background-color: #0EABB8; /* Fond devient blanc */\n"
"    color: #ffffff; /* Texte devient bleu clair */\n"
"}\n"
"\n"
"/* Style au clic du bouton */\n"
"QPushButton:pressed {\n"
"    background-color: #0EABB8; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
"}\n"
"\n"
"/* A"
                        "nimation pour le pseudo-\303\251l\303\251ment :after */\n"
"QPushButton::after {\n"
"    content: ''; /* Contenu vide */\n"
"    position: absolute; /* Position absolue */\n"
"    width: 100%; /* Largeur \303\240 100% */\n"
"    height: 100%; /* Hauteur \303\240 100% */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* Fond semi-transparent */\n"
"    top: 50%; /* Positionnement au centre vertical */\n"
"    left: 50%; /* Positionnement au centre horizontal */\n"
"    border-radius: 50%; /* Bordure arrondie */\n"
"    transform: translate(-50%, -50%) scale(0); /* R\303\251duit l'\303\251chelle \303\240 0 */\n"
"    transition: transform 0.5s ease; /* Transition de l'\303\251chelle */\n"
"}\n"
"\n"
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral("../Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        Retour_6->setIcon(icon);
        Retour_6->setAutoDefault(true);
        tabWidget_3 = new QTabWidget(index5);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setEnabled(true);
        tabWidget_3->setGeometry(QRect(0, 0, 1366, 786));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMinimumSize(QSize(1366, 768));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1366, 768));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_3->setScaledContents(true);
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(380, 170, 520, 492));
        formLayout_4 = new QFormLayout(formLayoutWidget);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setHorizontalSpacing(55);
        formLayout_4->setVerticalSpacing(35);
        formLayout_4->setContentsMargins(45, 17, 99, 41);
        label_34 = new QLabel(formLayoutWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        QFont font1;
        font1.setFamily(QStringLiteral("Bell MT"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_34->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_34);

        id_ab = new QLineEdit(formLayoutWidget);
        id_ab->setObjectName(QStringLiteral("id_ab"));
        id_ab->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
"QLineEdit {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #4682B4; /* Couleur du texte */\n"
"    background-color: #F0F8FF; /* Couleur de fond */\n"
"}\n"
"\n"
"/* Style lorsque le champ de formulaire est en focus */\n"
"QLineEdit:focus {\n"
"    border-color: #1E90FF; /* Bordure bleu clair en focus */\n"
"}\n"
"\n"
"/* Style pour les champs d\303\251sactiv\303\251s */\n"
"QLineEdit:disabled {\n"
"    color: #808080; /* Texte gris pour les champs d\303\251sactiv\303\251s */\n"
"    background-color: #F5F5F5; /* Fond gris clair pour les champs d\303\251sactiv\303\251s */\n"
"}\n"
""));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, id_ab);

        label_37 = new QLabel(formLayoutWidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_37);

        prix_ab = new QLineEdit(formLayoutWidget);
        prix_ab->setObjectName(QStringLiteral("prix_ab"));
        prix_ab->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
"QLineEdit {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #4682B4; /* Couleur du texte */\n"
"    background-color: #F0F8FF; /* Couleur de fond */\n"
"}\n"
"\n"
"/* Style lorsque le champ de formulaire est en focus */\n"
"QLineEdit:focus {\n"
"    border-color: #1E90FF; /* Bordure bleu clair en focus */\n"
"}\n"
"\n"
"/* Style pour les champs d\303\251sactiv\303\251s */\n"
"QLineEdit:disabled {\n"
"    color: #808080; /* Texte gris pour les champs d\303\251sactiv\303\251s */\n"
"    background-color: #F5F5F5; /* Fond gris clair pour les champs d\303\251sactiv\303\251s */\n"
"}\n"
""));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, prix_ab);

        label_35 = new QLabel(formLayoutWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font1);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_35);

        type_ab = new QComboBox(formLayoutWidget);
        type_ab->setObjectName(QStringLiteral("type_ab"));
        QFont font2;
        type_ab->setFont(font2);
        type_ab->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, type_ab);

        label_36 = new QLabel(formLayoutWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setFont(font1);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_36);

        acces_ab = new QComboBox(formLayoutWidget);
        acces_ab->setObjectName(QStringLiteral("acces_ab"));
        acces_ab->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, acces_ab);

        label_38 = new QLabel(formLayoutWidget);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setFont(font1);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_38);

        combobox_mb = new QComboBox(formLayoutWidget);
        combobox_mb->setObjectName(QStringLiteral("combobox_mb"));
        combobox_mb->setFont(font2);
        combobox_mb->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid  #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, combobox_mb);

        label_33 = new QLabel(formLayoutWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setFont(font1);

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_33);

        date_deb = new QDateEdit(formLayoutWidget);
        date_deb->setObjectName(QStringLiteral("date_deb"));
        date_deb->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #f9f9f9; /* Couleur de fond */\n"
"    border: 2px solid  #4682B4; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px; /* Espace interne */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    width: 16px; /* Largeur de l'ic\303\264ne */\n"
"    height: 16px; /* Hauteur de l'ic\303\264ne */\n"
"    subcontrol-origin: padding; /* Position de l'ic\303\264ne */\n"
"    subcontrol-position: right center; /* Position de l'ic\303\264ne */\n"
"    right: 8px; /* Marge de droite */\n"
"    image: url(:/icons/calendar.png); /* Ic\303\264ne du calendrier */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: none; /* Supprimer l'ic\303\264ne par d\303\251faut */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border-color: #70a0d4; /* Bordure lorsqu'en focus */\n"
"    box-shadow: 0px 0px 5px #70a0d4; /* Ombre lorsqu'en focus */\n"
"}\n"
""));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, date_deb);

        label_32 = new QLabel(formLayoutWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setFont(font1);

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_32);

        date_fin = new QDateEdit(formLayoutWidget);
        date_fin->setObjectName(QStringLiteral("date_fin"));
        date_fin->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #f9f9f9; /* Couleur de fond */\n"
"    border: 2px solid  #4682B4; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px; /* Espace interne */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    width: 16px; /* Largeur de l'ic\303\264ne */\n"
"    height: 16px; /* Hauteur de l'ic\303\264ne */\n"
"    subcontrol-origin: padding; /* Position de l'ic\303\264ne */\n"
"    subcontrol-position: right center; /* Position de l'ic\303\264ne */\n"
"    right: 8px; /* Marge de droite */\n"
"    image: url(:/icons/calendar.png); /* Ic\303\264ne du calendrier */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: none; /* Supprimer l'ic\303\264ne par d\303\251faut */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border-color: #70a0d4; /* Bordure lorsqu'en focus */\n"
"    box-shadow: 0px 0px 5px #70a0d4; /* Ombre lorsqu'en focus */\n"
"}\n"
""));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, date_fin);

        soumetre_ab = new QPushButton(tab);
        soumetre_ab->setObjectName(QStringLiteral("soumetre_ab"));
        soumetre_ab->setEnabled(true);
        soumetre_ab->setGeometry(QRect(880, 370, 171, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        soumetre_ab->setFont(font3);
        soumetre_ab->setAutoFillBackground(false);
        soumetre_ab->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #ffffff; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 10px ; /* Espacement int\303\251rieur */\n"
"\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"  \n"
"    overflow: hidden; /* Cache le contenu d\303\251bordant */\n"
"    transition: background-color 0.3s, color 0.3s; /* Transition des couleurs */\n"
"}\n"
"\n"
"/* Style au survol du bouton */\n"
"QPushButton:hover {\n"
"    background-color: #ffffff; /* Fond devient blanc */\n"
"    color: #0EABB8; /* Texte devient bleu clair */\n"
"}\n"
"\n"
"/* Style au clic du bouton */\n"
"QPushButton:pressed {\n"
"    background-color: #ffffff; /* Fond devient blanc lors du clic */\n"
"    color: #0EABB8; /* Texte devient bleu clair lors du clic */\n"
"}"
                        "\n"
"\n"
"/* Animation pour le pseudo-\303\251l\303\251ment :after */\n"
"QPushButton::after {\n"
"    content: ''; /* Contenu vide */\n"
"    position: absolute; /* Position absolue */\n"
"    width: 100%; /* Largeur \303\240 100% */\n"
"    height: 100%; /* Hauteur \303\240 100% */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* Fond semi-transparent */\n"
"    top: 50%; /* Positionnement au centre vertical */\n"
"    left: 50%; /* Positionnement au centre horizontal */\n"
"    border-radius: 50%; /* Bordure arrondie */\n"
"    transform: translate(-50%, -50%) scale(0); /* R\303\251duit l'\303\251chelle \303\240 0 */\n"
"    transition: transform 0.5s ease; /* Transition de l'\303\251chelle */\n"
"}\n"
"\n"
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));
        soumetre_ab->setIcon(icon);
        soumetre_ab->setAutoDefault(true);
        tabWidget_3->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setMinimumSize(QSize(1366, 768));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 1366, 768));
        label_10->setStyleSheet(QStringLiteral("background-image: url(:/res/background.png);"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_10->setScaledContents(true);
        modifier_ab = new QPushButton(tab_2);
        modifier_ab->setObjectName(QStringLiteral("modifier_ab"));
        modifier_ab->setEnabled(true);
        modifier_ab->setGeometry(QRect(880, 390, 161, 51));
        modifier_ab->setFont(font);
        modifier_ab->setAutoFillBackground(false);
        modifier_ab->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton \"Annuler\" */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #ffffff; /* Bordure blanche */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 10px ; /* Espacement int\303\251rieur */\n"
"\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"  \n"
"    overflow: hidden; /* Cache le contenu d\303\251bordant */\n"
"    transition: background-color 0.3s, color 0.3s; /* Transition des couleurs */\n"
"}\n"
"\n"
"/* Style au survol du bouton \"Annuler\" */\n"
"QPushButton:hover {\n"
"    background-color: #ffffff; /* Fond devient blanc */\n"
"    color: #0EABB8; /* Texte devient bleu clair */\n"
"}\n"
"\n"
"/* Style au clic du bouton \"Annuler\" */\n"
"QPushButton:pressed {\n"
"    background-color: #ffffff; /* Fond devient blanc lors du clic */\n"
"    color: #0EABB8; /* Texte de"
                        "vient bleu clair lors du clic */\n"
"}\n"
"\n"
"/* Animation pour le pseudo-\303\251l\303\251ment :after */\n"
"QPushButton::after {\n"
"    content: ''; /* Contenu vide */\n"
"    position: absolute; /* Position absolue */\n"
"    width: 100%; /* Largeur \303\240 100% */\n"
"    height: 100%; /* Hauteur \303\240 100% */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* Fond semi-transparent */\n"
"    top: 50%; /* Positionnement au centre vertical */\n"
"    left: 50%; /* Positionnement au centre horizontal */\n"
"    border-radius: 50%; /* Bordure arrondie */\n"
"    transform: translate(-50%, -50%) scale(0); /* R\303\251duit l'\303\251chelle \303\240 0 */\n"
"    transition: transform 0.5s ease; /* Transition de l'\303\251chelle */\n"
"}\n"
"\n"
"/* Animation au survol du bouton \"Annuler\" */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../OneDrive/Bureau/Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        modifier_ab->setIcon(icon1);
        modifier_ab->setAutoDefault(true);
        formLayoutWidget_14 = new QWidget(tab_2);
        formLayoutWidget_14->setObjectName(QStringLiteral("formLayoutWidget_14"));
        formLayoutWidget_14->setGeometry(QRect(300, 240, 631, 389));
        formLayout_5 = new QFormLayout(formLayoutWidget_14);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setHorizontalSpacing(64);
        formLayout_5->setVerticalSpacing(37);
        formLayout_5->setContentsMargins(114, 23, 127, 50);
        label_52 = new QLabel(formLayoutWidget_14);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setFont(font1);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_52);

        prix_ab_2 = new QLineEdit(formLayoutWidget_14);
        prix_ab_2->setObjectName(QStringLiteral("prix_ab_2"));
        prix_ab_2->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
"QLineEdit {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #4682B4; /* Couleur du texte */\n"
"    background-color: #F0F8FF; /* Couleur de fond */\n"
"}\n"
"\n"
"/* Style lorsque le champ de formulaire est en focus */\n"
"QLineEdit:focus {\n"
"    border-color: #1E90FF; /* Bordure bleu clair en focus */\n"
"}\n"
"\n"
"/* Style pour les champs d\303\251sactiv\303\251s */\n"
"QLineEdit:disabled {\n"
"    color: #808080; /* Texte gris pour les champs d\303\251sactiv\303\251s */\n"
"    background-color: #F5F5F5; /* Fond gris clair pour les champs d\303\251sactiv\303\251s */\n"
"}\n"
""));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, prix_ab_2);

        label_51 = new QLabel(formLayoutWidget_14);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font1);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_51);

        type_ab_2 = new QComboBox(formLayoutWidget_14);
        type_ab_2->setObjectName(QStringLiteral("type_ab_2"));
        type_ab_2->setFont(font2);
        type_ab_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, type_ab_2);

        label_47 = new QLabel(formLayoutWidget_14);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setFont(font1);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_47);

        acces_ab_2 = new QComboBox(formLayoutWidget_14);
        acces_ab_2->setObjectName(QStringLiteral("acces_ab_2"));
        acces_ab_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, acces_ab_2);

        label_48 = new QLabel(formLayoutWidget_14);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font1);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_48);

        dateEdit_debut = new QDateEdit(formLayoutWidget_14);
        dateEdit_debut->setObjectName(QStringLiteral("dateEdit_debut"));
        dateEdit_debut->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #f9f9f9; /* Couleur de fond */\n"
"    border: 2px solid #4682B4; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px; /* Espace interne */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    width: 16px; /* Largeur de l'ic\303\264ne */\n"
"    height: 16px; /* Hauteur de l'ic\303\264ne */\n"
"    subcontrol-origin: padding; /* Position de l'ic\303\264ne */\n"
"    subcontrol-position: right center; /* Position de l'ic\303\264ne */\n"
"    right: 8px; /* Marge de droite */\n"
"    image: url(:/icons/calendar.png); /* Ic\303\264ne du calendrier */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: none; /* Supprimer l'ic\303\264ne par d\303\251faut */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border-color: #70a0d4; /* Bordure lorsqu'en focus */\n"
"    box-shadow: 0px 0px 5px #70a0d4; /* Ombre lorsqu'en focus */\n"
"}\n"
""));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, dateEdit_debut);

        label_46 = new QLabel(formLayoutWidget_14);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font1);

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_46);

        dateEdit_fin = new QDateEdit(formLayoutWidget_14);
        dateEdit_fin->setObjectName(QStringLiteral("dateEdit_fin"));
        dateEdit_fin->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color: #f9f9f9; /* Couleur de fond */\n"
"    border: 2px solid #4682B4; /* Bordure */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    padding: 8px; /* Espace interne */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    width: 16px; /* Largeur de l'ic\303\264ne */\n"
"    height: 16px; /* Hauteur de l'ic\303\264ne */\n"
"    subcontrol-origin: padding; /* Position de l'ic\303\264ne */\n"
"    subcontrol-position: right center; /* Position de l'ic\303\264ne */\n"
"    right: 8px; /* Marge de droite */\n"
"    image: url(:/icons/calendar.png); /* Ic\303\264ne du calendrier */\n"
"}\n"
"\n"
"QDateEdit::down-arrow {\n"
"    image: none; /* Supprimer l'ic\303\264ne par d\303\251faut */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border-color: #70a0d4; /* Bordure lorsqu'en focus */\n"
"    box-shadow: 0px 0px 5px #70a0d4; /* Ombre lorsqu'en focus */\n"
"}\n"
""));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, dateEdit_fin);

        ok = new QPushButton(tab_2);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setEnabled(true);
        ok->setGeometry(QRect(720, 190, 41, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        ok->setFont(font4);
        ok->setAutoFillBackground(false);
        ok->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton \"Annuler\" */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #ffffff; /* Bordure blanche */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 8px ; /* Espacement int\303\251rieur */\n"
"\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 5px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"  \n"
"    overflow: hidden; /* Cache le contenu d\303\251bordant */\n"
"    transition: background-color 0.3s, color 0.3s; /* Transition des couleurs */\n"
"}\n"
"\n"
"/* Style au survol du bouton \"Annuler\" */\n"
"QPushButton:hover {\n"
"    background-color: #ffffff; /* Fond devient blanc */\n"
"    color: #0EABB8; /* Texte devient bleu clair */\n"
"}\n"
"\n"
"/* Style au clic du bouton \"Annuler\" */\n"
"QPushButton:pressed {\n"
"    background-color: #ffffff; /* Fond devient blanc lors du clic */\n"
"    color: #0EABB8; /* Texte devi"
                        "ent bleu clair lors du clic */\n"
"}\n"
"\n"
"/* Animation pour le pseudo-\303\251l\303\251ment :after */\n"
"QPushButton::after {\n"
"    content: ''; /* Contenu vide */\n"
"    position: absolute; /* Position absolue */\n"
"    width: 100%; /* Largeur \303\240 100% */\n"
"    height: 100%; /* Hauteur \303\240 100% */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* Fond semi-transparent */\n"
"    top: 50%; /* Positionnement au centre vertical */\n"
"    left: 50%; /* Positionnement au centre horizontal */\n"
"    border-radius: 50%; /* Bordure arrondie */\n"
"    transform: translate(-50%, -50%) scale(0); /* R\303\251duit l'\303\251chelle \303\240 0 */\n"
"    transition: transform 0.5s ease; /* Transition de l'\303\251chelle */\n"
"}\n"
"\n"
"/* Animation au survol du bouton \"Annuler\" */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));
        ok->setIcon(icon1);
        ok->setAutoDefault(true);
        mod_combobox = new QComboBox(tab_2);
        mod_combobox->setObjectName(QStringLiteral("mod_combobox"));
        mod_combobox->setGeometry(QRect(510, 190, 201, 31));
        mod_combobox->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));
        label_49 = new QLabel(tab_2);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(470, 180, 31, 51));
        label_49->setFont(font1);
        refresh_ab_2 = new QPushButton(tab_2);
        refresh_ab_2->setObjectName(QStringLiteral("refresh_ab_2"));
        refresh_ab_2->setGeometry(QRect(780, 190, 41, 28));
        refresh_ab_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/refresh-button_61444.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_ab_2->setIcon(icon2);
        refresh_ab_2->setIconSize(QSize(20, 20));
        tabWidget_3->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setMinimumSize(QSize(1366, 768));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 0, 1366, 768));
        label_13->setStyleSheet(QStringLiteral(""));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_13->setScaledContents(true);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(500, 190, 91, 51));
        QFont font5;
        font5.setFamily(QStringLiteral("Bell MT"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        label_14->setFont(font5);
        sup_ab = new QPushButton(tab_3);
        sup_ab->setObjectName(QStringLiteral("sup_ab"));
        sup_ab->setEnabled(true);
        sup_ab->setGeometry(QRect(580, 560, 131, 51));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setWeight(75);
        sup_ab->setFont(font6);
        sup_ab->setAutoFillBackground(false);
        sup_ab->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #ffffff; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #0EABB8; /* Texte blanc */\n"
"    padding: 10px ; /* Espacement int\303\251rieur */\n"
"\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"  \n"
"    overflow: hidden; /* Cache le contenu d\303\251bordant */\n"
"    transition: background-color 0.3s, color 0.3s; /* Transition des couleurs */\n"
"}\n"
"\n"
"/* Style au survol du bouton */\n"
"QPushButton:hover {\n"
"    background-color: #0EABB8; /* Fond devient blanc */\n"
"    color: #ffffff; /* Texte devient bleu clair */\n"
"}\n"
"\n"
"/* Style au clic du bouton */\n"
"QPushButton:pressed {\n"
"    background-color: #0EABB8; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
"}\n"
"\n"
"/* A"
                        "nimation pour le pseudo-\303\251l\303\251ment :after */\n"
"QPushButton::after {\n"
"    content: ''; /* Contenu vide */\n"
"    position: absolute; /* Position absolue */\n"
"    width: 100%; /* Largeur \303\240 100% */\n"
"    height: 100%; /* Hauteur \303\240 100% */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* Fond semi-transparent */\n"
"    top: 50%; /* Positionnement au centre vertical */\n"
"    left: 50%; /* Positionnement au centre horizontal */\n"
"    border-radius: 50%; /* Bordure arrondie */\n"
"    transform: translate(-50%, -50%) scale(0); /* R\303\251duit l'\303\251chelle \303\240 0 */\n"
"    transition: transform 0.5s ease; /* Transition de l'\303\251chelle */\n"
"}\n"
"\n"
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));
        sup_ab->setIcon(icon);
        sup_ab->setAutoDefault(true);
        tableView_7 = new QTableView(tab_3);
        tableView_7->setObjectName(QStringLiteral("tableView_7"));
        tableView_7->setGeometry(QRect(300, 250, 691, 291));
        tableView_7->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    alternate-background-color: #e0e0e0; /* Couleur de fond des lignes alternatives */\n"
"    selection-background-color: #c0c0c0; /* Couleur de fond de la s\303\251lection */\n"
"    selection-color: #ffffff; /* Couleur du texte de la s\303\251lection */\n"
"    border: 1px solid #c0c0c0; /* Bordure */\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px; /* Espacement du contenu */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #a0a0a0; /* Couleur de fond de l'\303\251l\303\251ment s\303\251lectionn\303\251 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #d0d0d0; /* Couleur de fond de l'en-t\303\252te de colonne */\n"
"    padding: 5px; /* Espacement du texte */\n"
"    border: 1px solid #c0c0c0; /* Bordure */\n"
"}\n"
"\n"
"QTableView::indicator {\n"
"    width: 50px; /* Largeur de la case \303\240 cocher/radio */\n"
"    height: 50px; /* Hauteur de la case \303\240 cocher/radio */\n"
"}\n"
""));
        choix_combo_ab = new QComboBox(tab_3);
        choix_combo_ab->setObjectName(QStringLiteral("choix_combo_ab"));
        choix_combo_ab->setGeometry(QRect(600, 200, 121, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        choix_combo_ab->setFont(font7);
        choix_combo_ab->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
"QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espace int\303\251rieur */\n"
"    font-size: 13px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #4682B4; /* Couleur du texte */\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"/* Style des \303\251l\303\251ments d\303\251roulants */\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #4682B4; /* Couleur du texte */\n"
"    background-color: #F0F8FF; /* Couleur de fond */\n"
"}\n"
"\n"
"/* Style des \303\251l\303\251ments d\303\251roulants au survol */\n"
"QComboBox QAbstractItemView:hover {\n"
"    background-color: #87CEEB; /* Couleur d"
                        "e fond bleue au survol */\n"
"}\n"
""));
        recherche_ab_bouton_2 = new QPushButton(tab_3);
        recherche_ab_bouton_2->setObjectName(QStringLiteral("recherche_ab_bouton_2"));
        recherche_ab_bouton_2->setGeometry(QRect(750, 200, 41, 31));
        recherche_ab_bouton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/search-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        recherche_ab_bouton_2->setIcon(icon3);
        recherche_ab_bouton_2->setIconSize(QSize(25, 25));
        refresh_ab = new QPushButton(tab_3);
        refresh_ab->setObjectName(QStringLiteral("refresh_ab"));
        refresh_ab->setGeometry(QRect(950, 200, 41, 41));
        refresh_ab->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        refresh_ab->setIcon(icon2);
        refresh_ab->setIconSize(QSize(20, 20));
        pdf_ab = new QPushButton(tab_3);
        pdf_ab->setObjectName(QStringLiteral("pdf_ab"));
        pdf_ab->setGeometry(QRect(1030, 330, 41, 51));
        pdf_ab->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QPushButton */\n"
"QPushButton {\n"
"    border: none; /* Pas de bordure */\n"
"    border-radius: 15px; /* Coins arrondis */\n"
"    padding: 10px; /* Espace int\303\251rieur */\n"
"    font-size: 16px; /* Taille de la police */\n"
"    font-family: \"Arial\", sans-serif; /* Police de caract\303\250re */\n"
"    color: #FFFFFF; /* Couleur du texte */\n"
"    background-color: rgba(255, 0, 0, 0.7); /* Couleur de fond rouge transparente */\n"
"    transition: background-color 0.5s, opacity 0.5s; /* Transition pour la couleur de fond et l'opacit\303\251 */\n"
"}\n"
"\n"
"/* Style de l'ic\303\264ne */\n"
"QPushButton::icon {\n"
"    width: 50px; /* Largeur de l'ic\303\264ne */\n"
"    height: 50px; /* Hauteur de l'ic\303\264ne */\n"
"    margin-right: 10px; /* Marge \303\240 droite de l'ic\303\264ne */\n"
"    border: 2px solid red; /* Bordure rouge autour de l'ic\303\264ne */\n"
"}\n"
"\n"
"/* Style lorsque le bouton est survol\303\251 */\n"
"QPushButton:hover {\n"
"    backgrou"
                        "nd-color: rgba(255, 0, 0, 0.9); /* Couleur de fond rouge transparente plus fonc\303\251e au survol */\n"
"}\n"
"\n"
"/* Style lorsque le bouton est enfonc\303\251 */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 0, 0, 1); /* Couleur de fond rouge transparente pleine lorsqu'enfonc\303\251 */\n"
"    opacity: 1; /* R\303\251duire l\303\251g\303\250rement l'opacit\303\251 lors de l'enfoncement */\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdf_ab->setIcon(icon4);
        pdf_ab->setIconSize(QSize(50, 50));
        stat_abonnement_2 = new QPushButton(tab_3);
        stat_abonnement_2->setObjectName(QStringLiteral("stat_abonnement_2"));
        stat_abonnement_2->setGeometry(QRect(1030, 410, 41, 41));
        stat_abonnement_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/stat.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stat_abonnement_2->setIcon(icon5);
        stat_abonnement_2->setIconSize(QSize(40, 40));
        tabWidget_3->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(260, 370, 63, 20));
        label_21 = new QLabel(tab_7);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 0, 1361, 711));
        label_21->setStyleSheet(QStringLiteral("border-image: url(:/background_3.png);"));
        textEdit = new QTextEdit(tab_7);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(420, 180, 104, 31));
        textEdit_2 = new QTextEdit(tab_7);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(660, 180, 104, 31));
        textEdit_3 = new QTextEdit(tab_7);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(890, 180, 104, 31));
        widget_2 = new QListView(tab_7);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(380, 260, 191, 192));
        widget_3 = new QListView(tab_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(620, 260, 191, 192));
        widget_4 = new QListView(tab_7);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(850, 260, 181, 192));
        lineEdit_ab = new QLineEdit(tab_7);
        lineEdit_ab->setObjectName(QStringLiteral("lineEdit_ab"));
        lineEdit_ab->setGeometry(QRect(400, 470, 113, 26));
        lineEdit_ab1 = new QLineEdit(tab_7);
        lineEdit_ab1->setObjectName(QStringLiteral("lineEdit_ab1"));
        lineEdit_ab1->setGeometry(QRect(640, 470, 113, 26));
        lineEdit_ab2 = new QLineEdit(tab_7);
        lineEdit_ab2->setObjectName(QStringLiteral("lineEdit_ab2"));
        lineEdit_ab2->setGeometry(QRect(880, 470, 113, 26));
        pushButton = new QPushButton(tab_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 470, 31, 29));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(760, 470, 31, 29));
        pushButton_6 = new QPushButton(tab_7);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(1000, 470, 31, 29));
        pushButton_ab_8 = new QPushButton(tab_7);
        pushButton_ab_8->setObjectName(QStringLiteral("pushButton_ab_8"));
        pushButton_ab_8->setGeometry(QRect(530, 180, 31, 29));
        pushButton_10 = new QPushButton(tab_7);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(770, 180, 31, 29));
        pushButton_11 = new QPushButton(tab_7);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(850, 180, 31, 29));
        pushButton_9 = new QPushButton(tab_7);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(620, 180, 31, 29));
        tabWidget_3->addTab(tab_7, QString());
        stackedWidget->addWidget(index5);
        tabWidget_3->raise();
        Retour_6->raise();
        MainWindow_ab->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_ab);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 26));
        MainWindow_ab->setMenuBar(menubar);

        retranslateUi(MainWindow_ab);

        stackedWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow_ab);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_ab)
    {
        MainWindow_ab->setWindowTitle(QApplication::translate("MainWindow_ab", "MainWindow", Q_NULLPTR));
        Retour_6->setText(QApplication::translate("MainWindow_ab", "Retour", Q_NULLPTR));
        label_3->setText(QString());
        label_34->setText(QApplication::translate("MainWindow_ab", "ID", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow_ab", "PRIX", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow_ab", "TYPE", Q_NULLPTR));
        type_ab->clear();
        type_ab->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_ab", "MENSUEL", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "SAISONIER", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "ANNUEL", Q_NULLPTR)
        );
        label_36->setText(QApplication::translate("MainWindow_ab", "ACCES ", Q_NULLPTR));
        acces_ab->clear();
        acces_ab->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_ab", "KAYAK", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "SURFF", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "PLONGEE SOUS MARINE", Q_NULLPTR)
        );
        label_38->setText(QApplication::translate("MainWindow_ab", "ID MEMBRE", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow_ab", "DATE DEBUT", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow_ab", "DATE FIN", Q_NULLPTR));
        soumetre_ab->setText(QApplication::translate("MainWindow_ab", "Ajouter", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab), QApplication::translate("MainWindow_ab", "Ajouter", Q_NULLPTR));
        label_10->setText(QString());
        modifier_ab->setText(QApplication::translate("MainWindow_ab", "Modifier", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow_ab", "PRIX", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow_ab", "TYPE", Q_NULLPTR));
        type_ab_2->clear();
        type_ab_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_ab", "MENSUEL", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "SAISONIER", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "ANNUEL", Q_NULLPTR)
        );
        label_47->setText(QApplication::translate("MainWindow_ab", "ACCES ", Q_NULLPTR));
        acces_ab_2->clear();
        acces_ab_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_ab", "KAYAK", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "SURFF", Q_NULLPTR)
         << QApplication::translate("MainWindow_ab", "PLONGEE SOUS MARINE", Q_NULLPTR)
        );
        label_48->setText(QApplication::translate("MainWindow_ab", "DATE FIN", Q_NULLPTR));
        label_46->setText(QApplication::translate("MainWindow_ab", "DATE DEBUT", Q_NULLPTR));
        ok->setText(QApplication::translate("MainWindow_ab", "OK ", Q_NULLPTR));
        label_49->setText(QApplication::translate("MainWindow_ab", "ID", Q_NULLPTR));
        refresh_ab_2->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QApplication::translate("MainWindow_ab", "Modifier", Q_NULLPTR));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("MainWindow_ab", "Chercher", Q_NULLPTR));
        sup_ab->setText(QApplication::translate("MainWindow_ab", "  Supprimer  ", Q_NULLPTR));
        recherche_ab_bouton_2->setText(QString());
        refresh_ab->setText(QString());
        pdf_ab->setText(QString());
        stat_abonnement_2->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("MainWindow_ab", "Afficher", Q_NULLPTR));
        label_15->setText(QString());
        label_21->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow_ab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">a faire</span></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MainWindow_ab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">en cours</span></p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MainWindow_ab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">termine</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow_ab", "+", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow_ab", "+", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow_ab", "+", Q_NULLPTR));
        pushButton_ab_8->setText(QApplication::translate("MainWindow_ab", "->", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow_ab", "->", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow_ab", "<-", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow_ab", "<-", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow_ab", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_ab: public Ui_MainWindow_ab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_AB_H
