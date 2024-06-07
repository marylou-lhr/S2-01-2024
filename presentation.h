#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <QObject> // Inclut la classe QObject nécessaire pour définir Presentation
#include "lecteur.h" // Inclut la classe Lecteur nécessaire pour définir Presentation

class LecteurVue; // Déclaration de la classe LecteurVue

class Presentation : public QObject // Définit la classe Presentation comme une sous-classe de QObject
{
    Q_OBJECT // Macro Qt pour activer le mécanisme de signaux et slots

public:
    explicit Presentation(QObject *parent = nullptr); // Constructeur de Presentation

public: // Section publique pour gérer les attributs privés
    Lecteur* getModele();
    //BUT: Méthode pour obtenir le modèle de lecteur
    LecteurVue* getVue();
    //BUT: Méthode pour obtenir la vue du lecteur
    void setModele(Lecteur *m);
    //BUT: Méthode pour définir le modèle de lecteur
    void setVue(LecteurVue *v);
    //BUT: Méthode pour définir la vue du lecteur

public slots: // Slots déclenchés par la vue
    void demandeSuivant();
    //BUT: Slot pour gérer la demande de lecture de la diapositive suivante
    void demandePrecedent();
    //BUT: Slot pour gérer la demande de lecture de la diapositive précédente
    void demandeLancer();
    //BUT: Slot pour gérer la demande de démarrage de la lecture
    void demandeArreter();
    //BUT: Slot pour gérer la demande d'arrêt de la lecture
    void demandeCharger();
    //BUT: Slot pour gérer la demande de chargement de diaporama
    void demandeEnlever();
    //BUT: Slot pour gérer la demande de suppression de diaporama
    void demandeInfo();
    //BUT: Slot pour gérer la demande d'information sur le diaporama
    void changerVitesse();
    //BUT: changer la vitesse du diapo

private:
    Lecteur *_leModele; // Pointeur vers le modèle de lecteur
    LecteurVue *_laVue; // Pointeur vers la vue de lecteur
    bool arret;//suivre l'état d'arrêt du diapo
};
#endif // PRESENTATION_H


