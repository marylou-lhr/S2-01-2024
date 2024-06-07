#ifndef DIAPORAMA_H
#define DIAPORAMA_H

#include <iostream>
#include "imagedansdiapo.h"
using namespace std;

// Classe représentant un diaporama
class Diaporama
{
private:
    string _nom;        // Nom du diaporama
    int _vitesse;       // Vitesse de défilement du diaporama

public:
    vector<ImageDansDiapo> _placeImages; // Images du diaporama

    Diaporama();        // Constructeur
    ~Diaporama();       // Destructeur

    string getNom() const;
    //BUT: Renvoie le nom du diaporama
    int getVitesse() const;
    //BUT: Renvoie la vitesse de défilement du diaporama
    void setVitesseDefilement(int pVitesse);
    // BUT: Définit la vitesse de défilement du diaporama
    void setNom(string pNom);
    //BUT: Définit le nom du diaporama
    unsigned int nbImages() const;
    //BUT: Renvoie le nombre d'images du diaporama
};

// Alias pour un vecteur d'objets Diaporama
typedef vector<Diaporama> Diaporamas;

#endif // DIAPORAMA_H
