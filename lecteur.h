#ifndef LECTEUR_H
#define LECTEUR_H
#include <iostream>
#include "Diaporama.h"
using namespace std;

class Lecteur
{

public:
    enum UnEtat {vide,manuel,automatique,suivant,precedent,charge,info,enlever};

private:
    UnEtat _etat;
public:
    Lecteur(); // Constructeur
    ~Lecteur(); // Destructeur

    // Chargement du tableau des diaporamas avec des diaporamas préalablement construits 'en dur'.
    // Dans une version ultérieure, le diaporama courant affiché par le Lecteur de diaporamas sera chargé à partir d'une base de données.
    void charger(Diaporamas& pDiaporama);

    // Chargement du tableau des images avec seules les informations textuelles de quelques images.
    // Dans une version ultérieure, ces informations seront stockées dans une Base de Données.
    void charger(Images& pImages);

    // Incrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void avancer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante);

    // Décrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void reculer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante);

    void setEtat(UnEtat pEpEat);
    UnEtat getEtat() const;


    // Saisie du choix d'action de l'utilisateur vis-à-vis de l'image et diaporama courants
    void verifChoix(char& pChoixAction);

    // Retourne un numéro de diaporama choisi par l'utilisateur (dans la liste des diaporamas existants)
    unsigned int saisieVerifChoixDiaporama(const Diaporamas& pDiaporamas);

    // Affichage à l'écran des informations de l'image courante dans son diaporama
    void afficherImageCourante(const Diaporama& pDiaporama, unsigned int pImageCourante, Image* pImage);

    // Selon le choix de l'utilisateur, réalise une des actions : Avancer, Reculer, Choisir un autre diaporama, Quitter
    void choixAction(char pChoixAction, const Diaporamas& pDiaporamas, unsigned int& pDiaporamaCourant,
                     unsigned int& pImageCourante, const Images& pImages);
};
#endif //LECTEUR_H
