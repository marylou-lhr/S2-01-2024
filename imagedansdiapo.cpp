#include "imagedansdiapo.h"

// Constructeur par défaut de la classe ImageDansDiapo
ImageDansDiapo::ImageDansDiapo(int p, unsigned int r) : _pos(p), _rang(r)
{
}

// Destructeur de la classe ImageDansDiapo
ImageDansDiapo::~ImageDansDiapo()
{
}

// Méthode pour obtenir la position de l'image dans le diaporama
int ImageDansDiapo::getPos() const
{
    // Renvoie la position de l'image dans le diaporama
    return this->_pos;
}

// Méthode pour obtenir le rang de l'image dans le diaporama
int ImageDansDiapo::getRang() const
{
    // Renvoie le rang de l'image dans le diaporama
    return this->_rang;
}

// Méthode pour définir le rang de l'image dans le diaporama
void ImageDansDiapo::setRang(int pRang)
{
    // Définit le rang de l'image dans le diaporama
    this->_rang = pRang;
}

// Méthode pour définir la position de l'image dans le diaporama
void ImageDansDiapo::setPos(int pPos)
{
    // Définit la position de l'image dans le diaporama
    this->_pos = pPos;
}
