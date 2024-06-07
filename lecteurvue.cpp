#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>

// Constructeur de la classe LecteurVue
LecteurVue::LecteurVue(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
}

// Destructeur de la classe LecteurVue
LecteurVue::~LecteurVue()
{
    delete ui;
}

// Méthode pour établir de nouvelles connexions avec la présentation
void LecteurVue::newConnex(QObject *c)
{
    // Connexion des signaux des boutons et des actions avec les slots de la présentation
    QObject::connect(ui->bSuivant, SIGNAL(clicked()), c, SLOT(demandeSuivant()));
    QObject::connect(ui->bPrecedent, SIGNAL(clicked()), c, SLOT(demandePrecedent()));
    QObject::connect(ui->bLancer, SIGNAL(clicked()), c, SLOT(demandeLancer()));
    QObject::connect(ui->bArreter, SIGNAL(clicked()), c, SLOT(demandeArreter()));

    QObject::connect(ui->actionQuitter,SIGNAL(triggered()),qApp,SLOT(quit()));
    QObject::connect(ui->actionEnlever,SIGNAL(triggered()),c,SLOT(demandeEnlever()));
    QObject::connect(ui->actionChargerDiapo,SIGNAL(triggered()),c,SLOT(demandeCharger()));
    QObject::connect(ui->actionAPropos,SIGNAL(triggered()),c,SLOT(demandeInfo()));
}

// Méthode pour supprimer les connexions avec la présentation
void LecteurVue::supConnex(QObject *c)
{
    // Déconnexion des signaux des boutons et des actions avec les slots de la présentation
    QObject::disconnect(ui->bSuivant, SIGNAL(clicked()), c, SLOT(demanderSuivant()));
    QObject::disconnect(ui->bPrecedent, SIGNAL(clicked()), c, SLOT(demanderPrecedent()));
    QObject::disconnect(ui->bLancer, SIGNAL(clicked()), c, SLOT(demanderLancer()));
    QObject::disconnect(ui->bArreter, SIGNAL(clicked()), c, SLOT(demanderArret()));

    QObject::disconnect(ui->actionQuitter,SIGNAL(triggered()),qApp,SLOT(quit()));
    QObject::disconnect(ui->actionEnlever,SIGNAL(triggered()),c,SLOT(demanderEnlever()));
    QObject::disconnect(ui->actionChargerDiapo,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->actionAPropos,SIGNAL(triggered()),c,SLOT(demanderInfo()));
}

// Méthode pour mettre à jour l'interface en fonction de l'état du lecteur
void LecteurVue::majInterfaceEtat(Lecteur::UnEtat e)
{
    // Utilisation d'une instruction switch pour déterminer l'état du lecteur
    switch (e) {
    case Lecteur::suivant :
        qDebug()<<"je demande diapo suivant "<<Qt::endl;
        break;
    case Lecteur::precedent :
        qDebug()<<"je demande diapo précédent "<<Qt::endl;
        break;
    case Lecteur::automatique :
        qDebug()<<"je demande  diaporama auto"<<Qt::endl;
        break;
    case Lecteur::charge :
        qDebug()<<"je demande de charger un diaporama"<<Qt::endl;
        break;
    case Lecteur::info :
        qDebug()<<"je demande des infos sur l'application"<<Qt::endl;
        break;
    case Lecteur::enlever :
        qDebug()<<"je demande d'enlever un diaporama"<<Qt::endl;
        break;
    case Lecteur::manuel :
        qDebug()<<"je demande d'arrêter le diaporama auto"<<Qt::endl;
        break;
    default: break;
    }
}
