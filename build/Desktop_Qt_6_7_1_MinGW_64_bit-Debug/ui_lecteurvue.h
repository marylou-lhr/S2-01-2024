/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionEnlever;
    QAction *actionQuitter;
    QAction *actionAPropos;
    QAction *actionPantxica;
    QAction *actionManu;
    QAction *actionYann;
    QAction *actionThierry;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *labDiapo;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labTitre;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labCat;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labNum;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *bLancer;
    QPushButton *bArreter;
    QSpacerItem *horizontalSpacer;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labMode;
    QMenuBar *menubar;
    QMenu *menuParam_tres;
    QMenu *menuCharger_diaporama;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(804, 605);
        QFont font;
        font.setPointSize(15);
        LecteurVue->setFont(font);
        actionEnlever = new QAction(LecteurVue);
        actionEnlever->setObjectName("actionEnlever");
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName("actionQuitter");
        actionAPropos = new QAction(LecteurVue);
        actionAPropos->setObjectName("actionAPropos");
        actionPantxica = new QAction(LecteurVue);
        actionPantxica->setObjectName("actionPantxica");
        actionManu = new QAction(LecteurVue);
        actionManu->setObjectName("actionManu");
        actionYann = new QAction(LecteurVue);
        actionYann->setObjectName("actionYann");
        actionThierry = new QAction(LecteurVue);
        actionThierry->setObjectName("actionThierry");
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_5);

        labDiapo = new QLabel(groupBox_2);
        labDiapo->setObjectName("labDiapo");
        labDiapo->setEnabled(true);
        labDiapo->setLineWidth(1);
        labDiapo->setTextFormat(Qt::RichText);
        labDiapo->setScaledContents(false);

        verticalLayout->addWidget(labDiapo);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");

        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_6);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labTitre = new QLabel(centralwidget);
        labTitre->setObjectName("labTitre");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labTitre->sizePolicy().hasHeightForWidth());
        labTitre->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        labTitre->setFont(font1);
        labTitre->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labTitre);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        labCat = new QLabel(centralwidget);
        labCat->setObjectName("labCat");
        sizePolicy.setHeightForWidth(labCat->sizePolicy().hasHeightForWidth());
        labCat->setSizePolicy(sizePolicy);
        labCat->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labCat);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        labNum = new QLabel(centralwidget);
        labNum->setObjectName("labNum");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labNum->sizePolicy().hasHeightForWidth());
        labNum->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        labNum->setFont(font2);
        labNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labNum);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(600, 90));
        horizontalLayout_8 = new QHBoxLayout(groupBox);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_3 = new QSpacerItem(1, 10, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        bLancer = new QPushButton(groupBox);
        bLancer->setObjectName("bLancer");
        sizePolicy.setHeightForWidth(bLancer->sizePolicy().hasHeightForWidth());
        bLancer->setSizePolicy(sizePolicy);
        bLancer->setMinimumSize(QSize(130, 30));
        bLancer->setMaximumSize(QSize(130, 30));
        QFont font3;
        font3.setPointSize(11);
        bLancer->setFont(font3);

        horizontalLayout->addWidget(bLancer);

        bArreter = new QPushButton(groupBox);
        bArreter->setObjectName("bArreter");
        bArreter->setEnabled(true);
        sizePolicy.setHeightForWidth(bArreter->sizePolicy().hasHeightForWidth());
        bArreter->setSizePolicy(sizePolicy);
        bArreter->setMinimumSize(QSize(130, 25));
        bArreter->setMaximumSize(QSize(130, 30));
        bArreter->setFont(font3);
        bArreter->setCheckable(false);
        bArreter->setAutoDefault(false);
        bArreter->setFlat(false);

        horizontalLayout->addWidget(bArreter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bPrecedent = new QPushButton(groupBox);
        bPrecedent->setObjectName("bPrecedent");
        bPrecedent->setMinimumSize(QSize(130, 30));
        bPrecedent->setMaximumSize(QSize(130, 30));
        bPrecedent->setFont(font3);

        horizontalLayout->addWidget(bPrecedent);

        bSuivant = new QPushButton(groupBox);
        bSuivant->setObjectName("bSuivant");
        bSuivant->setMinimumSize(QSize(130, 30));
        bSuivant->setMaximumSize(QSize(130, 30));
        bSuivant->setFont(font3);

        horizontalLayout->addWidget(bSuivant);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(81, 10, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(groupBox);

        labMode = new QLabel(centralwidget);
        labMode->setObjectName("labMode");
        sizePolicy.setHeightForWidth(labMode->sizePolicy().hasHeightForWidth());
        labMode->setSizePolicy(sizePolicy);
        labMode->setMinimumSize(QSize(100, 20));
        labMode->setMaximumSize(QSize(200, 25));
        labMode->setFont(font3);
        labMode->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(labMode);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 33));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName("menuParam_tres");
        menuCharger_diaporama = new QMenu(menuParam_tres);
        menuCharger_diaporama->setObjectName("menuCharger_diaporama");
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuAide = new QMenu(menubar);
        menuAide->setObjectName("menuAide");
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName("statusbar");
        LecteurVue->setStatusBar(statusbar);
        QWidget::setTabOrder(bLancer, bArreter);

        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParam_tres->addAction(menuCharger_diaporama->menuAction());
        menuParam_tres->addAction(actionEnlever);
        menuCharger_diaporama->addAction(actionPantxica);
        menuCharger_diaporama->addAction(actionManu);
        menuCharger_diaporama->addAction(actionYann);
        menuCharger_diaporama->addAction(actionThierry);
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionAPropos);

        retranslateUi(LecteurVue);

        bLancer->setDefault(true);
        bArreter->setDefault(true);


        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        actionEnlever->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        actionAPropos->setText(QCoreApplication::translate("LecteurVue", "A propos de...", nullptr));
        actionPantxica->setText(QCoreApplication::translate("LecteurVue", "Pantxica", nullptr));
        actionManu->setText(QCoreApplication::translate("LecteurVue", "Manu", nullptr));
        actionYann->setText(QCoreApplication::translate("LecteurVue", "Yann", nullptr));
        actionThierry->setText(QCoreApplication::translate("LecteurVue", "Thierry", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LecteurVue", "Titre Diaporama", nullptr));
        labDiapo->setText(QCoreApplication::translate("LecteurVue", "<html><head/><body><p align=\"center\"><img src=\":/diapo/images/Disney_0.gif\"/></p></body></html>", nullptr));
        labTitre->setText(QCoreApplication::translate("LecteurVue", "Titre", nullptr));
        labCat->setText(QCoreApplication::translate("LecteurVue", "Cat\303\251gorie", nullptr));
        labNum->setText(QCoreApplication::translate("LecteurVue", "1/1", nullptr));
        groupBox->setTitle(QString());
        bLancer->setText(QCoreApplication::translate("LecteurVue", "Lancer", nullptr));
        bArreter->setText(QCoreApplication::translate("LecteurVue", "Arreter", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Reculer", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Avancer", nullptr));
        labMode->setText(QCoreApplication::translate("LecteurVue", "Mode manuel", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuCharger_diaporama->setTitle(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
