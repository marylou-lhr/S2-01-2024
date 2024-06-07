#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>

// Constructeur
Presentation::Presentation(QObject *parent)
    : QObject{parent}, _leModele(), _laVue()
{

}

// Obtient le modèle (Lecteur)
Lecteur *Presentation::getModele()
{
    return _leModele;
}

// Obtient la vue (LecteurVue)
LecteurVue *Presentation::getVue()
{
    return _laVue;
}

// Définit le modèle (Lecteur)
void Presentation::setModele(Lecteur *m)
{
    _leModele = m;
}

// Définit la vue (LecteurVue)
void Presentation::setVue(LecteurVue *v)
{
    _laVue = v;
}
void Presentation::demandeSuivant()
{
    // Demande au modèle (Lecteur) de passer à l'image suivante
    _leModele->setEtat(Lecteur::suivant);
    _leModele->avancer();
    // Met à jour l'interface avec les informations de la nouvelle image
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandePrecedent()
{
    // Demande au modèle (Lecteur) de revenir à l'image précédente
    _leModele->setEtat(Lecteur::precedent);
    _leModele->reculer();
    // Met à jour l'interface avec les informations de la nouvelle image
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandeLancer()
{
    // Demande au modèle (Lecteur) de démarrer le diaporama automatique
    _leModele->setEtat(Lecteur::automatique);
    // Met à jour l'interface avec l'état actuel du modèle
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandeArreter()
{
    // Demande au modèle (Lecteur) d'arrêter le diaporama automatique
    _leModele->setEtat(Lecteur::manuel);
    // Met à jour l'interface avec l'état actuel du modèle
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandeCharger()
{
    // Demande au modèle (Lecteur) de charger un nouveau diaporama
    _leModele->setEtat(Lecteur::charge);
    // Récupère l'action (bouton) qui a déclenché la demande
    QAction *action = qobject_cast<QAction *>(sender());
    // Charge le diaporama correspondant à l'action sélectionnée
    _leModele->changerDiaporama(action->data().toInt());
    // Met à jour l'interface avec les informations du nouveau diaporama
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandeEnlever()
{
    // Demande au modèle (Lecteur) de supprimer le diaporama actuel
    _leModele->setEtat(Lecteur::enlever);
    // Supprime le diaporama actuel
    _leModele->changerDiaporama(0);
    // Met à jour l'interface pour afficher une vue vide
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}

void Presentation::demandeInfo()
{
    // Demande d'afficher des informations sur l'application
    _leModele->setEtat(Lecteur::info);
    // Met à jour l'interface pour afficher les informations
    _laVue->majInterface(_leModele->getEtat(), _leModele->getNum(), _leModele->getNomD(), _leModele->getImageCourante(), _leModele->getCategorieImageCourante(), _leModele->getCheminImageCourante());
}
