#include "image.h"

Image::Image()
{
}

Image::~Image()
{
}

void Image::creationImage(string pCategorie, string pTitre, string pChemin)
{
    // Initialise les attributs de l'image avec les valeurs fournies
    setCategorie(pCategorie);
    setTitre(pTitre);
    setChemin(pChemin);
}

string Image::getCategorie() const
{
    // Renvoie la catégorie de l'image
    return (*this)._categorie;
}

string Image::getTitre() const
{
    // Renvoie le titre de l'image
    return (*this)._titre;
}

string Image::getChemin() const
{
    // Renvoie le chemin de l'image
    return (*this)._chemin;
}

void Image::setTitre(string nouvTitre)
{
    // Définit le titre de l'image
    (*this)._titre = nouvTitre;
}

void Image::setCategorie(string nouvCat)
{
    // Définit la catégorie de l'image
    (*this)._categorie = nouvCat;
}

void Image::setChemin(string nouvChem)
{
    // Définit le chemin de l'image
    (*this)._chemin = nouvChem;
}

void Image::afficher()
{
    // Affiche les informations sur l'image
    cout << "image(titre:" << this->getTitre() << ", categorie:"
         << this->getCategorie() << ", chemin:" << this->getChemin() << ")" << endl;
}
