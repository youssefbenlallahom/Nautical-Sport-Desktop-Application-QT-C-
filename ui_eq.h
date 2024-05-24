/********************************************************************************
** Form generated from reading UI file 'eq.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQ_H
#define UI_EQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_eq
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_7;
    QLabel *cINLabel_6;
    QLineEdit *LineEdit_nom;
    QLabel *cINLabel_7;
    QLineEdit *LineEdit_four;
    QLabel *prenomLabel;
    QLineEdit *LineEdit_type;
    QLabel *posteLabel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_etat;
    QRadioButton *radioButton_etat2;
    QLabel *salaireLabel_6;
    QLineEdit *LineEdit_prix;
    QLabel *imageLabel_6;
    QLineEdit *LineEdit_qte;
    QPushButton *Bajout;
    QLabel *label;
    QLineEdit *LineEdit_mat;
    QLabel *nomLabel_6;
    QLabel *background_5;
    QLabel *sexeLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_dispo_2;
    QRadioButton *radioButton_dispo;
    QWidget *tab_6;
    QLabel *qr;
    QTableView *tableView_3;
    QScrollBar *verticalScrollBar;
    QLabel *label_8;
    QPushButton *Retour_31;
    QPushButton *Retour_20;
    QComboBox *comboBox_searchAttribute;
    QPushButton *Retour_21;
    QLabel *background_8;
    QPushButton *stat_eq;
    QLabel *qrLabel;
    QWidget *tab_2;
    QLabel *background_6;
    QComboBox *comboBox_mod;
    QLabel *label_5;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_9;
    QLabel *cINLabel_10;
    QLineEdit *LineEdit_nomm;
    QLabel *cINLabel_11;
    QLineEdit *LineEdit_fourm;
    QLabel *prenomLabel_3;
    QLineEdit *LineEdit_typem;
    QLabel *sexeLabel_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioDOM;
    QRadioButton *radioButton_20;
    QLabel *salaireLabel_8;
    QLineEdit *LineEdit_prixm;
    QLabel *imageLabel_8;
    QLineEdit *LineEdit_qtem;
    QLabel *background_3;
    QLabel *nomLabel_9;
    QLineEdit *LineEdit_matm;
    QPushButton *Bmodifier;
    QPushButton *Bmodifier_2;
    QLabel *posteLabel_3;
    QRadioButton *radioENM;
    QRadioButton *radioButton_22;
    QLabel *posteLabel_2;
    QWidget *tab_9;
    QLabel *nomLabel_11;
    QLineEdit *MATA;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_11;
    QLabel *cINLabel_14;
    QLabel *prenomLabel_5;
    QLineEdit *TYPEA;
    QLabel *salaireLabel_10;
    QLineEdit *PRIXA;
    QLineEdit *NOMA;
    QPushButton *Retour_25;
    QLabel *background_12;
    QComboBox *comboBox_achat;
    QPushButton *Bachat;
    QPushButton *pdf_eq;
    QLineEdit *cin_achat;
    QLabel *salaireLabel_11;
    QPushButton *Retour_6;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_eq)
    {
        if (MainWindow_eq->objectName().isEmpty())
            MainWindow_eq->setObjectName(QStringLiteral("MainWindow_eq"));
        MainWindow_eq->resize(1366, 768);
        centralwidget = new QWidget(MainWindow_eq);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1366, 768));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 1366, 768));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayoutWidget_3 = new QWidget(tab);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(380, 130, 361, 461));
        formLayout_7 = new QFormLayout(formLayoutWidget_3);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_7->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_7->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_7->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_7->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_7->setHorizontalSpacing(20);
        formLayout_7->setVerticalSpacing(40);
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        cINLabel_6 = new QLabel(formLayoutWidget_3);
        cINLabel_6->setObjectName(QStringLiteral("cINLabel_6"));
        QFont font;
        font.setFamily(QStringLiteral("Bell MT"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cINLabel_6->setFont(font);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, cINLabel_6);

        LineEdit_nom = new QLineEdit(formLayoutWidget_3);
        LineEdit_nom->setObjectName(QStringLiteral("LineEdit_nom"));
        LineEdit_nom->setEnabled(true);
        LineEdit_nom->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_7->setWidget(0, QFormLayout::FieldRole, LineEdit_nom);

        cINLabel_7 = new QLabel(formLayoutWidget_3);
        cINLabel_7->setObjectName(QStringLiteral("cINLabel_7"));
        cINLabel_7->setFont(font);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, cINLabel_7);

        LineEdit_four = new QLineEdit(formLayoutWidget_3);
        LineEdit_four->setObjectName(QStringLiteral("LineEdit_four"));
        LineEdit_four->setEnabled(true);
        LineEdit_four->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_7->setWidget(1, QFormLayout::FieldRole, LineEdit_four);

        prenomLabel = new QLabel(formLayoutWidget_3);
        prenomLabel->setObjectName(QStringLiteral("prenomLabel"));
        prenomLabel->setFont(font);

        formLayout_7->setWidget(2, QFormLayout::LabelRole, prenomLabel);

        LineEdit_type = new QLineEdit(formLayoutWidget_3);
        LineEdit_type->setObjectName(QStringLiteral("LineEdit_type"));
        LineEdit_type->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_7->setWidget(2, QFormLayout::FieldRole, LineEdit_type);

        posteLabel = new QLabel(formLayoutWidget_3);
        posteLabel->setObjectName(QStringLiteral("posteLabel"));
        posteLabel->setFont(font);

        formLayout_7->setWidget(3, QFormLayout::LabelRole, posteLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_etat = new QRadioButton(formLayoutWidget_3);
        radioButton_etat->setObjectName(QStringLiteral("radioButton_etat"));
        QFont font1;
        font1.setPointSize(8);
        radioButton_etat->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_etat);

        radioButton_etat2 = new QRadioButton(formLayoutWidget_3);
        radioButton_etat2->setObjectName(QStringLiteral("radioButton_etat2"));
        radioButton_etat2->setFont(font1);
        radioButton_etat2->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
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

        horizontalLayout_2->addWidget(radioButton_etat2);


        formLayout_7->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        salaireLabel_6 = new QLabel(formLayoutWidget_3);
        salaireLabel_6->setObjectName(QStringLiteral("salaireLabel_6"));
        salaireLabel_6->setFont(font);

        formLayout_7->setWidget(4, QFormLayout::LabelRole, salaireLabel_6);

        LineEdit_prix = new QLineEdit(formLayoutWidget_3);
        LineEdit_prix->setObjectName(QStringLiteral("LineEdit_prix"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        LineEdit_prix->setFont(font2);
        LineEdit_prix->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_7->setWidget(4, QFormLayout::FieldRole, LineEdit_prix);

        imageLabel_6 = new QLabel(formLayoutWidget_3);
        imageLabel_6->setObjectName(QStringLiteral("imageLabel_6"));
        imageLabel_6->setFont(font);

        formLayout_7->setWidget(5, QFormLayout::LabelRole, imageLabel_6);

        LineEdit_qte = new QLineEdit(formLayoutWidget_3);
        LineEdit_qte->setObjectName(QStringLiteral("LineEdit_qte"));
        LineEdit_qte->setFont(font2);
        LineEdit_qte->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_7->setWidget(5, QFormLayout::FieldRole, LineEdit_qte);

        Bajout = new QPushButton(tab);
        Bajout->setObjectName(QStringLiteral("Bajout"));
        Bajout->setEnabled(true);
        Bajout->setGeometry(QRect(640, 710, 141, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        Bajout->setFont(font3);
        Bajout->setAutoFillBackground(false);
        Bajout->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Bajout->setIcon(icon);
        Bajout->setAutoDefault(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(780, 280, 261, 211));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/club nautique/421215270_4028100917416449_3667666585993399875_n-removebg-preview.png")));
        label->setScaledContents(true);
        LineEdit_mat = new QLineEdit(tab);
        LineEdit_mat->setObjectName(QStringLiteral("LineEdit_mat"));
        LineEdit_mat->setGeometry(QRect(920, 130, 137, 32));
        LineEdit_mat->setFont(font2);
        LineEdit_mat->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        nomLabel_6 = new QLabel(tab);
        nomLabel_6->setObjectName(QStringLiteral("nomLabel_6"));
        nomLabel_6->setGeometry(QRect(770, 120, 171, 47));
        nomLabel_6->setFont(font);
        background_5 = new QLabel(tab);
        background_5->setObjectName(QStringLiteral("background_5"));
        background_5->setGeometry(QRect(0, 0, 1366, 768));
        background_5->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_5->setScaledContents(true);
        sexeLabel = new QLabel(tab);
        sexeLabel->setObjectName(QStringLiteral("sexeLabel"));
        sexeLabel->setGeometry(QRect(380, 620, 178, 27));
        sexeLabel->setFont(font);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 620, 102, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_dispo_2 = new QRadioButton(layoutWidget);
        radioButton_dispo_2->setObjectName(QStringLiteral("radioButton_dispo_2"));
        radioButton_dispo_2->setFont(font1);

        horizontalLayout->addWidget(radioButton_dispo_2);

        radioButton_dispo = new QRadioButton(layoutWidget);
        radioButton_dispo->setObjectName(QStringLiteral("radioButton_dispo"));
        radioButton_dispo->setFont(font1);
        radioButton_dispo->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
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

        horizontalLayout->addWidget(radioButton_dispo);

        tabWidget->addTab(tab, QString());
        background_5->raise();
        formLayoutWidget_3->raise();
        Bajout->raise();
        label->raise();
        LineEdit_mat->raise();
        nomLabel_6->raise();
        sexeLabel->raise();
        layoutWidget->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        qr = new QLabel(tab_6);
        qr->setObjectName(QStringLiteral("qr"));
        qr->setGeometry(QRect(0, 0, 1341, 821));
        qr->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/2.jpg")));
        qr->setScaledContents(true);
        tableView_3 = new QTableView(tab_6);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(350, 190, 701, 361));
        tableView_3->setStyleSheet(QLatin1String("QString styleSheet = \"\\\n"
"        QTableView { \\\n"
"            border-collapse: collapse; \\\n"
"            width: 100%; \\\n"
"        } \\\n"
"        QTableView::item { \\\n"
"            border: 1px solid #001F3F; /* Marine */ \\\n"
"            padding: 8px; \\\n"
"            background-color: #004080; /* Bleu marine clair */ \\\n"
"            color: #FFFFFF; /* Blanc */ \\\n"
"        } \\\n"
"        QTableView::item:selected { \\\n"
"            background-color: #001F3F; /* Marine */ \\\n"
"            color: #FFFFFF; /* Blanc */ \\\n"
"        }\";\n"
"\n"
"    ui->tableView_3->setStyleSheet(styleSheet);"));
        verticalScrollBar = new QScrollBar(tab_6);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(1010, 220, 20, 301));
        verticalScrollBar->setOrientation(Qt::Vertical);
        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1070, 150, 21, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/IMAGE/107799.png")));
        label_8->setScaledContents(true);
        Retour_31 = new QPushButton(tab_6);
        Retour_31->setObjectName(QStringLiteral("Retour_31"));
        Retour_31->setEnabled(true);
        Retour_31->setGeometry(QRect(680, 570, 151, 41));
        Retour_31->setFont(font3);
        Retour_31->setAutoFillBackground(false);
        Retour_31->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Retour_31->setIcon(icon);
        Retour_31->setAutoDefault(true);
        Retour_20 = new QPushButton(tab_6);
        Retour_20->setObjectName(QStringLiteral("Retour_20"));
        Retour_20->setEnabled(true);
        Retour_20->setGeometry(QRect(540, 130, 141, 41));
        Retour_20->setFont(font3);
        Retour_20->setAutoFillBackground(false);
        Retour_20->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Retour_20->setIcon(icon);
        Retour_20->setAutoDefault(true);
        comboBox_searchAttribute = new QComboBox(tab_6);
        comboBox_searchAttribute->setObjectName(QStringLiteral("comboBox_searchAttribute"));
        comboBox_searchAttribute->setGeometry(QRect(720, 130, 161, 41));
        comboBox_searchAttribute->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        Retour_21 = new QPushButton(tab_6);
        Retour_21->setObjectName(QStringLiteral("Retour_21"));
        Retour_21->setEnabled(true);
        Retour_21->setGeometry(QRect(1090, 10, 121, 41));
        Retour_21->setFont(font3);
        Retour_21->setAutoFillBackground(false);
        Retour_21->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Retour_21->setIcon(icon);
        Retour_21->setAutoDefault(true);
        background_8 = new QLabel(tab_6);
        background_8->setObjectName(QStringLiteral("background_8"));
        background_8->setGeometry(QRect(0, 0, 1366, 768));
        background_8->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_8->setScaledContents(true);
        stat_eq = new QPushButton(tab_6);
        stat_eq->setObjectName(QStringLiteral("stat_eq"));
        stat_eq->setEnabled(true);
        stat_eq->setGeometry(QRect(1090, 60, 121, 41));
        stat_eq->setFont(font3);
        stat_eq->setAutoFillBackground(false);
        stat_eq->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        stat_eq->setIcon(icon);
        stat_eq->setAutoDefault(true);
        qrLabel = new QLabel(tab_6);
        qrLabel->setObjectName(QStringLiteral("qrLabel"));
        qrLabel->setGeometry(QRect(1100, 580, 141, 151));
        tabWidget->addTab(tab_6, QString());
        background_8->raise();
        qr->raise();
        tableView_3->raise();
        verticalScrollBar->raise();
        label_8->raise();
        Retour_31->raise();
        Retour_20->raise();
        comboBox_searchAttribute->raise();
        Retour_21->raise();
        stat_eq->raise();
        qrLabel->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        background_6 = new QLabel(tab_2);
        background_6->setObjectName(QStringLiteral("background_6"));
        background_6->setGeometry(QRect(0, 0, 1366, 768));
        background_6->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_6->setScaledContents(true);
        comboBox_mod = new QComboBox(tab_2);
        comboBox_mod->setObjectName(QStringLiteral("comboBox_mod"));
        comboBox_mod->setGeometry(QRect(489, 61, 171, 41));
        comboBox_mod->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(740, 70, 56, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Desktop/istockphoto-924437708-612x612-removebg-preview.png")));
        label_5->setScaledContents(true);
        formLayoutWidget_5 = new QWidget(tab_2);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(370, 130, 361, 517));
        formLayout_9 = new QFormLayout(formLayoutWidget_5);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_9->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_9->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_9->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_9->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_9->setHorizontalSpacing(20);
        formLayout_9->setVerticalSpacing(40);
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        cINLabel_10 = new QLabel(formLayoutWidget_5);
        cINLabel_10->setObjectName(QStringLiteral("cINLabel_10"));
        cINLabel_10->setFont(font);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, cINLabel_10);

        LineEdit_nomm = new QLineEdit(formLayoutWidget_5);
        LineEdit_nomm->setObjectName(QStringLiteral("LineEdit_nomm"));
        LineEdit_nomm->setEnabled(true);
        LineEdit_nomm->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_9->setWidget(0, QFormLayout::FieldRole, LineEdit_nomm);

        cINLabel_11 = new QLabel(formLayoutWidget_5);
        cINLabel_11->setObjectName(QStringLiteral("cINLabel_11"));
        cINLabel_11->setFont(font);

        formLayout_9->setWidget(1, QFormLayout::LabelRole, cINLabel_11);

        LineEdit_fourm = new QLineEdit(formLayoutWidget_5);
        LineEdit_fourm->setObjectName(QStringLiteral("LineEdit_fourm"));
        LineEdit_fourm->setEnabled(true);
        LineEdit_fourm->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_9->setWidget(1, QFormLayout::FieldRole, LineEdit_fourm);

        prenomLabel_3 = new QLabel(formLayoutWidget_5);
        prenomLabel_3->setObjectName(QStringLiteral("prenomLabel_3"));
        prenomLabel_3->setFont(font);

        formLayout_9->setWidget(2, QFormLayout::LabelRole, prenomLabel_3);

        LineEdit_typem = new QLineEdit(formLayoutWidget_5);
        LineEdit_typem->setObjectName(QStringLiteral("LineEdit_typem"));
        LineEdit_typem->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_9->setWidget(2, QFormLayout::FieldRole, LineEdit_typem);

        sexeLabel_3 = new QLabel(formLayoutWidget_5);
        sexeLabel_3->setObjectName(QStringLiteral("sexeLabel_3"));
        sexeLabel_3->setFont(font);

        formLayout_9->setWidget(3, QFormLayout::LabelRole, sexeLabel_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioDOM = new QRadioButton(formLayoutWidget_5);
        radioDOM->setObjectName(QStringLiteral("radioDOM"));
        radioDOM->setFont(font1);

        horizontalLayout_5->addWidget(radioDOM);

        radioButton_20 = new QRadioButton(formLayoutWidget_5);
        radioButton_20->setObjectName(QStringLiteral("radioButton_20"));
        radioButton_20->setFont(font1);
        radioButton_20->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
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

        horizontalLayout_5->addWidget(radioButton_20);


        formLayout_9->setLayout(3, QFormLayout::FieldRole, horizontalLayout_5);

        salaireLabel_8 = new QLabel(formLayoutWidget_5);
        salaireLabel_8->setObjectName(QStringLiteral("salaireLabel_8"));
        salaireLabel_8->setFont(font);

        formLayout_9->setWidget(4, QFormLayout::LabelRole, salaireLabel_8);

        LineEdit_prixm = new QLineEdit(formLayoutWidget_5);
        LineEdit_prixm->setObjectName(QStringLiteral("LineEdit_prixm"));
        LineEdit_prixm->setFont(font2);
        LineEdit_prixm->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_9->setWidget(4, QFormLayout::FieldRole, LineEdit_prixm);

        imageLabel_8 = new QLabel(formLayoutWidget_5);
        imageLabel_8->setObjectName(QStringLiteral("imageLabel_8"));
        imageLabel_8->setFont(font);

        formLayout_9->setWidget(5, QFormLayout::LabelRole, imageLabel_8);

        LineEdit_qtem = new QLineEdit(formLayoutWidget_5);
        LineEdit_qtem->setObjectName(QStringLiteral("LineEdit_qtem"));
        LineEdit_qtem->setFont(font2);
        LineEdit_qtem->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_9->setWidget(5, QFormLayout::FieldRole, LineEdit_qtem);

        background_3 = new QLabel(formLayoutWidget_5);
        background_3->setObjectName(QStringLiteral("background_3"));
        background_3->setPixmap(QPixmap(QString::fromUtf8(":/IMAGE/2.jpg")));
        background_3->setScaledContents(true);

        formLayout_9->setWidget(6, QFormLayout::FieldRole, background_3);

        nomLabel_9 = new QLabel(tab_2);
        nomLabel_9->setObjectName(QStringLiteral("nomLabel_9"));
        nomLabel_9->setGeometry(QRect(767, 120, 61, 47));
        nomLabel_9->setFont(font);
        LineEdit_matm = new QLineEdit(tab_2);
        LineEdit_matm->setObjectName(QStringLiteral("LineEdit_matm"));
        LineEdit_matm->setEnabled(false);
        LineEdit_matm->setGeometry(QRect(850, 130, 137, 32));
        LineEdit_matm->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        Bmodifier = new QPushButton(tab_2);
        Bmodifier->setObjectName(QStringLiteral("Bmodifier"));
        Bmodifier->setEnabled(true);
        Bmodifier->setGeometry(QRect(630, 710, 141, 41));
        Bmodifier->setFont(font3);
        Bmodifier->setAutoFillBackground(false);
        Bmodifier->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Bmodifier->setIcon(icon);
        Bmodifier->setAutoDefault(true);
        Bmodifier_2 = new QPushButton(tab_2);
        Bmodifier_2->setObjectName(QStringLiteral("Bmodifier_2"));
        Bmodifier_2->setEnabled(true);
        Bmodifier_2->setGeometry(QRect(670, 60, 141, 41));
        Bmodifier_2->setFont(font3);
        Bmodifier_2->setAutoFillBackground(false);
        Bmodifier_2->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Bmodifier_2->setIcon(icon);
        Bmodifier_2->setAutoDefault(true);
        posteLabel_3 = new QLabel(tab_2);
        posteLabel_3->setObjectName(QStringLiteral("posteLabel_3"));
        posteLabel_3->setGeometry(QRect(560, 800, 66, 27));
        posteLabel_3->setFont(font);
        radioENM = new QRadioButton(tab_2);
        radioENM->setObjectName(QStringLiteral("radioENM"));
        radioENM->setGeometry(QRect(570, 550, 59, 20));
        radioENM->setFont(font1);
        radioButton_22 = new QRadioButton(tab_2);
        radioButton_22->setObjectName(QStringLiteral("radioButton_22"));
        radioButton_22->setGeometry(QRect(650, 550, 67, 20));
        radioButton_22->setFont(font1);
        radioButton_22->setStyleSheet(QString::fromUtf8("/* Style du QCheckBox */\n"
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
        posteLabel_2 = new QLabel(tab_2);
        posteLabel_2->setObjectName(QStringLiteral("posteLabel_2"));
        posteLabel_2->setGeometry(QRect(410, 550, 66, 27));
        posteLabel_2->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        nomLabel_11 = new QLabel(tab_9);
        nomLabel_11->setObjectName(QStringLiteral("nomLabel_11"));
        nomLabel_11->setGeometry(QRect(547, 150, 61, 47));
        nomLabel_11->setFont(font);
        MATA = new QLineEdit(tab_9);
        MATA->setObjectName(QStringLiteral("MATA"));
        MATA->setEnabled(true);
        MATA->setGeometry(QRect(640, 160, 137, 32));
        MATA->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        formLayoutWidget_7 = new QWidget(tab_9);
        formLayoutWidget_7->setObjectName(QStringLiteral("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(550, 220, 341, 201));
        formLayout_11 = new QFormLayout(formLayoutWidget_7);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_11->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_11->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_11->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_11->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_11->setHorizontalSpacing(20);
        formLayout_11->setVerticalSpacing(40);
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        cINLabel_14 = new QLabel(formLayoutWidget_7);
        cINLabel_14->setObjectName(QStringLiteral("cINLabel_14"));
        cINLabel_14->setFont(font);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, cINLabel_14);

        prenomLabel_5 = new QLabel(formLayoutWidget_7);
        prenomLabel_5->setObjectName(QStringLiteral("prenomLabel_5"));
        prenomLabel_5->setFont(font);

        formLayout_11->setWidget(1, QFormLayout::LabelRole, prenomLabel_5);

        TYPEA = new QLineEdit(formLayoutWidget_7);
        TYPEA->setObjectName(QStringLiteral("TYPEA"));
        TYPEA->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_11->setWidget(1, QFormLayout::FieldRole, TYPEA);

        salaireLabel_10 = new QLabel(formLayoutWidget_7);
        salaireLabel_10->setObjectName(QStringLiteral("salaireLabel_10"));
        salaireLabel_10->setFont(font);

        formLayout_11->setWidget(2, QFormLayout::LabelRole, salaireLabel_10);

        PRIXA = new QLineEdit(formLayoutWidget_7);
        PRIXA->setObjectName(QStringLiteral("PRIXA"));
        PRIXA->setFont(font2);
        PRIXA->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_11->setWidget(2, QFormLayout::FieldRole, PRIXA);

        NOMA = new QLineEdit(formLayoutWidget_7);
        NOMA->setObjectName(QStringLiteral("NOMA"));
        NOMA->setEnabled(true);
        NOMA->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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

        formLayout_11->setWidget(0, QFormLayout::FieldRole, NOMA);

        Retour_25 = new QPushButton(tab_9);
        Retour_25->setObjectName(QStringLiteral("Retour_25"));
        Retour_25->setEnabled(true);
        Retour_25->setGeometry(QRect(640, 520, 131, 41));
        Retour_25->setFont(font3);
        Retour_25->setAutoFillBackground(false);
        Retour_25->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Retour_25->setIcon(icon);
        Retour_25->setAutoDefault(true);
        background_12 = new QLabel(tab_9);
        background_12->setObjectName(QStringLiteral("background_12"));
        background_12->setGeometry(QRect(0, 0, 1341, 821));
        background_12->setPixmap(QPixmap(QString::fromUtf8(":/background_3.png")));
        background_12->setScaledContents(true);
        comboBox_achat = new QComboBox(tab_9);
        comboBox_achat->setObjectName(QStringLiteral("comboBox_achat"));
        comboBox_achat->setGeometry(QRect(520, 70, 171, 41));
        comboBox_achat->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du QComboBox */\n"
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
        Bachat = new QPushButton(tab_9);
        Bachat->setObjectName(QStringLiteral("Bachat"));
        Bachat->setEnabled(true);
        Bachat->setGeometry(QRect(700, 70, 141, 41));
        Bachat->setFont(font3);
        Bachat->setAutoFillBackground(false);
        Bachat->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        Bachat->setIcon(icon);
        Bachat->setAutoDefault(true);
        pdf_eq = new QPushButton(tab_9);
        pdf_eq->setObjectName(QStringLiteral("pdf_eq"));
        pdf_eq->setEnabled(true);
        pdf_eq->setGeometry(QRect(640, 570, 131, 41));
        pdf_eq->setFont(font3);
        pdf_eq->setAutoFillBackground(false);
        pdf_eq->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
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
        pdf_eq->setIcon(icon);
        pdf_eq->setAutoDefault(true);
        cin_achat = new QLineEdit(tab_9);
        cin_achat->setObjectName(QStringLiteral("cin_achat"));
        cin_achat->setGeometry(QRect(640, 430, 137, 32));
        cin_achat->setFont(font2);
        cin_achat->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du formulaire */\n"
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
        salaireLabel_11 = new QLabel(tab_9);
        salaireLabel_11->setObjectName(QStringLiteral("salaireLabel_11"));
        salaireLabel_11->setGeometry(QRect(550, 430, 57, 32));
        salaireLabel_11->setFont(font);
        tabWidget->addTab(tab_9, QString());
        background_12->raise();
        nomLabel_11->raise();
        MATA->raise();
        formLayoutWidget_7->raise();
        Retour_25->raise();
        comboBox_achat->raise();
        Bachat->raise();
        pdf_eq->raise();
        cin_achat->raise();
        salaireLabel_11->raise();
        Retour_6 = new QPushButton(page);
        Retour_6->setObjectName(QStringLiteral("Retour_6"));
        Retour_6->setEnabled(true);
        Retour_6->setGeometry(QRect(20, 70, 111, 41));
        Retour_6->setFont(font3);
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
        Retour_6->setIcon(icon);
        Retour_6->setAutoDefault(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        MainWindow_eq->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_eq);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 26));
        MainWindow_eq->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_eq);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_eq->setStatusBar(statusbar);

        retranslateUi(MainWindow_eq);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow_eq);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_eq)
    {
        MainWindow_eq->setWindowTitle(QApplication::translate("MainWindow_eq", "MainWindow", Q_NULLPTR));
        cINLabel_6->setText(QApplication::translate("MainWindow_eq", "NOM", Q_NULLPTR));
        cINLabel_7->setText(QApplication::translate("MainWindow_eq", "FOURNISSEUR", Q_NULLPTR));
        prenomLabel->setText(QApplication::translate("MainWindow_eq", "TYPE", Q_NULLPTR));
        posteLabel->setText(QApplication::translate("MainWindow_eq", "ETAT", Q_NULLPTR));
        radioButton_etat->setText(QApplication::translate("MainWindow_eq", "NEUF", Q_NULLPTR));
        radioButton_etat2->setText(QApplication::translate("MainWindow_eq", "USAGE", Q_NULLPTR));
        salaireLabel_6->setText(QApplication::translate("MainWindow_eq", "PRIX", Q_NULLPTR));
        imageLabel_6->setText(QApplication::translate("MainWindow_eq", "QUANTITE", Q_NULLPTR));
        Bajout->setText(QApplication::translate("MainWindow_eq", "AJOUTER", Q_NULLPTR));
        label->setText(QString());
        nomLabel_6->setText(QApplication::translate("MainWindow_eq", "MATRICULE", Q_NULLPTR));
        background_5->setText(QString());
        sexeLabel->setText(QApplication::translate("MainWindow_eq", "DISPONIBILITE", Q_NULLPTR));
        radioButton_dispo_2->setText(QApplication::translate("MainWindow_eq", "YES", Q_NULLPTR));
        radioButton_dispo->setText(QApplication::translate("MainWindow_eq", "NO", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow_eq", "Ajout", Q_NULLPTR));
        qr->setText(QString());
        label_8->setText(QString());
        Retour_31->setText(QApplication::translate("MainWindow_eq", "SUPPRIMER", Q_NULLPTR));
        Retour_20->setText(QApplication::translate("MainWindow_eq", "recherche", Q_NULLPTR));
        Retour_21->setText(QApplication::translate("MainWindow_eq", "REFRESH", Q_NULLPTR));
        background_8->setText(QString());
        stat_eq->setText(QApplication::translate("MainWindow_eq", "STAT", Q_NULLPTR));
        qrLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow_eq", "Afficher", Q_NULLPTR));
        background_6->setText(QString());
        comboBox_mod->clear();
        comboBox_mod->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_eq", "Nom", Q_NULLPTR)
         << QApplication::translate("MainWindow_eq", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow_eq", "TYPE", Q_NULLPTR)
        );
        label_5->setText(QString());
        cINLabel_10->setText(QApplication::translate("MainWindow_eq", "NOM", Q_NULLPTR));
        cINLabel_11->setText(QApplication::translate("MainWindow_eq", "FOURNISSEUR", Q_NULLPTR));
        prenomLabel_3->setText(QApplication::translate("MainWindow_eq", "TYPE", Q_NULLPTR));
        sexeLabel_3->setText(QApplication::translate("MainWindow_eq", "DISPONIBILITE", Q_NULLPTR));
        radioDOM->setText(QApplication::translate("MainWindow_eq", "YES", Q_NULLPTR));
        radioButton_20->setText(QApplication::translate("MainWindow_eq", "NO", Q_NULLPTR));
        salaireLabel_8->setText(QApplication::translate("MainWindow_eq", "PRICE", Q_NULLPTR));
        imageLabel_8->setText(QApplication::translate("MainWindow_eq", "QUANTITY", Q_NULLPTR));
        background_3->setText(QString());
        nomLabel_9->setText(QApplication::translate("MainWindow_eq", "MAT", Q_NULLPTR));
        Bmodifier->setText(QApplication::translate("MainWindow_eq", "MODIFIER", Q_NULLPTR));
        Bmodifier_2->setText(QApplication::translate("MainWindow_eq", "submit", Q_NULLPTR));
        posteLabel_3->setText(QApplication::translate("MainWindow_eq", "ETAT", Q_NULLPTR));
        radioENM->setText(QApplication::translate("MainWindow_eq", "NEUF", Q_NULLPTR));
        radioButton_22->setText(QApplication::translate("MainWindow_eq", "USAGE", Q_NULLPTR));
        posteLabel_2->setText(QApplication::translate("MainWindow_eq", "ETAT", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow_eq", "Modifier", Q_NULLPTR));
        nomLabel_11->setText(QApplication::translate("MainWindow_eq", "MAT", Q_NULLPTR));
        cINLabel_14->setText(QApplication::translate("MainWindow_eq", "NOM", Q_NULLPTR));
        prenomLabel_5->setText(QApplication::translate("MainWindow_eq", "TYPE", Q_NULLPTR));
        salaireLabel_10->setText(QApplication::translate("MainWindow_eq", "PRIX", Q_NULLPTR));
        Retour_25->setText(QApplication::translate("MainWindow_eq", "ACHETER", Q_NULLPTR));
        background_12->setText(QString());
        comboBox_achat->clear();
        comboBox_achat->insertItems(0, QStringList()
         << QApplication::translate("MainWindow_eq", "Nom", Q_NULLPTR)
        );
        Bachat->setText(QApplication::translate("MainWindow_eq", "submit", Q_NULLPTR));
        pdf_eq->setText(QApplication::translate("MainWindow_eq", "PDF", Q_NULLPTR));
        salaireLabel_11->setText(QApplication::translate("MainWindow_eq", "CIN", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow_eq", "Achat", Q_NULLPTR));
        Retour_6->setText(QApplication::translate("MainWindow_eq", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_eq: public Ui_MainWindow_eq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQ_H
