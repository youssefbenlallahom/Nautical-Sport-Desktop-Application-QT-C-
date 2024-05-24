/********************************************************************************
** Form generated from reading UI file 'mainwindow_formation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_FORMATION_H
#define UI_MAINWINDOW_FORMATION_H

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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_formation
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_10;
    QLabel *cINLabel_9;
    QLineEdit *id;
    QLabel *nomLabel_9;
    QComboBox *specialite;
    QLabel *prenomLabel_4;
    QComboBox *lieu;
    QLabel *sexeLabel_4;
    QDateEdit *dated_f;
    QLabel *dateDeNaissanceLabel_9;
    QDateEdit *datef_f;
    QLabel *posteLabel_4;
    QComboBox *niveau;
    QLabel *salaireLabel_9;
    QLineEdit *prix;
    QPushButton *add_form;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QPushButton *supprimer_form;
    QPushButton *historique_formation;
    QPushButton *stat_formation;
    QPushButton *PDF;
    QTableView *tabView_formation;
    QComboBox *tri_form;
    QComboBox *itemToSearch;
    QLineEdit *recherche_formation;
    QPushButton *chercher_formation;
    QLabel *background_17;
    QLabel *label_4;
    QWidget *tab_4;
    QLabel *background_16;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_11;
    QLabel *nomLabel_10;
    QComboBox *specialite_form_2;
    QLabel *prenomLabel_5;
    QComboBox *lieu_form_2;
    QLabel *sexeLabel_5;
    QDateEdit *dated_f_form_2;
    QLabel *dateDeNaissanceLabel_10;
    QDateEdit *datef_f_form_2;
    QLabel *posteLabel_5;
    QComboBox *niveau_form_2;
    QLabel *salaireLabel_10;
    QLineEdit *prix_form_2;
    QComboBox *id_form_2;
    QLabel *nomLabel_11;
    QPushButton *modifier_form;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_formation)
    {
        if (MainWindow_formation->objectName().isEmpty())
            MainWindow_formation->setObjectName(QStringLiteral("MainWindow_formation"));
        MainWindow_formation->resize(1366, 819);
        MainWindow_formation->setMinimumSize(QSize(0, 0));
        MainWindow_formation->setMaximumSize(QSize(1366, 819));
        centralwidget = new QWidget(MainWindow_formation);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(1366, 768));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(1366, 768));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMinimumSize(QSize(1366, 768));
        formLayoutWidget_5 = new QWidget(tab);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(400, 180, 551, 481));
        formLayout_10 = new QFormLayout(formLayoutWidget_5);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        formLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_10->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_10->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_10->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_10->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_10->setHorizontalSpacing(20);
        formLayout_10->setVerticalSpacing(40);
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        cINLabel_9 = new QLabel(formLayoutWidget_5);
        cINLabel_9->setObjectName(QStringLiteral("cINLabel_9"));
        QFont font;
        font.setFamily(QStringLiteral("Bell MT"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cINLabel_9->setFont(font);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, cINLabel_9);

        id = new QLineEdit(formLayoutWidget_5);
        id->setObjectName(QStringLiteral("id"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        id->setFont(font1);
        id->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_10->setWidget(0, QFormLayout::FieldRole, id);

        nomLabel_9 = new QLabel(formLayoutWidget_5);
        nomLabel_9->setObjectName(QStringLiteral("nomLabel_9"));
        nomLabel_9->setFont(font);

        formLayout_10->setWidget(1, QFormLayout::LabelRole, nomLabel_9);

        specialite = new QComboBox(formLayoutWidget_5);
        specialite->setObjectName(QStringLiteral("specialite"));
        specialite->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_10->setWidget(1, QFormLayout::FieldRole, specialite);

        prenomLabel_4 = new QLabel(formLayoutWidget_5);
        prenomLabel_4->setObjectName(QStringLiteral("prenomLabel_4"));
        prenomLabel_4->setFont(font);

        formLayout_10->setWidget(2, QFormLayout::LabelRole, prenomLabel_4);

        lieu = new QComboBox(formLayoutWidget_5);
        lieu->setObjectName(QStringLiteral("lieu"));
        lieu->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_10->setWidget(2, QFormLayout::FieldRole, lieu);

        sexeLabel_4 = new QLabel(formLayoutWidget_5);
        sexeLabel_4->setObjectName(QStringLiteral("sexeLabel_4"));
        sexeLabel_4->setFont(font);

        formLayout_10->setWidget(3, QFormLayout::LabelRole, sexeLabel_4);

        dated_f = new QDateEdit(formLayoutWidget_5);
        dated_f->setObjectName(QStringLiteral("dated_f"));
        QFont font2;
        font2.setPointSize(10);
        dated_f->setFont(font2);
        dated_f->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_10->setWidget(3, QFormLayout::FieldRole, dated_f);

        dateDeNaissanceLabel_9 = new QLabel(formLayoutWidget_5);
        dateDeNaissanceLabel_9->setObjectName(QStringLiteral("dateDeNaissanceLabel_9"));
        dateDeNaissanceLabel_9->setFont(font);

        formLayout_10->setWidget(4, QFormLayout::LabelRole, dateDeNaissanceLabel_9);

        datef_f = new QDateEdit(formLayoutWidget_5);
        datef_f->setObjectName(QStringLiteral("datef_f"));
        datef_f->setFont(font2);
        datef_f->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_10->setWidget(4, QFormLayout::FieldRole, datef_f);

        posteLabel_4 = new QLabel(formLayoutWidget_5);
        posteLabel_4->setObjectName(QStringLiteral("posteLabel_4"));
        posteLabel_4->setFont(font);

        formLayout_10->setWidget(5, QFormLayout::LabelRole, posteLabel_4);

        niveau = new QComboBox(formLayoutWidget_5);
        niveau->setObjectName(QStringLiteral("niveau"));
        niveau->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_10->setWidget(5, QFormLayout::FieldRole, niveau);

        salaireLabel_9 = new QLabel(formLayoutWidget_5);
        salaireLabel_9->setObjectName(QStringLiteral("salaireLabel_9"));
        salaireLabel_9->setFont(font);

        formLayout_10->setWidget(6, QFormLayout::LabelRole, salaireLabel_9);

        prix = new QLineEdit(formLayoutWidget_5);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_10->setWidget(6, QFormLayout::FieldRole, prix);

        add_form = new QPushButton(tab);
        add_form->setObjectName(QStringLiteral("add_form"));
        add_form->setGeometry(QRect(960, 390, 111, 41));
        add_form->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1320, 760, 47, 14));
        label->setPixmap(QPixmap(QString::fromUtf8("../background_2.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1366, 768));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        label_2->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        label_2->raise();
        label->raise();
        formLayoutWidget_5->raise();
        add_form->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setMinimumSize(QSize(1366, 768));
        supprimer_form = new QPushButton(tab_2);
        supprimer_form->setObjectName(QStringLiteral("supprimer_form"));
        supprimer_form->setGeometry(QRect(550, 570, 221, 41));
        supprimer_form->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        historique_formation = new QPushButton(tab_2);
        historique_formation->setObjectName(QStringLiteral("historique_formation"));
        historique_formation->setGeometry(QRect(990, 380, 111, 41));
        historique_formation->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        stat_formation = new QPushButton(tab_2);
        stat_formation->setObjectName(QStringLiteral("stat_formation"));
        stat_formation->setGeometry(QRect(990, 330, 111, 41));
        stat_formation->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        PDF = new QPushButton(tab_2);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(990, 280, 111, 38));
        PDF->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QPushButton */\n"
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
"\n"
""));
        tabView_formation = new QTableView(tab_2);
        tabView_formation->setObjectName(QStringLiteral("tabView_formation"));
        tabView_formation->setGeometry(QRect(330, 250, 631, 311));
        tri_form = new QComboBox(tab_2);
        tri_form->setObjectName(QStringLiteral("tri_form"));
        tri_form->setGeometry(QRect(340, 210, 101, 25));
        tri_form->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));
        itemToSearch = new QComboBox(tab_2);
        itemToSearch->setObjectName(QStringLiteral("itemToSearch"));
        itemToSearch->setGeometry(QRect(700, 210, 46, 25));
        itemToSearch->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));
        recherche_formation = new QLineEdit(tab_2);
        recherche_formation->setObjectName(QStringLiteral("recherche_formation"));
        recherche_formation->setGeometry(QRect(750, 210, 181, 32));
        recherche_formation->setFont(font1);
        recherche_formation->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        chercher_formation = new QPushButton(tab_2);
        chercher_formation->setObjectName(QStringLiteral("chercher_formation"));
        chercher_formation->setGeometry(QRect(970, 210, 121, 41));
        chercher_formation->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        background_17 = new QLabel(tab_2);
        background_17->setObjectName(QStringLiteral("background_17"));
        background_17->setGeometry(QRect(0, 0, 1366, 768));
        background_17->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_17->setScaledContents(true);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 140, 1366, 768));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../background_2.png")));
        label_4->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        label_4->raise();
        background_17->raise();
        supprimer_form->raise();
        historique_formation->raise();
        stat_formation->raise();
        PDF->raise();
        tabView_formation->raise();
        tri_form->raise();
        itemToSearch->raise();
        recherche_formation->raise();
        chercher_formation->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setMinimumSize(QSize(1366, 768));
        background_16 = new QLabel(tab_4);
        background_16->setObjectName(QStringLiteral("background_16"));
        background_16->setGeometry(QRect(0, 0, 1366, 768));
        background_16->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_16->setScaledContents(true);
        formLayoutWidget_6 = new QWidget(tab_4);
        formLayoutWidget_6->setObjectName(QStringLiteral("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(430, 250, 481, 371));
        formLayout_11 = new QFormLayout(formLayoutWidget_6);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_11->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_11->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_11->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_11->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_11->setHorizontalSpacing(20);
        formLayout_11->setVerticalSpacing(40);
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        nomLabel_10 = new QLabel(formLayoutWidget_6);
        nomLabel_10->setObjectName(QStringLiteral("nomLabel_10"));
        nomLabel_10->setFont(font);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, nomLabel_10);

        specialite_form_2 = new QComboBox(formLayoutWidget_6);
        specialite_form_2->setObjectName(QStringLiteral("specialite_form_2"));
        specialite_form_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, specialite_form_2);

        prenomLabel_5 = new QLabel(formLayoutWidget_6);
        prenomLabel_5->setObjectName(QStringLiteral("prenomLabel_5"));
        prenomLabel_5->setFont(font);

        formLayout_11->setWidget(1, QFormLayout::LabelRole, prenomLabel_5);

        lieu_form_2 = new QComboBox(formLayoutWidget_6);
        lieu_form_2->setObjectName(QStringLiteral("lieu_form_2"));
        lieu_form_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_11->setWidget(1, QFormLayout::FieldRole, lieu_form_2);

        sexeLabel_5 = new QLabel(formLayoutWidget_6);
        sexeLabel_5->setObjectName(QStringLiteral("sexeLabel_5"));
        sexeLabel_5->setFont(font);

        formLayout_11->setWidget(2, QFormLayout::LabelRole, sexeLabel_5);

        dated_f_form_2 = new QDateEdit(formLayoutWidget_6);
        dated_f_form_2->setObjectName(QStringLiteral("dated_f_form_2"));
        dated_f_form_2->setFont(font2);
        dated_f_form_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_11->setWidget(2, QFormLayout::FieldRole, dated_f_form_2);

        dateDeNaissanceLabel_10 = new QLabel(formLayoutWidget_6);
        dateDeNaissanceLabel_10->setObjectName(QStringLiteral("dateDeNaissanceLabel_10"));
        dateDeNaissanceLabel_10->setFont(font);

        formLayout_11->setWidget(3, QFormLayout::LabelRole, dateDeNaissanceLabel_10);

        datef_f_form_2 = new QDateEdit(formLayoutWidget_6);
        datef_f_form_2->setObjectName(QStringLiteral("datef_f_form_2"));
        datef_f_form_2->setFont(font2);
        datef_f_form_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_11->setWidget(3, QFormLayout::FieldRole, datef_f_form_2);

        posteLabel_5 = new QLabel(formLayoutWidget_6);
        posteLabel_5->setObjectName(QStringLiteral("posteLabel_5"));
        posteLabel_5->setFont(font);

        formLayout_11->setWidget(4, QFormLayout::LabelRole, posteLabel_5);

        niveau_form_2 = new QComboBox(formLayoutWidget_6);
        niveau_form_2->setObjectName(QStringLiteral("niveau_form_2"));
        niveau_form_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));

        formLayout_11->setWidget(4, QFormLayout::FieldRole, niveau_form_2);

        salaireLabel_10 = new QLabel(formLayoutWidget_6);
        salaireLabel_10->setObjectName(QStringLiteral("salaireLabel_10"));
        salaireLabel_10->setFont(font);

        formLayout_11->setWidget(5, QFormLayout::LabelRole, salaireLabel_10);

        prix_form_2 = new QLineEdit(formLayoutWidget_6);
        prix_form_2->setObjectName(QStringLiteral("prix_form_2"));
        prix_form_2->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_11->setWidget(5, QFormLayout::FieldRole, prix_form_2);

        id_form_2 = new QComboBox(tab_4);
        id_form_2->setObjectName(QStringLiteral("id_form_2"));
        id_form_2->setGeometry(QRect(530, 190, 171, 31));
        id_form_2->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #4682B4; /* Bordure de couleur 0EABB8 */\n"
"    font-size: 15px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}"));
        nomLabel_11 = new QLabel(tab_4);
        nomLabel_11->setObjectName(QStringLiteral("nomLabel_11"));
        nomLabel_11->setGeometry(QRect(460, 190, 31, 31));
        nomLabel_11->setFont(font);
        modifier_form = new QPushButton(tab_4);
        modifier_form->setObjectName(QStringLiteral("modifier_form"));
        modifier_form->setGeometry(QRect(960, 390, 111, 41));
        modifier_form->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1366, 768));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../background_2.png")));
        label_3->setScaledContents(true);
        tabWidget->addTab(tab_4, QString());
        label_3->raise();
        background_16->raise();
        formLayoutWidget_6->raise();
        id_form_2->raise();
        nomLabel_11->raise();
        modifier_form->raise();

        verticalLayout_4->addWidget(tabWidget);

        MainWindow_formation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_formation);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 26));
        MainWindow_formation->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_formation);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_formation->setStatusBar(statusbar);

        retranslateUi(MainWindow_formation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow_formation);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_formation)
    {
        MainWindow_formation->setWindowTitle(QApplication::translate("MainWindow_formation", "mainwindow_formation", Q_NULLPTR));
        cINLabel_9->setText(QApplication::translate("MainWindow_formation", "Identifiant", Q_NULLPTR));
        nomLabel_9->setText(QApplication::translate("MainWindow_formation", "Sp\303\251cialit\303\251", Q_NULLPTR));
        specialite->clear();
        specialite->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Kayak", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Plong\303\251e sous-marine", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Surf", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Voile", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Stand up paddle (SUP)", Q_NULLPTR)
        );
        prenomLabel_4->setText(QApplication::translate("MainWindow_formation", "Lieu", Q_NULLPTR));
        lieu->clear();
        lieu->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Sidi Bou Said", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "La marsa", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Gammarth", Q_NULLPTR)
        );
        sexeLabel_4->setText(QApplication::translate("MainWindow_formation", "Date debut", Q_NULLPTR));
        dateDeNaissanceLabel_9->setText(QApplication::translate("MainWindow_formation", "Date fin", Q_NULLPTR));
        posteLabel_4->setText(QApplication::translate("MainWindow_formation", "Niveau de la formation", Q_NULLPTR));
        niveau->clear();
        niveau->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Debutant", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Amateur", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Professionnel", Q_NULLPTR)
        );
        salaireLabel_9->setText(QApplication::translate("MainWindow_formation", "Prix", Q_NULLPTR));
        add_form->setText(QApplication::translate("MainWindow_formation", "ajouter", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow_formation", "Ajouter", Q_NULLPTR));
        supprimer_form->setText(QApplication::translate("MainWindow_formation", "Supprimer", Q_NULLPTR));
        historique_formation->setText(QApplication::translate("MainWindow_formation", "Historique", Q_NULLPTR));
        stat_formation->setText(QApplication::translate("MainWindow_formation", "Statistique", Q_NULLPTR));
        PDF->setText(QApplication::translate("MainWindow_formation", "PDF", Q_NULLPTR));
        tri_form->clear();
        tri_form->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Id", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Prix", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "DateD", Q_NULLPTR)
        );
        itemToSearch->clear();
        itemToSearch->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Id", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Prix", Q_NULLPTR)
        );
        chercher_formation->setText(QApplication::translate("MainWindow_formation", "Chercher", Q_NULLPTR));
        background_17->setText(QString());
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow_formation", "afficher", Q_NULLPTR));
        background_16->setText(QString());
        nomLabel_10->setText(QApplication::translate("MainWindow_formation", "Sp\303\251cialit\303\251", Q_NULLPTR));
        specialite_form_2->clear();
        specialite_form_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Kayak", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Plong\303\251e sous-marine", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Surf", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Voile", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Stand up paddle (SUP)", Q_NULLPTR)
        );
        prenomLabel_5->setText(QApplication::translate("MainWindow_formation", "Lieu", Q_NULLPTR));
        lieu_form_2->clear();
        lieu_form_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Sidi Bou Said", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "La marsa", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Gammarth", Q_NULLPTR)
        );
        sexeLabel_5->setText(QApplication::translate("MainWindow_formation", "Date debut", Q_NULLPTR));
        dateDeNaissanceLabel_10->setText(QApplication::translate("MainWindow_formation", "Date fin", Q_NULLPTR));
        posteLabel_5->setText(QApplication::translate("MainWindow_formation", "Niveau de la formation", Q_NULLPTR));
        niveau_form_2->clear();
        niveau_form_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_formation", "Debutant", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Amateur", Q_NULLPTR)
         << QApplication::translate("MainWindow_formation", "Professionnel", Q_NULLPTR)
        );
        salaireLabel_10->setText(QApplication::translate("MainWindow_formation", "Prix", Q_NULLPTR));
        nomLabel_11->setText(QApplication::translate("MainWindow_formation", "ID", Q_NULLPTR));
        modifier_form->setText(QApplication::translate("MainWindow_formation", "modifier", Q_NULLPTR));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow_formation", "Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_formation: public Ui_MainWindow_formation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_FORMATION_H
