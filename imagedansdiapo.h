#ifndef IMAGEDANSDIAPO_H
#define IMAGEDANSDIAPO_H

#include <iostream>
#include "image.h"
using namespace std;

// Classe représentant une image dans un diaporama
class ImageDansDiapo
{
private:
   int _pos; // Rang de l'image dans le tableau d'images (vector<Images>)
             // = ordre de chargement initial des images dans la table des images
   unsigned int _rang; // Rang de l'image dans le diaporama
                       // = ordre d'affichage choisi par l'utilisateur lors de la création du diaporama

public:
   ImageDansDiapo();    // Constructeur
   ~ImageDansDiapo();   // Destructeur

   int getPos() const;
   //BUT: Renvoie la position de l'image dans le tableau d'images
   int getRang() const;
   //BUT: Renvoie le rang de l'image dans le diaporama

   void setPos(int pPos);
   //BUT: Définit la position de l'image dans le tableau d'images
   void setRang(int pRang);
   //BUT: Définit le rang de l'image dans le diaporama
};

#endif // IMAGEDANSDIAPO_H
