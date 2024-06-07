#include "imagedansdiapo.h"

// Constructeur par défaut de la classe ImageDansDiapo
ImageDansDiapo::ImageDansDiapo() : _pos(0), _rang(0)
{
}

// Destructeur de la classe ImageDansDiapo
ImageDansDiapo::~ImageDansDiapo()
{
}

// Méthode pour obtenir la position de l'image dans le diaporama
int ImageDansDiapo::getPos() const
{
   return this->_pos;
}

// Méthode pour obtenir le rang de l'image dans le diaporama
int ImageDansDiapo::getRang() const
{
   return this->_rang;
}

// Méthode pour définir le rang de l'image dans le diaporama
void ImageDansDiapo::setRang(int pRang)
{
   this->_rang = pRang;
}

// Méthode pour définir la position de l'image dans le diaporama
void ImageDansDiapo::setPos(int pPos)
{
   this->_pos = pPos;
}



