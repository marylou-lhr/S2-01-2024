#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>

// Constructeur de la classe Presentation
Presentation::Presentation(QObject *parent)
    : QObject{parent}
{
}

// Méthode pour obtenir le modèle
Lecteur *Presentation::getModele()
{
    return _leModele;
}

// Méthode pour obtenir la vue
LecteurVue *Presentation::getVue()
{
    return _laVue;
}

// Méthode pour définir le modèle
void Presentation::setModele(Lecteur *m)
{
    _leModele = m;
}

// Méthode pour définir la vue
void Presentation::setVue(LecteurVue *v)
{
    _laVue = v;
}

// Méthode pour demander le diaporama suivant
void Presentation::demandeSuivant()
{
    _leModele->setEtat(Lecteur::suivant); // Définit l'état du lecteur comme suivant
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander le diaporama précédent
void Presentation::demandePrecedent()
{
    _leModele->setEtat(Lecteur::precedent); // Définit l'état du lecteur comme précédent
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander de lancer le diaporama automatique
void Presentation::demandeLancer()
{
    _leModele->setEtat(Lecteur::automatique); // Définit l'état du lecteur comme automatique
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander d'arrêter le diaporama automatique
void Presentation::demandeArreter()
{
    _leModele->setEtat(Lecteur::manuel); // Définit l'état du lecteur comme manuel
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander de charger un diaporama
void Presentation::demandeCharger()
{
    _leModele->setEtat(Lecteur::charge); // Définit l'état du lecteur comme chargé
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander d'enlever un diaporama
void Presentation::demandeEnlever()
{
    _leModele->setEtat(Lecteur::enlever); // Définit l'état du lecteur comme à enlever
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}

// Méthode pour demander des informations sur l'application
void Presentation::demandeInfo()
{
    _leModele->setEtat(Lecteur::info); // Définit l'état du lecteur comme information
    _laVue->majInterfaceEtat(_leModele->getEtat()); // Met à jour l'interface avec le nouvel état
}
