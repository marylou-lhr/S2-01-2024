#include "diaporama.h"

// Constructeur de la classe Diaporama
Diaporama::Diaporama() : _nom("Diaporama par défaut"), _vitesse(1)
{
}

// Destructeur de la classe Diaporama
Diaporama::~Diaporama()
{
}

// Méthode pour obtenir le titre du diaporama
string Diaporama::getNom() const
{
    return (*this)._nom;
}

// Méthode pour obtenir la vitesse du défilement du diaporama
int Diaporama::getVitesse() const
{
    return (*this)._vitesse;
}

// Méthode pour définir la vitesse du défilement du diaporama
void Diaporama::setVitesseDefilement(int pVitesse)
{
    (*this)._vitesse = pVitesse;
}

// Méthode pour définir le nom du diaporama
void Diaporama::setNom(string pNom)
{
    (*this)._nom = pNom;
}

// Méthode pour obtenir le nombre d'images dans le diaporama
unsigned int Diaporama::nbImages() const
{
    return (*this)._placeImages.size();
}
