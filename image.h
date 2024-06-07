#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
#include <vector>
using namespace std;

// Classe représentant une image
class Image
{
private:
   string _titre;        // Titre de l'image
   string _categorie;    // Catégorie de l'image
   string _chemin;       // Chemin de l'image

public:
   Image();              // Constructeur
   ~Image();             // Destructeur

   // Méthode pour creer l'image avec ses attributs
   void creationImage(string pCategorie, string pTitre, string pChemin);

   string getCategorie() const;
   //BUT: Renvoie la catégorie de l'image
   string getTitre() const;
   //BUT: Renvoie le titre de l'image
   string getChemin() const;
   //BUT: Renvoie le chemin de l'image

   void setTitre(string pTitre);
   //BUT: Définit le titre de l'image
   void setCategorie(string pCategorie);
   //BUT: Définit la catégorie de l'image
   void setChemin(string pChemin);
   //BUT: Définit le chemin de l'image

   void afficher();
   //BUT: Affiche les informations de l'image
};

// Alias pour un vecteur de pointeurs d'objets Image
typedef vector<Image*> Images;

#endif // IMAGE_H
