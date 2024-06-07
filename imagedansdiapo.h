#ifndef IMAGEDANSDIAPO_H
#define IMAGEDANSDIAPO_H

#include <iostream>
#include "image.h" // Inclut la classe Image nécessaire pour définir ImageDansDiapo
using namespace std;

class ImageDansDiapo
{
private:
    int _pos; // Rang de l'image dans le tableau d'images (vector<Images>)
              // = ordre de chargement initial des images dans la table des images
    unsigned int _rang;  // Rang de l'image dans le diaporama
                         // = ordre d'affichage choisi par l'utilisateur lors de la création du diaporama
public:
    // Constructeur par défaut
    ImageDansDiapo();
    // Destructeur
    ~ImageDansDiapo();
    // Méthode pour obtenir la position de l'image dans le tableau d'images
    int getPos() const;
    // Méthode pour obtenir le rang de l'image dans le diaporama
    int getRang() const;
    // Méthode pour définir la position de l'image dans le tableau d'images
    void setPos(int position);
    // Méthode pour définir le rang de l'image dans le diaporama
    void setRang(int rang);
};

#endif // IMAGEDANSDIAPO_H
;


