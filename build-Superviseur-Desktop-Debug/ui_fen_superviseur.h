/********************************************************************************
** Form generated from reading UI file 'fen_superviseur.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEN_SUPERVISEUR_H
#define UI_FEN_SUPERVISEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEN_Superviseur
{
public:
    QWidget *centralWidget;
    QLabel *ConfigurerLeSuperviseur;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *PB_Annuler;
    QPushButton *PB_Valider;
    QFrame *line;
    QLineEdit *LE_AdresseIP;
    QLineEdit *LE_Port;
    QLineEdit *LE_NomSite;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FEN_Superviseur)
    {
        if (FEN_Superviseur->objectName().isEmpty())
            FEN_Superviseur->setObjectName(QStringLiteral("FEN_Superviseur"));
        FEN_Superviseur->resize(749, 338);
        centralWidget = new QWidget(FEN_Superviseur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ConfigurerLeSuperviseur = new QLabel(centralWidget);
        ConfigurerLeSuperviseur->setObjectName(QStringLiteral("ConfigurerLeSuperviseur"));
        ConfigurerLeSuperviseur->setGeometry(QRect(70, 20, 241, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial Unicode MS"));
        font.setPointSize(11);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        ConfigurerLeSuperviseur->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 61, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 31, 16));
        PB_Annuler = new QPushButton(centralWidget);
        PB_Annuler->setObjectName(QStringLiteral("PB_Annuler"));
        PB_Annuler->setGeometry(QRect(20, 230, 75, 23));
        PB_Valider = new QPushButton(centralWidget);
        PB_Valider->setObjectName(QStringLiteral("PB_Valider"));
        PB_Valider->setGeometry(QRect(270, 230, 75, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(363, 10, 16, 281));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        LE_AdresseIP = new QLineEdit(centralWidget);
        LE_AdresseIP->setObjectName(QStringLiteral("LE_AdresseIP"));
        LE_AdresseIP->setGeometry(QRect(100, 110, 91, 21));
        LE_Port = new QLineEdit(centralWidget);
        LE_Port->setObjectName(QStringLiteral("LE_Port"));
        LE_Port->setGeometry(QRect(100, 150, 91, 21));
        LE_NomSite = new QLineEdit(centralWidget);
        LE_NomSite->setObjectName(QStringLiteral("LE_NomSite"));
        LE_NomSite->setGeometry(QRect(100, 70, 181, 21));
        FEN_Superviseur->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FEN_Superviseur);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 749, 21));
        FEN_Superviseur->setMenuBar(menuBar);
        statusBar = new QStatusBar(FEN_Superviseur);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FEN_Superviseur->setStatusBar(statusBar);

        retranslateUi(FEN_Superviseur);

        QMetaObject::connectSlotsByName(FEN_Superviseur);
    } // setupUi

    void retranslateUi(QMainWindow *FEN_Superviseur)
    {
        FEN_Superviseur->setWindowTitle(QApplication::translate("FEN_Superviseur", "FEN_Superviseur", 0));
        ConfigurerLeSuperviseur->setText(QApplication::translate("FEN_Superviseur", "Ajouter un nouveau site distant", 0));
        label->setText(QApplication::translate("FEN_Superviseur", "Nom du site:", 0));
        label_2->setText(QApplication::translate("FEN_Superviseur", "Adresse IP:", 0));
        label_3->setText(QApplication::translate("FEN_Superviseur", "Port:", 0));
        PB_Annuler->setText(QApplication::translate("FEN_Superviseur", "Annuler", 0));
        PB_Valider->setText(QApplication::translate("FEN_Superviseur", "Sauvegarder", 0));
    } // retranslateUi

};

namespace Ui {
    class FEN_Superviseur: public Ui_FEN_Superviseur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEN_SUPERVISEUR_H
