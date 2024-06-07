#ifndef IMAGEDANSDIAPO_H
#define IMAGEDANSDIAPO_H

#include <iostream>
#include "image.h" // Inclut la classe Image nécessaire pour définir ImageDansDiapo
using namespace std;

class ImageDansDiapo
{
private:
    int _pos; // Rang de l'image dans le tableau d'images (vector<Images>)
        // BUT: Représente l'ordre de chargement initial des images dans la table des images
    unsigned int _rang;  // Rang de l'image dans le diaporama
        // BUT: Représente l'ordre d'affichage choisi par l'utilisateur lors de la création du diaporama
public:

    ImageDansDiapo(int,unsigned int);// Constructeur par défaut

    ~ImageDansDiapo();// Destructeur

    int getPos() const;
    // BUT: Renvoie la position de l'image dans le tableau d'images

    int getRang() const;
    // BUT: Renvoie le rang de l'image dans le diaporama

    void setPos(int position);
    // BUT: Définit la position de l'image dans le tableau d'images

    void setRang(int rang);
    // BUT: Définit le rang de l'image dans le diaporama
};

#endif // IMAGEDANSDIAPO_H
