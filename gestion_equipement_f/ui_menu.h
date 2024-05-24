/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *gestionButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(1299, 748);
        label = new QLabel(menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1301, 791));
        label->setPixmap(QPixmap(QString::fromUtf8(":/menu.jpg")));
        label->setScaledContents(true);
        gridLayoutWidget = new QWidget(menu);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(360, 140, 382, 521));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(50, 0, 50, 0);
        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_6, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_5, 3, 0, 1, 1);

        gestionButton = new QPushButton(gridLayoutWidget);
        gestionButton->setObjectName(QStringLiteral("gestionButton"));
        gestionButton->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(gestionButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_2, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* Styles g\303\251n\303\251raux du bouton */\n"
"QPushButton {\n"
"    background-color: #0EABB8; /* Bleu clair pour repr\303\251senter l'eau */\n"
"    border: 2px solid #0EABB8; /* Bordure bleue */\n"
"    color: #ffffff; /* Texte blanc */\n"
"    padding: 15px 25px; /* Espacement int\303\251rieur */\n"
"    font-size: 18px; /* Taille de la police */\n"
"    font-weight: bold; /* Police en gras */\n"
"    border-radius: 20px; /* Bordure arrondie */\n"
"    outline: none; /* Supprime la bordure de focus */\n"
"    position: relative; /* Position relative pour les pseudo-\303\251l\303\251ments */\n"
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
"    back"
                        "ground-color: #1e4c6f; /* Bleu fonc\303\251 lors du clic */\n"
"    color: #f8f8f8; /* Texte blanc lors du clic */\n"
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
"/* Animation au survol du bouton */\n"
"QPushButton:hover::after {\n"
"    transform: translate(-50%, -50%) scale(2); /* Augmente l'\303\251chelle \303\240 2 */\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_3, 4, 0, 1, 1);

        label_2 = new QLabel(menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 630, 101, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/logo.png")));
        label_2->setScaledContents(true);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton_6->setText(QApplication::translate("menu", "Gestion des equipements", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("menu", "Gestion des evenements", Q_NULLPTR));
        gestionButton->setText(QApplication::translate("menu", "Gestion des Employ\303\251s", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("menu", "Gestion des Utilisateurs", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("menu", "Gestion formations", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("menu", "Gestion abonnement", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
