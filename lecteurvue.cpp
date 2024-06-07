#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>
// Constructeur de la classe LecteurVue
LecteurVue::LecteurVue(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    // Configuration des données pour les actions dans la barre de menu
    ui->actionPantxica->setData(1);
    ui->actionThierry->setData(2);
    ui->actionYann->setData(3);
    ui->actionManu->setData(4);
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

    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));
    QObject::connect(ui->actionEnlever, SIGNAL(triggered()), c, SLOT(demandeEnlever()));
    QObject::connect(ui->actionAPropos, SIGNAL(triggered()), c, SLOT(demandeInfo()));
    QObject::connect(ui->actionVitesse,SIGNAL(triggered()),c,SLOT(changerVitesse()));

    QObject::connect(ui->actionPantxica, SIGNAL(triggered()), c, SLOT(demandeCharger()));
    QObject::connect(ui->actionManu, SIGNAL(triggered()), c, SLOT(demandeCharger()));
    QObject::connect(ui->actionThierry, SIGNAL(triggered()), c, SLOT(demandeCharger()));
    QObject::connect(ui->actionYann, SIGNAL(triggered()), c, SLOT(demandeCharger()));
}

// Méthode pour supprimer les connexions avec la présentation
void LecteurVue::supConnex(QObject *c)
{
    // Déconnexion des signaux des boutons et des actions avec les slots de la présentation
    QObject::disconnect(ui->bSuivant, SIGNAL(clicked()), c, SLOT(demandeSuivant()));
    QObject::disconnect(ui->bPrecedent, SIGNAL(clicked()), c, SLOT(demandePrecedent()));
    QObject::disconnect(ui->bLancer, SIGNAL(clicked()), c, SLOT(demandeLancer()));
    QObject::disconnect(ui->bArreter, SIGNAL(clicked()), c, SLOT(demandeArret()));
    QObject::disconnect(ui->actionVitesse,SIGNAL(triggered()),c,SLOT(changerVitesse()));

    QObject::disconnect(ui->actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));
    QObject::disconnect(ui->actionEnlever, SIGNAL(triggered()), c, SLOT(demandeEnlever()));
    QObject::disconnect(ui->actionAPropos, SIGNAL(triggered()), c, SLOT(demandeInfo()));
}

// Méthode pour mettre à jour l'interface en fonction de l'état du lecteur

void LecteurVue::majInterface(Lecteur::UnEtat e,string num,string tD,string tI,string tC,string chem)
{

    switch (e) {
    case Lecteur::suivant :
        (*this).majDiaporama(num,tD,tI,tC,chem);
        break;
    case Lecteur::precedent :
        (*this).majDiaporama(num,tD,tI,tC,chem);
        break;
    case Lecteur::automatique :
        ui->bArreter->setEnabled(true);
        ui->labMode->setText(QString::fromStdString("Mode Automatique"));
        (*this).majDiaporama(num,tD,tI,tC,chem);
        break;
    case Lecteur::charge :
        (*this).majDiaporama(num,tD,tI,tC,chem);
        ui->labMode->setText(QString::fromStdString("Mode manuel"));
        ui->bArreter->setEnabled(false);
        break;
    case Lecteur::info :
        this->afficheQMessageBox();
        break;
    case Lecteur::enlever :
        (*this).majDiaporama(num,tD,tI,tC,chem);
        break;
    case Lecteur::manuel :
        ui->bArreter->setEnabled(false);
        break;
    default: break;
    }
}

void LecteurVue::majDiaporama(string num,string tD,string tI,string tC,string chem)
{
    ui->labTitre->setText(QString::fromStdString(tI));
    ui->groupBox_2->setTitle(QString::fromStdString(tD));
    ui->labCat->setText(QString::fromStdString(tC));
    ui->labNum->setText(QString::fromStdString(num));
    QPixmap newPixmap(QString::fromStdString(chem));
    ui->labDiapo->setPixmap(newPixmap);
    ui->labDiapo->setAlignment(Qt::AlignCenter);
}


void LecteurVue::afficheQMessageBox()
{
    // Création de la boîte de dialogue QMessageBox
    QMessageBox msgBox;

    // Définition du texte à afficher dans la boîte de dialogue
    msgBox.setText("HAMCHOUCHE Kamelia LOHIER Marylou MAHSSINI Imane ");

    // Définition du titre de la boîte de dialogue
    msgBox.setWindowTitle("A PROPOS DE");

    // Définition des boutons standard de la boîte de dialogue (seul le bouton OK dans ce cas)
    msgBox.setStandardButtons(QMessageBox::Ok);

    // Définition de l'icône de la boîte de dialogue (icône d'information dans ce cas)
    msgBox.setIcon(QMessageBox::Information);

    // Exécution de la boîte de dialogue et récupération du résultat
    int result = msgBox.exec();

    // Fermeture de la boîte de dialogue si le bouton OK est cliqué
    if (result == QMessageBox::Ok) {
        msgBox.close();
    }

}


int LecteurVue::afficheQMessageBoxVitesse(int vitesseInitial)
{
    bool ok;
    int vitesse = QInputDialog::getInt(this, "CHANGEMENT DE VITESSE", "Saisir une nouvelle vitesse de défilement du diaporama :", vitesseInitial, 1, 100, 1, &ok);

    if (ok) {
        vitesseInitial = vitesse;
    }
    return vitesseInitial;
}

