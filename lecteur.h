#ifndef LECTEUR_H
#define LECTEUR_H

#include <iostream>
#include "diaporama.h"
using namespace std;

class Lecteur
{

public:
    enum UnEtat {vide, manuel, automatique, suivant, precedent, charge, info, enlever};

private:
    UnEtat _etat;
    Diaporama* diaporama;
    unsigned int RangImageCourante;
    unsigned int idDiaporama;

public:
    Lecteur(); // Constructeur
    ~Lecteur(); // Destructeur

    void avancer();
    // BUT: Incrémente la position de l'image courante dans le diaporama

    void reculer();
    // BUT: Décrémente la position de l'image courante dans le diaporama

    void setEtat(UnEtat pEtat);
    // BUT: Définit l'état du lecteur

    UnEtat getEtat() const;
    // BUT: Renvoie l'état actuel du lecteur

    unsigned int getIdDiaporama() const;
    // BUT: Renvoie l'identifiant du diaporama courant

    Diaporama* getDiaporama() const;
    // BUT: Renvoie le pointeur vers le diaporama courant

    unsigned int getRangImageCourante() const;
    // BUT: Renvoie le rang de l'image courante dans le diaporama

    string getImageCourante() const;
    // BUT: Renvoie le chemin de l'image courante

    string getCategorieImageCourante() const;
    // BUT: Renvoie la catégorie de l'image courante

    string getCheminImageCourante() const;
    // BUT: Renvoie le chemin de l'image courante

    void setRangImageCourante(unsigned int pRangImageCourante);
    // BUT: Définit le rang de l'image courante dans le diaporama

    unsigned int nbImages() const;
    // BUT: Renvoie le nombre d'images dans le diaporama courant

    bool estVide() const;
    // BUT: Vérifie si le lecteur est vide (sans diaporama chargé)

    void setDiaporama(Diaporama* pDiaporama);
    // BUT: Définit le diaporama courant

    void setIdDiaporama(unsigned int pIdDiaporama);
    // BUT: Définit l'identifiant du diaporama courant

    void changerDiaporama(unsigned int pId);
    // BUT: Change le diaporama courant

    void afficherImageCourante(const Diaporama& pDiaporama, unsigned int pImageCourante, Image* pImage);
    // BUT: Affiche les informations de l'image courante

    string getNomD();
    // BUT: Renvoie le nom du diaporama courant

    string getNum();
    // BUT: Renvoie le numéro de l'image courante

    void viderLecteur();
    // BUT: Vide le lecteur en libérant la mémoire allouée au diaporama courant

private:
    void chargerDiaporamaCourant();
    // BUT: Charge le diaporama courant
};

#endif // LECTEUR_H
