/********************************************************************************
** Form generated from reading UI file 'evenement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENEMENT_H
#define UI_EVENEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Retour_6;
    QPushButton *ajout_ev;
    QLabel *label_2;
    QDateEdit *dateDeNaissanceDateEdit_7;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_12;
    QLabel *cINLabel_15;
    QLineEdit *nome;
    QLabel *cINLabel_16;
    QLabel *sexeLabel_6;
    QDateEdit *dated;
    QLabel *dateDeNaissanceLabel_11;
    QDateEdit *datef;
    QLabel *posteLabel_6;
    QLineEdit *nbp;
    QLineEdit *prixe;
    QLabel *imageLabel_10;
    QLineEdit *descr;
    QComboBox *typee;
    QLabel *salaireLabel_11;
    QLabel *label_14;
    QLabel *label;
    QWidget *tab_2;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_13;
    QLabel *nom_event;
    QLineEdit *nome_m;
    QLabel *type_event;
    QLabel *date_debut;
    QDateEdit *dated_m;
    QLabel *date_fin;
    QLabel *nombre_p;
    QLineEdit *nbp_m;
    QLabel *prix_event;
    QLineEdit *prixe_m;
    QLabel *descr_event;
    QLineEdit *descr_m;
    QDateEdit *datef_m;
    QComboBox *typee_m;
    QPushButton *modifier_ev;
    QPushButton *Retour_7;
    QComboBox *mod;
    QPushButton *submit_ev;
    QLabel *label_3;
    QWidget *tab_6;
    QPushButton *Retour_15;
    QLabel *label_9;
    QLabel *label_17;
    QTableView *tabe;
    QPushButton *supprimer_ev;
    QPushButton *refresh_ev;
    QComboBox *comboBox_11;
    QPushButton *rechercher_ev;
    QPushButton *pdf_ev;
    QPushButton *stat_ev;
    QLabel *label_4;
    QWidget *tab_3;
    QComboBox *liste_nom;
    QLineEdit *CIN;
    QPushButton *ajout;
    QTableView *tab_liste;
    QPushButton *afficher_liste;
    QPushButton *sendBtn;
    QLabel *label_5;
    QWidget *tab_4;
    QListView *listView;
    QPushButton *boutton_ajouter_tache;
    QPushButton *boutton_supprimer_tache;
    QCalendarWidget *calendarWidget;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1509, 966);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 20, 1336, 786));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 3001, 1330));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Retour_6 = new QPushButton(tab);
        Retour_6->setObjectName(QStringLiteral("Retour_6"));
        Retour_6->setEnabled(true);
        Retour_6->setGeometry(QRect(10, 10, 111, 41));
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
        icon.addFile(QStringLiteral("../../Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        Retour_6->setIcon(icon);
        Retour_6->setAutoDefault(true);
        ajout_ev = new QPushButton(tab);
        ajout_ev->setObjectName(QStringLiteral("ajout_ev"));
        ajout_ev->setEnabled(true);
        ajout_ev->setGeometry(QRect(910, 350, 141, 41));
        ajout_ev->setFont(font);
        ajout_ev->setAutoFillBackground(false);
        ajout_ev->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        ajout_ev->setIcon(icon);
        ajout_ev->setAutoDefault(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(840, 600, 141, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8("IMAGE/421215270_4028100917416449_3667666585993399875_n-removebg-preview.png")));
        label_2->setScaledContents(true);
        dateDeNaissanceDateEdit_7 = new QDateEdit(tab);
        dateDeNaissanceDateEdit_7->setObjectName(QStringLiteral("dateDeNaissanceDateEdit_7"));
        dateDeNaissanceDateEdit_7->setGeometry(QRect(1500, 1280, 112, 25));
        QFont font1;
        font1.setPointSize(10);
        dateDeNaissanceDateEdit_7->setFont(font1);
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
        formLayoutWidget_8 = new QWidget(tab);
        formLayoutWidget_8->setObjectName(QStringLiteral("formLayoutWidget_8"));
        formLayoutWidget_8->setGeometry(QRect(400, 180, 451, 451));
        formLayout_12 = new QFormLayout(formLayoutWidget_8);
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        formLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_12->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_12->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_12->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_12->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_12->setHorizontalSpacing(20);
        formLayout_12->setVerticalSpacing(40);
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        cINLabel_15 = new QLabel(formLayoutWidget_8);
        cINLabel_15->setObjectName(QStringLiteral("cINLabel_15"));
        QFont font2;
        font2.setFamily(QStringLiteral("Bell MT"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        cINLabel_15->setFont(font2);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, cINLabel_15);

        nome = new QLineEdit(formLayoutWidget_8);
        nome->setObjectName(QStringLiteral("nome"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        nome->setFont(font3);
        nome->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(0, QFormLayout::FieldRole, nome);

        cINLabel_16 = new QLabel(formLayoutWidget_8);
        cINLabel_16->setObjectName(QStringLiteral("cINLabel_16"));
        cINLabel_16->setFont(font2);

        formLayout_12->setWidget(1, QFormLayout::LabelRole, cINLabel_16);

        sexeLabel_6 = new QLabel(formLayoutWidget_8);
        sexeLabel_6->setObjectName(QStringLiteral("sexeLabel_6"));
        sexeLabel_6->setFont(font2);

        formLayout_12->setWidget(2, QFormLayout::LabelRole, sexeLabel_6);

        dated = new QDateEdit(formLayoutWidget_8);
        dated->setObjectName(QStringLiteral("dated"));
        dated->setFont(font1);
        dated->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_12->setWidget(2, QFormLayout::FieldRole, dated);

        dateDeNaissanceLabel_11 = new QLabel(formLayoutWidget_8);
        dateDeNaissanceLabel_11->setObjectName(QStringLiteral("dateDeNaissanceLabel_11"));
        dateDeNaissanceLabel_11->setFont(font2);

        formLayout_12->setWidget(3, QFormLayout::LabelRole, dateDeNaissanceLabel_11);

        datef = new QDateEdit(formLayoutWidget_8);
        datef->setObjectName(QStringLiteral("datef"));
        datef->setFont(font1);
        datef->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_12->setWidget(3, QFormLayout::FieldRole, datef);

        posteLabel_6 = new QLabel(formLayoutWidget_8);
        posteLabel_6->setObjectName(QStringLiteral("posteLabel_6"));
        posteLabel_6->setFont(font2);

        formLayout_12->setWidget(4, QFormLayout::LabelRole, posteLabel_6);

        nbp = new QLineEdit(formLayoutWidget_8);
        nbp->setObjectName(QStringLiteral("nbp"));
        nbp->setFont(font3);
        nbp->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(4, QFormLayout::FieldRole, nbp);

        prixe = new QLineEdit(formLayoutWidget_8);
        prixe->setObjectName(QStringLiteral("prixe"));
        prixe->setFont(font3);
        prixe->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(5, QFormLayout::FieldRole, prixe);

        imageLabel_10 = new QLabel(formLayoutWidget_8);
        imageLabel_10->setObjectName(QStringLiteral("imageLabel_10"));
        imageLabel_10->setFont(font2);

        formLayout_12->setWidget(6, QFormLayout::LabelRole, imageLabel_10);

        descr = new QLineEdit(formLayoutWidget_8);
        descr->setObjectName(QStringLiteral("descr"));
        descr->setFont(font3);
        descr->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_12->setWidget(6, QFormLayout::FieldRole, descr);

        typee = new QComboBox(formLayoutWidget_8);
        typee->setObjectName(QStringLiteral("typee"));

        formLayout_12->setWidget(1, QFormLayout::FieldRole, typee);

        salaireLabel_11 = new QLabel(formLayoutWidget_8);
        salaireLabel_11->setObjectName(QStringLiteral("salaireLabel_11"));
        salaireLabel_11->setFont(font2);

        formLayout_12->setWidget(5, QFormLayout::LabelRole, salaireLabel_11);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(860, 600, 121, 91));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/logo-removebg-preview.png")));
        label_14->setScaledContents(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-5, 0, 1366, 768));
        label->setPixmap(QPixmap(QString::fromUtf8("image/background_3.png")));
        label->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        label->raise();
        Retour_6->raise();
        ajout_ev->raise();
        label_2->raise();
        dateDeNaissanceDateEdit_7->raise();
        formLayoutWidget_8->raise();
        label_14->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        formLayoutWidget_9 = new QWidget(tab_2);
        formLayoutWidget_9->setObjectName(QStringLiteral("formLayoutWidget_9"));
        formLayoutWidget_9->setGeometry(QRect(380, 180, 451, 451));
        formLayout_13 = new QFormLayout(formLayoutWidget_9);
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        formLayout_13->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_13->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_13->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_13->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_13->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_13->setHorizontalSpacing(20);
        formLayout_13->setVerticalSpacing(40);
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        nom_event = new QLabel(formLayoutWidget_9);
        nom_event->setObjectName(QStringLiteral("nom_event"));
        nom_event->setFont(font2);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, nom_event);

        nome_m = new QLineEdit(formLayoutWidget_9);
        nome_m->setObjectName(QStringLiteral("nome_m"));
        nome_m->setFont(font3);
        nome_m->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(0, QFormLayout::FieldRole, nome_m);

        type_event = new QLabel(formLayoutWidget_9);
        type_event->setObjectName(QStringLiteral("type_event"));
        type_event->setFont(font2);

        formLayout_13->setWidget(1, QFormLayout::LabelRole, type_event);

        date_debut = new QLabel(formLayoutWidget_9);
        date_debut->setObjectName(QStringLiteral("date_debut"));
        date_debut->setFont(font2);

        formLayout_13->setWidget(2, QFormLayout::LabelRole, date_debut);

        dated_m = new QDateEdit(formLayoutWidget_9);
        dated_m->setObjectName(QStringLiteral("dated_m"));
        dated_m->setFont(font1);
        dated_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_13->setWidget(2, QFormLayout::FieldRole, dated_m);

        date_fin = new QLabel(formLayoutWidget_9);
        date_fin->setObjectName(QStringLiteral("date_fin"));
        date_fin->setFont(font2);

        formLayout_13->setWidget(3, QFormLayout::LabelRole, date_fin);

        nombre_p = new QLabel(formLayoutWidget_9);
        nombre_p->setObjectName(QStringLiteral("nombre_p"));
        nombre_p->setFont(font2);

        formLayout_13->setWidget(4, QFormLayout::LabelRole, nombre_p);

        nbp_m = new QLineEdit(formLayoutWidget_9);
        nbp_m->setObjectName(QStringLiteral("nbp_m"));
        nbp_m->setFont(font3);
        nbp_m->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(4, QFormLayout::FieldRole, nbp_m);

        prix_event = new QLabel(formLayoutWidget_9);
        prix_event->setObjectName(QStringLiteral("prix_event"));
        prix_event->setFont(font2);

        formLayout_13->setWidget(5, QFormLayout::LabelRole, prix_event);

        prixe_m = new QLineEdit(formLayoutWidget_9);
        prixe_m->setObjectName(QStringLiteral("prixe_m"));
        prixe_m->setFont(font3);
        prixe_m->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(5, QFormLayout::FieldRole, prixe_m);

        descr_event = new QLabel(formLayoutWidget_9);
        descr_event->setObjectName(QStringLiteral("descr_event"));
        descr_event->setFont(font2);

        formLayout_13->setWidget(6, QFormLayout::LabelRole, descr_event);

        descr_m = new QLineEdit(formLayoutWidget_9);
        descr_m->setObjectName(QStringLiteral("descr_m"));
        descr_m->setFont(font3);
        descr_m->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_13->setWidget(6, QFormLayout::FieldRole, descr_m);

        datef_m = new QDateEdit(formLayoutWidget_9);
        datef_m->setObjectName(QStringLiteral("datef_m"));
        datef_m->setFont(font1);
        datef_m->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        formLayout_13->setWidget(3, QFormLayout::FieldRole, datef_m);

        typee_m = new QComboBox(formLayoutWidget_9);
        typee_m->setObjectName(QStringLiteral("typee_m"));

        formLayout_13->setWidget(1, QFormLayout::FieldRole, typee_m);

        modifier_ev = new QPushButton(tab_2);
        modifier_ev->setObjectName(QStringLiteral("modifier_ev"));
        modifier_ev->setEnabled(true);
        modifier_ev->setGeometry(QRect(900, 370, 141, 41));
        modifier_ev->setFont(font);
        modifier_ev->setAutoFillBackground(false);
        modifier_ev->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        modifier_ev->setIcon(icon);
        modifier_ev->setAutoDefault(true);
        Retour_7 = new QPushButton(tab_2);
        Retour_7->setObjectName(QStringLiteral("Retour_7"));
        Retour_7->setEnabled(true);
        Retour_7->setGeometry(QRect(10, 10, 111, 41));
        Retour_7->setFont(font);
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
        Retour_7->setIcon(icon);
        Retour_7->setAutoDefault(true);
        mod = new QComboBox(tab_2);
        mod->setObjectName(QStringLiteral("mod"));
        mod->setGeometry(QRect(850, 190, 101, 41));
        mod->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        submit_ev = new QPushButton(tab_2);
        submit_ev->setObjectName(QStringLiteral("submit_ev"));
        submit_ev->setEnabled(true);
        submit_ev->setGeometry(QRect(970, 190, 111, 41));
        submit_ev->setFont(font);
        submit_ev->setAutoFillBackground(false);
        submit_ev->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        submit_ev->setIcon(icon1);
        submit_ev->setAutoDefault(true);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-5, 0, 1366, 768));
        label_3->setPixmap(QPixmap(QString::fromUtf8("image/background_3.png")));
        label_3->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        label_3->raise();
        formLayoutWidget_9->raise();
        modifier_ev->raise();
        Retour_7->raise();
        mod->raise();
        submit_ev->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        Retour_15 = new QPushButton(tab_6);
        Retour_15->setObjectName(QStringLiteral("Retour_15"));
        Retour_15->setEnabled(true);
        Retour_15->setGeometry(QRect(10, 10, 111, 41));
        Retour_15->setFont(font);
        Retour_15->setAutoFillBackground(false);
        Retour_15->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Retour_15->setIcon(icon);
        Retour_15->setAutoDefault(true);
        label_9 = new QLabel(tab_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 590, 141, 101));
        label_9->setPixmap(QPixmap(QString::fromUtf8("IMAGE/421215270_4028100917416449_3667666585993399875_n-removebg-preview.png")));
        label_9->setScaledContents(true);
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(250, 580, 121, 91));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/logo-removebg-preview (1).png")));
        label_17->setScaledContents(true);
        tabe = new QTableView(tab_6);
        tabe->setObjectName(QStringLiteral("tabe"));
        tabe->setGeometry(QRect(320, 220, 661, 331));
        supprimer_ev = new QPushButton(tab_6);
        supprimer_ev->setObjectName(QStringLiteral("supprimer_ev"));
        supprimer_ev->setEnabled(true);
        supprimer_ev->setGeometry(QRect(580, 580, 151, 41));
        supprimer_ev->setFont(font);
        supprimer_ev->setAutoFillBackground(false);
        supprimer_ev->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        supprimer_ev->setIcon(icon);
        supprimer_ev->setAutoDefault(true);
        refresh_ev = new QPushButton(tab_6);
        refresh_ev->setObjectName(QStringLiteral("refresh_ev"));
        refresh_ev->setGeometry(QRect(940, 170, 51, 61));
        refresh_ev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("image/refresh-button_61444.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh_ev->setIcon(icon2);
        refresh_ev->setIconSize(QSize(20, 20));
        comboBox_11 = new QComboBox(tab_6);
        comboBox_11->setObjectName(QStringLiteral("comboBox_11"));
        comboBox_11->setGeometry(QRect(990, 180, 81, 41));
        comboBox_11->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        rechercher_ev = new QPushButton(tab_6);
        rechercher_ev->setObjectName(QStringLiteral("rechercher_ev"));
        rechercher_ev->setGeometry(QRect(1070, 180, 41, 41));
        rechercher_ev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("image/search-512.webp"), QSize(), QIcon::Normal, QIcon::Off);
        rechercher_ev->setIcon(icon3);
        rechercher_ev->setIconSize(QSize(25, 25));
        pdf_ev = new QPushButton(tab_6);
        pdf_ev->setObjectName(QStringLiteral("pdf_ev"));
        pdf_ev->setGeometry(QRect(1020, 310, 51, 61));
        pdf_ev->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QPushButton */\n"
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
        icon4.addFile(QStringLiteral("image/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdf_ev->setIcon(icon4);
        pdf_ev->setIconSize(QSize(50, 50));
        stat_ev = new QPushButton(tab_6);
        stat_ev->setObjectName(QStringLiteral("stat_ev"));
        stat_ev->setGeometry(QRect(1000, 370, 91, 91));
        stat_ev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: transparent; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: transparent; /* Bordure bleue */\n"
"\n"
"\n"
"\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("image/stat.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        stat_ev->setIcon(icon5);
        stat_ev->setIconSize(QSize(40, 40));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 1366, 768));
        label_4->setPixmap(QPixmap(QString::fromUtf8("image/background_3.png")));
        label_4->setScaledContents(true);
        tabWidget->addTab(tab_6, QString());
        label_4->raise();
        Retour_15->raise();
        label_9->raise();
        label_17->raise();
        tabe->raise();
        supprimer_ev->raise();
        refresh_ev->raise();
        comboBox_11->raise();
        rechercher_ev->raise();
        pdf_ev->raise();
        stat_ev->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        liste_nom = new QComboBox(tab_3);
        liste_nom->setObjectName(QStringLiteral("liste_nom"));
        liste_nom->setGeometry(QRect(480, 180, 141, 41));
        liste_nom->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        CIN = new QLineEdit(tab_3);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setEnabled(true);
        CIN->setGeometry(QRect(630, 180, 137, 41));
        CIN->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        ajout = new QPushButton(tab_3);
        ajout->setObjectName(QStringLiteral("ajout"));
        ajout->setEnabled(true);
        ajout->setGeometry(QRect(790, 180, 141, 41));
        ajout->setFont(font);
        ajout->setAutoFillBackground(false);
        ajout->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        QIcon icon6;
        icon6.addFile(QStringLiteral("../Downloads/anyrgb.com.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajout->setIcon(icon6);
        ajout->setAutoDefault(true);
        tab_liste = new QTableView(tab_3);
        tab_liste->setObjectName(QStringLiteral("tab_liste"));
        tab_liste->setGeometry(QRect(300, 240, 731, 311));
        afficher_liste = new QPushButton(tab_3);
        afficher_liste->setObjectName(QStringLiteral("afficher_liste"));
        afficher_liste->setEnabled(true);
        afficher_liste->setGeometry(QRect(530, 580, 141, 41));
        afficher_liste->setFont(font);
        afficher_liste->setAutoFillBackground(false);
        afficher_liste->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        afficher_liste->setIcon(icon6);
        afficher_liste->setAutoDefault(true);
        sendBtn = new QPushButton(tab_3);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(690, 580, 121, 41));
        sendBtn->setFont(font);
        sendBtn->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 1366, 768));
        label_5->setPixmap(QPixmap(QString::fromUtf8("image/background_3.png")));
        label_5->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        label_5->raise();
        liste_nom->raise();
        CIN->raise();
        ajout->raise();
        tab_liste->raise();
        afficher_liste->raise();
        sendBtn->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        listView = new QListView(tab_4);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(300, 240, 271, 261));
        boutton_ajouter_tache = new QPushButton(tab_4);
        boutton_ajouter_tache->setObjectName(QStringLiteral("boutton_ajouter_tache"));
        boutton_ajouter_tache->setGeometry(QRect(580, 240, 41, 41));
        boutton_ajouter_tache->setStyleSheet(QLatin1String("border-radius: 12px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 15pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(184, 166, 73);\n"
""));
        boutton_supprimer_tache = new QPushButton(tab_4);
        boutton_supprimer_tache->setObjectName(QStringLiteral("boutton_supprimer_tache"));
        boutton_supprimer_tache->setGeometry(QRect(580, 290, 41, 41));
        boutton_supprimer_tache->setStyleSheet(QLatin1String("border-radius: 12px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 17pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(184, 166, 73);\n"
""));
        calendarWidget = new QCalendarWidget(tab_4);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(640, 200, 411, 301));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 1366, 768));
        label_6->setPixmap(QPixmap(QString::fromUtf8("image/background_3.png")));
        label_6->setScaledContents(true);
        tabWidget->addTab(tab_4, QString());
        label_6->raise();
        listView->raise();
        boutton_ajouter_tache->raise();
        boutton_supprimer_tache->raise();
        calendarWidget->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1509, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Retour_6->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        ajout_ev->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        label_2->setText(QString());
        cINLabel_15->setText(QApplication::translate("MainWindow", " NOM EVENEMENT", Q_NULLPTR));
        cINLabel_16->setText(QApplication::translate("MainWindow", "TYPE EVENEMENT", Q_NULLPTR));
        sexeLabel_6->setText(QApplication::translate("MainWindow", "DATE DEBUT", Q_NULLPTR));
        dateDeNaissanceLabel_11->setText(QApplication::translate("MainWindow", "DATE FIN", Q_NULLPTR));
        posteLabel_6->setText(QApplication::translate("MainWindow", "NOMBRE PARTICIPANTS", Q_NULLPTR));
        imageLabel_10->setText(QApplication::translate("MainWindow", "DESCRIPTION", Q_NULLPTR));
        typee->clear();
        typee->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Regates", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cours de Voile", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Excursions en Kayak", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Activites de Plongee ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Courses de Paddle ", Q_NULLPTR)
        );
        salaireLabel_11->setText(QApplication::translate("MainWindow", "PRIX EVENEMENT", Q_NULLPTR));
        label_14->setText(QString());
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        nom_event->setText(QApplication::translate("MainWindow", " NOM EVENEMENT", Q_NULLPTR));
        type_event->setText(QApplication::translate("MainWindow", "TYPE EVENEMENT", Q_NULLPTR));
        date_debut->setText(QApplication::translate("MainWindow", "DATE DEBUT", Q_NULLPTR));
        date_fin->setText(QApplication::translate("MainWindow", "DATE FIN", Q_NULLPTR));
        nombre_p->setText(QApplication::translate("MainWindow", "NOMBRE PARTICIPANTS", Q_NULLPTR));
        prix_event->setText(QApplication::translate("MainWindow", "PRIX EVENEMENT", Q_NULLPTR));
        descr_event->setText(QApplication::translate("MainWindow", "DESCRIPTION", Q_NULLPTR));
        typee_m->clear();
        typee_m->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Regates", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cours de Voile", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Excursions en Kayak", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Activites de Plongee ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Courses de Paddle ", Q_NULLPTR)
        );
        modifier_ev->setText(QApplication::translate("MainWindow", "MODIFIER", Q_NULLPTR));
        Retour_7->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        mod->clear();
        mod->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
        );
        submit_ev->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        Retour_15->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        label_9->setText(QString());
        label_17->setText(QString());
        supprimer_ev->setText(QApplication::translate("MainWindow", "SUPPRIMER", Q_NULLPTR));
        refresh_ev->setText(QString());
        rechercher_ev->setText(QString());
        pdf_ev->setText(QString());
        stat_ev->setText(QString());
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        liste_nom->clear();
        liste_nom->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Nom evenement", Q_NULLPTR)
        );
        ajout->setText(QApplication::translate("MainWindow", "AJOUTER", Q_NULLPTR));
        afficher_liste->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Envoyer", Q_NULLPTR));
        label_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Participer", Q_NULLPTR));
        boutton_ajouter_tache->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        boutton_supprimer_tache->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Calendrier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENEMENT_H
