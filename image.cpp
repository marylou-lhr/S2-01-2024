#include "image.h"

// Constructeur par défaut de la classe Image
Image::Image()
{
}

// Destructeur de la classe Image
Image::~Image()
{
}

// Méthode pour créer une image avec une catégorie, un titre et un chemin spécifiés
void Image::creationImage(string pCategorie, string pTitre, string pChemin)
{
    // Appel des méthodes set pour définir la catégorie, le titre et le chemin de l'image
    setCategorie(pCategorie);
    setTitre(pTitre);
    setChemin(pChemin);
}

// Méthode pour obtenir la catégorie de l'image
string Image::getCategorie() const
{
    return (*this)._categorie;
}

// Méthode pour obtenir le titre de l'image
string Image::getTitre() const
{
    return (*this)._titre;
}

// Méthode pour obtenir le chemin de l'image
string Image::getChemin() const
{
    return (*this)._chemin;
}

// Méthode pour définir le titre de l'image
void Image::setTitre(string pTitre)
{
    (*this)._titre = pTitre;
}

// Méthode pour définir la catégorie de l'image
void Image::setCategorie(string pCategorie)
{
    (*this)._categorie = pCategorie;
}

// Méthode pour définir le chemin de l'image
void Image::setChemin(string pChemin)
{
    (*this)._chemin = pChemin;
}

// Méthode pour afficher les informations de l'image
void Image::afficher()
{
    cout << "image(titre:" << this->getTitre() << ", categorie:"
         << this->getCategorie() << ", chemin:" << this->getChemin() << ")" << endl;
}
