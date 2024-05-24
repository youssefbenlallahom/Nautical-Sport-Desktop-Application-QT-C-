/********************************************************************************
** Form generated from reading UI file 'mainwindowem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWEM_H
#define UI_MAINWINDOWEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindowem
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *index7;
    QTabWidget *tabWidget_5;
    QWidget *tab_8;
    QLabel *label_18;
    QWidget *formLayoutWidget_10;
    QFormLayout *formLayout_12;
    QLabel *cINLabel_15;
    QLineEdit *nomLineEdit_8;
    QLabel *nomLabel_11;
    QLineEdit *nomLineEdit_7;
    QLabel *prenomLabel_6;
    QLineEdit *prenomLineEdit_2;
    QLabel *sexeLabel_6;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QLabel *dateDeNaissanceLabel_11;
    QDateEdit *dateDeNaissanceDateEdit_7;
    QLabel *posteLabel_6;
    QLineEdit *prenomLineEdit_3;
    QLabel *cINLabel_17;
    QLineEdit *nomLineEdit_9;
    QLabel *cINLabel_18;
    QLineEdit *nomLineEdit_10;
    QPushButton *Retour_7;
    QLabel *zone_image_modifier_2;
    QWidget *tab_9;
    QLabel *label_20;
    QWidget *formLayoutWidget_11;
    QFormLayout *formLayout_13;
    QLabel *cINLabel_19;
    QLineEdit *nomLineEdit_12;
    QLabel *nomLabel_12;
    QLineEdit *nomLineEdit_11;
    QLabel *prenomLabel_7;
    QLineEdit *prenomLineEdit_8;
    QLabel *sexeLabel_7;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QLabel *dateDeNaissanceLabel_12;
    QDateEdit *dateDeNaissanceDateEdit_8;
    QLabel *posteLabel_7;
    QLineEdit *prenomLineEdit_5;
    QLabel *cINLabel_20;
    QLineEdit *nomLineEdit_13;
    QPushButton *modifier;
    QPushButton *Bmodifier_3;
    QLabel *zone_image_modifier_3;
    QLabel *cINLabel_21;
    QLineEdit *nomLineEdit_14;
    QComboBox *comboBox_mod_2;
    QLabel *cINLabel_24;
    QWidget *tab_10;
    QLabel *label_22;
    QTableView *tableView_5;
    QLineEdit *lineEdit_4;
    QPushButton *supprimer;
    QPushButton *recherche;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_nr;
    QLineEdit *lineEdit_pr;
    QLineEdit *lineEdit_cinr;
    QPushButton *refresh_dach;
    QPushButton *pdf_mem;
    QPushButton *stat_mem;
    QPushButton *Retour_6;
    QMenuBar *menubar;

    void setupUi(QMainWindow *mainwindowem)
    {
        if (mainwindowem->objectName().isEmpty())
            mainwindowem->setObjectName(QStringLiteral("mainwindowem"));
        mainwindowem->setEnabled(true);
        mainwindowem->resize(1366, 768);
        mainwindowem->setMaximumSize(QSize(2500, 2500));
        mainwindowem->setAutoFillBackground(true);
        centralwidget = new QWidget(mainwindowem);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setEnabled(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 1366, 768));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setEnabled(false);
        stackedWidget->addWidget(page);
        index7 = new QWidget();
        index7->setObjectName(QStringLiteral("index7"));
        tabWidget_5 = new QTabWidget(index7);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 40, 1366, 768));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_18 = new QLabel(tab_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 0, 1366, 781));
        label_18->setMinimumSize(QSize(1366, 768));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_18->setScaledContents(true);
        formLayoutWidget_10 = new QWidget(tab_8);
        formLayoutWidget_10->setObjectName(QStringLiteral("formLayoutWidget_10"));
        formLayoutWidget_10->setGeometry(QRect(390, 200, 381, 451));
        formLayout_12 = new QFormLayout(formLayoutWidget_10);
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        formLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_12->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_12->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_12->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_12->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_12->setHorizontalSpacing(20);
        formLayout_12->setVerticalSpacing(29);
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        cINLabel_15 = new QLabel(formLayoutWidget_10);
        cINLabel_15->setObjectName(QStringLiteral("cINLabel_15"));
        QFont font;
        font.setFamily(QStringLiteral("Bell MT"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cINLabel_15->setFont(font);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, cINLabel_15);

        nomLineEdit_8 = new QLineEdit(formLayoutWidget_10);
        nomLineEdit_8->setObjectName(QStringLiteral("nomLineEdit_8"));
        nomLineEdit_8->setEnabled(true);
        nomLineEdit_8->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(0, QFormLayout::FieldRole, nomLineEdit_8);

        nomLabel_11 = new QLabel(formLayoutWidget_10);
        nomLabel_11->setObjectName(QStringLiteral("nomLabel_11"));
        nomLabel_11->setFont(font);

        formLayout_12->setWidget(1, QFormLayout::LabelRole, nomLabel_11);

        nomLineEdit_7 = new QLineEdit(formLayoutWidget_10);
        nomLineEdit_7->setObjectName(QStringLiteral("nomLineEdit_7"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        nomLineEdit_7->setFont(font1);
        nomLineEdit_7->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(1, QFormLayout::FieldRole, nomLineEdit_7);

        prenomLabel_6 = new QLabel(formLayoutWidget_10);
        prenomLabel_6->setObjectName(QStringLiteral("prenomLabel_6"));
        prenomLabel_6->setFont(font);

        formLayout_12->setWidget(2, QFormLayout::LabelRole, prenomLabel_6);

        prenomLineEdit_2 = new QLineEdit(formLayoutWidget_10);
        prenomLineEdit_2->setObjectName(QStringLiteral("prenomLineEdit_2"));
        prenomLineEdit_2->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(2, QFormLayout::FieldRole, prenomLineEdit_2);

        sexeLabel_6 = new QLabel(formLayoutWidget_10);
        sexeLabel_6->setObjectName(QStringLiteral("sexeLabel_6"));
        sexeLabel_6->setFont(font);

        formLayout_12->setWidget(3, QFormLayout::LabelRole, sexeLabel_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_13 = new QRadioButton(formLayoutWidget_10);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        QFont font2;
        font2.setPointSize(8);
        radioButton_13->setFont(font2);

        horizontalLayout_10->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(formLayoutWidget_10);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setFont(font2);
        radioButton_14->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
"QCheckBox {\n"
"    spacing: 5px; /* Espacement entre la case \303\240 cocher et le texte */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px; /* Largeur de la case \303\240 cocher */\n"
"    height: 20px; /* Hauteur de la case \303\240 cocher */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(unchecked.png); /* Image pour la case non coch\303\251e */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(checked.png); /* Image pour la case coch\303\251e */\n"
"}"));

        horizontalLayout_10->addWidget(radioButton_14);


        formLayout_12->setLayout(3, QFormLayout::FieldRole, horizontalLayout_10);

        dateDeNaissanceLabel_11 = new QLabel(formLayoutWidget_10);
        dateDeNaissanceLabel_11->setObjectName(QStringLiteral("dateDeNaissanceLabel_11"));
        dateDeNaissanceLabel_11->setFont(font);

        formLayout_12->setWidget(4, QFormLayout::LabelRole, dateDeNaissanceLabel_11);

        dateDeNaissanceDateEdit_7 = new QDateEdit(formLayoutWidget_10);
        dateDeNaissanceDateEdit_7->setObjectName(QStringLiteral("dateDeNaissanceDateEdit_7"));
        QFont font3;
        font3.setPointSize(10);
        dateDeNaissanceDateEdit_7->setFont(font3);
        dateDeNaissanceDateEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                border: 2px solid #3498db; /* Bordure bleue */\n"
"                border-radius: 5px;\n"
"                padding: 8px;\n"
"                font-size: 14px;\n"
"                color: #333333; /* Couleur du texte */\n"
"            }\n"
"\n"
"            QLineEdit:focus {\n"
"                border-color: #2980b9; /* Bordure bleue fonc\303\251e lorsqu'en focus */\n"
"            }"));

        formLayout_12->setWidget(4, QFormLayout::FieldRole, dateDeNaissanceDateEdit_7);

        posteLabel_6 = new QLabel(formLayoutWidget_10);
        posteLabel_6->setObjectName(QStringLiteral("posteLabel_6"));
        posteLabel_6->setFont(font);

        formLayout_12->setWidget(5, QFormLayout::LabelRole, posteLabel_6);

        prenomLineEdit_3 = new QLineEdit(formLayoutWidget_10);
        prenomLineEdit_3->setObjectName(QStringLiteral("prenomLineEdit_3"));
        prenomLineEdit_3->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(5, QFormLayout::FieldRole, prenomLineEdit_3);

        cINLabel_17 = new QLabel(formLayoutWidget_10);
        cINLabel_17->setObjectName(QStringLiteral("cINLabel_17"));
        cINLabel_17->setFont(font);

        formLayout_12->setWidget(6, QFormLayout::LabelRole, cINLabel_17);

        nomLineEdit_9 = new QLineEdit(formLayoutWidget_10);
        nomLineEdit_9->setObjectName(QStringLiteral("nomLineEdit_9"));
        nomLineEdit_9->setEnabled(true);
        nomLineEdit_9->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(6, QFormLayout::FieldRole, nomLineEdit_9);

        cINLabel_18 = new QLabel(formLayoutWidget_10);
        cINLabel_18->setObjectName(QStringLiteral("cINLabel_18"));
        cINLabel_18->setFont(font);

        formLayout_12->setWidget(7, QFormLayout::LabelRole, cINLabel_18);

        nomLineEdit_10 = new QLineEdit(formLayoutWidget_10);
        nomLineEdit_10->setObjectName(QStringLiteral("nomLineEdit_10"));
        nomLineEdit_10->setEnabled(true);
        nomLineEdit_10->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(7, QFormLayout::FieldRole, nomLineEdit_10);

        Retour_7 = new QPushButton(tab_8);
        Retour_7->setObjectName(QStringLiteral("Retour_7"));
        Retour_7->setEnabled(true);
        Retour_7->setGeometry(QRect(840, 590, 131, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        Retour_7->setFont(font4);
        Retour_7->setAutoFillBackground(false);
        Retour_7->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        icon.addFile(QStringLiteral("../../../Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        Retour_7->setIcon(icon);
        Retour_7->setAutoDefault(true);
        zone_image_modifier_2 = new QLabel(tab_8);
        zone_image_modifier_2->setObjectName(QStringLiteral("zone_image_modifier_2"));
        zone_image_modifier_2->setGeometry(QRect(830, 300, 211, 201));
        zone_image_modifier_2->setPixmap(QPixmap(QString::fromUtf8(":/pngwing.com.png")));
        zone_image_modifier_2->setScaledContents(true);
        tabWidget_5->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_20 = new QLabel(tab_9);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 0, 1366, 781));
        label_20->setMinimumSize(QSize(1366, 768));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_20->setScaledContents(true);
        formLayoutWidget_11 = new QWidget(tab_9);
        formLayoutWidget_11->setObjectName(QStringLiteral("formLayoutWidget_11"));
        formLayoutWidget_11->setGeometry(QRect(390, 260, 411, 391));
        formLayout_13 = new QFormLayout(formLayoutWidget_11);
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        formLayout_13->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_13->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_13->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_13->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_13->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_13->setHorizontalSpacing(20);
        formLayout_13->setVerticalSpacing(29);
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        cINLabel_19 = new QLabel(formLayoutWidget_11);
        cINLabel_19->setObjectName(QStringLiteral("cINLabel_19"));
        cINLabel_19->setFont(font);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, cINLabel_19);

        nomLineEdit_12 = new QLineEdit(formLayoutWidget_11);
        nomLineEdit_12->setObjectName(QStringLiteral("nomLineEdit_12"));
        nomLineEdit_12->setEnabled(false);
        nomLineEdit_12->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(0, QFormLayout::FieldRole, nomLineEdit_12);

        nomLabel_12 = new QLabel(formLayoutWidget_11);
        nomLabel_12->setObjectName(QStringLiteral("nomLabel_12"));
        nomLabel_12->setFont(font);

        formLayout_13->setWidget(1, QFormLayout::LabelRole, nomLabel_12);

        nomLineEdit_11 = new QLineEdit(formLayoutWidget_11);
        nomLineEdit_11->setObjectName(QStringLiteral("nomLineEdit_11"));
        nomLineEdit_11->setFont(font1);
        nomLineEdit_11->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(1, QFormLayout::FieldRole, nomLineEdit_11);

        prenomLabel_7 = new QLabel(formLayoutWidget_11);
        prenomLabel_7->setObjectName(QStringLiteral("prenomLabel_7"));
        prenomLabel_7->setFont(font);

        formLayout_13->setWidget(2, QFormLayout::LabelRole, prenomLabel_7);

        prenomLineEdit_8 = new QLineEdit(formLayoutWidget_11);
        prenomLineEdit_8->setObjectName(QStringLiteral("prenomLineEdit_8"));
        prenomLineEdit_8->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(2, QFormLayout::FieldRole, prenomLineEdit_8);

        sexeLabel_7 = new QLabel(formLayoutWidget_11);
        sexeLabel_7->setObjectName(QStringLiteral("sexeLabel_7"));
        sexeLabel_7->setFont(font);

        formLayout_13->setWidget(3, QFormLayout::LabelRole, sexeLabel_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        radioButton_15 = new QRadioButton(formLayoutWidget_11);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setFont(font2);

        horizontalLayout_11->addWidget(radioButton_15);

        radioButton_16 = new QRadioButton(formLayoutWidget_11);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));
        radioButton_16->setFont(font2);
        radioButton_16->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
"QCheckBox {\n"
"    spacing: 5px; /* Espacement entre la case \303\240 cocher et le texte */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px; /* Largeur de la case \303\240 cocher */\n"
"    height: 20px; /* Hauteur de la case \303\240 cocher */\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(unchecked.png); /* Image pour la case non coch\303\251e */\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(checked.png); /* Image pour la case coch\303\251e */\n"
"}"));

        horizontalLayout_11->addWidget(radioButton_16);


        formLayout_13->setLayout(3, QFormLayout::FieldRole, horizontalLayout_11);

        dateDeNaissanceLabel_12 = new QLabel(formLayoutWidget_11);
        dateDeNaissanceLabel_12->setObjectName(QStringLiteral("dateDeNaissanceLabel_12"));
        dateDeNaissanceLabel_12->setFont(font);

        formLayout_13->setWidget(4, QFormLayout::LabelRole, dateDeNaissanceLabel_12);

        dateDeNaissanceDateEdit_8 = new QDateEdit(formLayoutWidget_11);
        dateDeNaissanceDateEdit_8->setObjectName(QStringLiteral("dateDeNaissanceDateEdit_8"));
        dateDeNaissanceDateEdit_8->setFont(font3);
        dateDeNaissanceDateEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                border: 2px solid #3498db; /* Bordure bleue */\n"
"                border-radius: 5px;\n"
"                padding: 8px;\n"
"                font-size: 14px;\n"
"                color: #333333; /* Couleur du texte */\n"
"            }\n"
"\n"
"            QLineEdit:focus {\n"
"                border-color: #2980b9; /* Bordure bleue fonc\303\251e lorsqu'en focus */\n"
"            }"));

        formLayout_13->setWidget(4, QFormLayout::FieldRole, dateDeNaissanceDateEdit_8);

        posteLabel_7 = new QLabel(formLayoutWidget_11);
        posteLabel_7->setObjectName(QStringLiteral("posteLabel_7"));
        posteLabel_7->setFont(font);

        formLayout_13->setWidget(5, QFormLayout::LabelRole, posteLabel_7);

        prenomLineEdit_5 = new QLineEdit(formLayoutWidget_11);
        prenomLineEdit_5->setObjectName(QStringLiteral("prenomLineEdit_5"));
        prenomLineEdit_5->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(5, QFormLayout::FieldRole, prenomLineEdit_5);

        cINLabel_20 = new QLabel(formLayoutWidget_11);
        cINLabel_20->setObjectName(QStringLiteral("cINLabel_20"));
        cINLabel_20->setFont(font);

        formLayout_13->setWidget(6, QFormLayout::LabelRole, cINLabel_20);

        nomLineEdit_13 = new QLineEdit(formLayoutWidget_11);
        nomLineEdit_13->setObjectName(QStringLiteral("nomLineEdit_13"));
        nomLineEdit_13->setEnabled(true);
        nomLineEdit_13->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(6, QFormLayout::FieldRole, nomLineEdit_13);

        modifier = new QPushButton(tab_9);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setEnabled(true);
        modifier->setGeometry(QRect(870, 530, 131, 41));
        modifier->setFont(font4);
        modifier->setAutoFillBackground(false);
        modifier->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        modifier->setIcon(icon);
        modifier->setAutoDefault(true);
        Bmodifier_3 = new QPushButton(tab_9);
        Bmodifier_3->setObjectName(QStringLiteral("Bmodifier_3"));
        Bmodifier_3->setEnabled(true);
        Bmodifier_3->setGeometry(QRect(630, 200, 121, 41));
        Bmodifier_3->setFont(font4);
        Bmodifier_3->setAutoFillBackground(false);
        Bmodifier_3->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Bmodifier_3->setIcon(icon);
        Bmodifier_3->setAutoDefault(true);
        zone_image_modifier_3 = new QLabel(tab_9);
        zone_image_modifier_3->setObjectName(QStringLiteral("zone_image_modifier_3"));
        zone_image_modifier_3->setGeometry(QRect(830, 300, 211, 201));
        zone_image_modifier_3->setPixmap(QPixmap(QString::fromUtf8(":/pngwing.com.png")));
        zone_image_modifier_3->setScaledContents(true);
        cINLabel_21 = new QLabel(tab_9);
        cINLabel_21->setObjectName(QStringLiteral("cINLabel_21"));
        cINLabel_21->setGeometry(QRect(800, 210, 133, 32));
        cINLabel_21->setFont(font);
        nomLineEdit_14 = new QLineEdit(tab_9);
        nomLineEdit_14->setObjectName(QStringLiteral("nomLineEdit_14"));
        nomLineEdit_14->setEnabled(true);
        nomLineEdit_14->setGeometry(QRect(960, 210, 137, 32));
        nomLineEdit_14->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        comboBox_mod_2 = new QComboBox(tab_9);
        comboBox_mod_2->setObjectName(QStringLiteral("comboBox_mod_2"));
        comboBox_mod_2->setGeometry(QRect(492, 200, 131, 41));
        comboBox_mod_2->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
"QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure bleue */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
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
        cINLabel_24 = new QLabel(tab_9);
        cINLabel_24->setObjectName(QStringLiteral("cINLabel_24"));
        cINLabel_24->setGeometry(QRect(390, 200, 51, 51));
        cINLabel_24->setFont(font);
        tabWidget_5->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_22 = new QLabel(tab_10);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(0, 0, 1366, 768));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_22->setScaledContents(true);
        tableView_5 = new QTableView(tab_10);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(360, 230, 631, 161));
        lineEdit_4 = new QLineEdit(tab_10);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(780, 510, 151, 32));
        lineEdit_4->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        supprimer = new QPushButton(tab_10);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setEnabled(true);
        supprimer->setGeometry(QRect(780, 460, 151, 41));
        supprimer->setFont(font4);
        supprimer->setAutoFillBackground(false);
        supprimer->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        supprimer->setIcon(icon);
        supprimer->setAutoDefault(true);
        recherche = new QPushButton(tab_10);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setEnabled(true);
        recherche->setGeometry(QRect(380, 430, 151, 41));
        recherche->setFont(font4);
        recherche->setAutoFillBackground(false);
        recherche->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        recherche->setIcon(icon);
        recherche->setAutoDefault(true);
        label_2 = new QLabel(tab_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 500, 56, 16));
        label_7 = new QLabel(tab_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 540, 56, 16));
        label_8 = new QLabel(tab_10);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 580, 56, 16));
        lineEdit_nr = new QLineEdit(tab_10);
        lineEdit_nr->setObjectName(QStringLiteral("lineEdit_nr"));
        lineEdit_nr->setGeometry(QRect(430, 490, 121, 32));
        lineEdit_nr->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        lineEdit_pr = new QLineEdit(tab_10);
        lineEdit_pr->setObjectName(QStringLiteral("lineEdit_pr"));
        lineEdit_pr->setGeometry(QRect(430, 530, 121, 32));
        lineEdit_pr->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        lineEdit_cinr = new QLineEdit(tab_10);
        lineEdit_cinr->setObjectName(QStringLiteral("lineEdit_cinr"));
        lineEdit_cinr->setGeometry(QRect(430, 570, 121, 32));
        lineEdit_cinr->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        refresh_dach = new QPushButton(tab_10);
        refresh_dach->setObjectName(QStringLiteral("refresh_dach"));
        refresh_dach->setGeometry(QRect(950, 190, 41, 28));
        refresh_dach->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/refresh-button_61444.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_dach->setIcon(icon1);
        refresh_dach->setIconSize(QSize(20, 20));
        pdf_mem = new QPushButton(tab_10);
        pdf_mem->setObjectName(QStringLiteral("pdf_mem"));
        pdf_mem->setGeometry(QRect(890, 580, 51, 61));
        pdf_mem->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QPushButton */\n"
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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdf_mem->setIcon(icon2);
        pdf_mem->setIconSize(QSize(50, 50));
        stat_mem = new QPushButton(tab_10);
        stat_mem->setObjectName(QStringLiteral("stat_mem"));
        stat_mem->setEnabled(true);
        stat_mem->setGeometry(QRect(700, 590, 181, 41));
        stat_mem->setFont(font4);
        stat_mem->setAutoFillBackground(false);
        stat_mem->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        QIcon icon3;
        icon3.addFile(QStringLiteral("image/stat.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stat_mem->setIcon(icon3);
        stat_mem->setAutoDefault(true);
        tabWidget_5->addTab(tab_10, QString());
        stackedWidget->addWidget(index7);
        Retour_6 = new QPushButton(centralwidget);
        Retour_6->setObjectName(QStringLiteral("Retour_6"));
        Retour_6->setEnabled(true);
        Retour_6->setGeometry(QRect(30, 60, 111, 41));
        Retour_6->setFont(font4);
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
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        Retour_6->setIcon(icon4);
        Retour_6->setAutoDefault(true);
        mainwindowem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindowem);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 26));
        mainwindowem->setMenuBar(menubar);

        retranslateUi(mainwindowem);

        stackedWidget->setCurrentIndex(1);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainwindowem);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindowem)
    {
        mainwindowem->setWindowTitle(QApplication::translate("mainwindowem", "MainWindow", Q_NULLPTR));
        label_18->setText(QString());
        cINLabel_15->setText(QApplication::translate("mainwindowem", "Cin", Q_NULLPTR));
        nomLabel_11->setText(QApplication::translate("mainwindowem", "Nom", Q_NULLPTR));
        prenomLabel_6->setText(QApplication::translate("mainwindowem", "Prenom", Q_NULLPTR));
        sexeLabel_6->setText(QApplication::translate("mainwindowem", "Sexe", Q_NULLPTR));
        radioButton_13->setText(QApplication::translate("mainwindowem", "Male", Q_NULLPTR));
        radioButton_14->setText(QApplication::translate("mainwindowem", "Femelle", Q_NULLPTR));
        dateDeNaissanceLabel_11->setText(QApplication::translate("mainwindowem", "Date de naissance ", Q_NULLPTR));
        posteLabel_6->setText(QApplication::translate("mainwindowem", "Num\303\251ro telephonique", Q_NULLPTR));
        cINLabel_17->setText(QApplication::translate("mainwindowem", "E-mail", Q_NULLPTR));
        cINLabel_18->setText(QApplication::translate("mainwindowem", "Mot de passe", Q_NULLPTR));
        Retour_7->setText(QApplication::translate("mainwindowem", "Ajouter", Q_NULLPTR));
        zone_image_modifier_2->setText(QString());
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_8), QApplication::translate("mainwindowem", "Add", Q_NULLPTR));
        label_20->setText(QString());
        cINLabel_19->setText(QApplication::translate("mainwindowem", "Cin", Q_NULLPTR));
        nomLabel_12->setText(QApplication::translate("mainwindowem", "Nom", Q_NULLPTR));
        prenomLabel_7->setText(QApplication::translate("mainwindowem", "Prenom", Q_NULLPTR));
        sexeLabel_7->setText(QApplication::translate("mainwindowem", "Sexe", Q_NULLPTR));
        radioButton_15->setText(QApplication::translate("mainwindowem", "Male", Q_NULLPTR));
        radioButton_16->setText(QApplication::translate("mainwindowem", "Femelle", Q_NULLPTR));
        dateDeNaissanceLabel_12->setText(QApplication::translate("mainwindowem", "Date de naissance ", Q_NULLPTR));
        posteLabel_7->setText(QApplication::translate("mainwindowem", "Num\303\251ro telephonique", Q_NULLPTR));
        cINLabel_20->setText(QApplication::translate("mainwindowem", "E-mail", Q_NULLPTR));
        modifier->setText(QApplication::translate("mainwindowem", "Modifier", Q_NULLPTR));
        Bmodifier_3->setText(QApplication::translate("mainwindowem", "OK", Q_NULLPTR));
        zone_image_modifier_3->setText(QString());
        cINLabel_21->setText(QApplication::translate("mainwindowem", "Mot de passe", Q_NULLPTR));
        cINLabel_24->setText(QApplication::translate("mainwindowem", "ID", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_9), QApplication::translate("mainwindowem", "Modifer", Q_NULLPTR));
        label_22->setText(QString());
        supprimer->setText(QApplication::translate("mainwindowem", "Supprimer", Q_NULLPTR));
        recherche->setText(QApplication::translate("mainwindowem", "Confirmer", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainwindowem", "NOM", Q_NULLPTR));
        label_7->setText(QApplication::translate("mainwindowem", "PRENOM", Q_NULLPTR));
        label_8->setText(QApplication::translate("mainwindowem", "CIN", Q_NULLPTR));
        refresh_dach->setText(QString());
        pdf_mem->setText(QString());
        stat_mem->setText(QApplication::translate("mainwindowem", "STATISTIQUE", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_10), QApplication::translate("mainwindowem", "Afficher", Q_NULLPTR));
        Retour_6->setText(QApplication::translate("mainwindowem", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainwindowem: public Ui_mainwindowem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWEM_H
