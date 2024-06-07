#include "lecteur.h"
#include "diaporama.h"
#include "imagedansdiapo.h"
#include "image.h"
#include <QDebug>

// Constructeur par défaut de la classe Lecteur
Lecteur::Lecteur(): _etat(vide), diaporama(nullptr)
{
}

// Destructeur de la classe Lecteur
Lecteur::~Lecteur()
{
    // Si le diaporama n'est pas vide, le vider et le supprimer
    if (getDiaporama() != nullptr)
    {
        viderLecteur();
        delete diaporama;
    }
}

// Méthode pour obtenir le nombre d'images dans le diaporama
unsigned int Lecteur::nbImages() const
{
    // Si le lecteur est vide, lancer une exception
    if (estVide())
    {
        throw string("lecteur vide");
    }
    return diaporama->nbImages();
}

// Méthode pour avancer à l'image suivante dans le diaporama
bool Lecteur::avancer()
{
    if (!estVide())
    {
        if (getRangImageCourante() == nbImages()-1)
        {
            if (this->getEtat()==automatique)
            {
                return false;
            }
            else
            {
                setRangImageCourante(0);
                return true;
            }
        }
        else
        {
            setRangImageCourante(getRangImageCourante() + 1);
            return true;
        }
    }
}

// Méthode pour reculer à l'image précédente dans le diaporama
void Lecteur::reculer()
{
    if (!estVide())
    {
        if (getRangImageCourante() == 0)
        {
            setRangImageCourante(nbImages() - 1);
        }
        else {
            setRangImageCourante(getRangImageCourante() - 1);
        }
    }
}

// Méthode pour définir l'état du lecteur
void Lecteur::setEtat(UnEtat etat)
{
    (*this)._etat = etat;
}

// Méthode pour obtenir l'état du lecteur
Lecteur::UnEtat Lecteur::getEtat() const
{
    return (*this)._etat;
}

// Méthode pour obtenir l'identifiant du diaporama actuel
unsigned int Lecteur::getIdDiaporama() const
{
    return idDiaporama; // valeur >= 0
}

// Méthode pour obtenir le rang de l'image courante dans le diaporama
unsigned int Lecteur::getRangImageCourante() const
{
    // Si le lecteur est vide ou s'il n'y a pas d'images dans le diaporama, lancer une exception
    if (estVide() || (!estVide() && nbImages() == 0))
    {
        throw string("pas d'image courante : lecteur vide ou diaporama vide");
    }
    return RangImageCourante;
}

// Méthode pour obtenir le titre de l'image courante dans le diaporama
string Lecteur::getImageCourante() const
{
    if (estVide() || (!estVide() && nbImages() == 0))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD = diaporama->_placeImages.at(getRangImageCourante());
    return diaporama->getImage().at(imD->getPos())->getTitre();
}

// Méthode pour obtenir la catégorie de l'image courante dans le diaporama
string Lecteur::getCategorieImageCourante() const
{
    if (estVide() || (!estVide() && nbImages() == 0))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD = diaporama->_placeImages.at(getRangImageCourante());
    return diaporama->getImage().at(imD->getPos())->getCategorie();
}

// Méthode pour obtenir le chemin de l'image courante dans le diaporama
string Lecteur::getCheminImageCourante() const
{
    if (estVide() || (!estVide() && nbImages() == 0))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD = diaporama->_placeImages.at(getRangImageCourante());
    return diaporama->getImage().at(imD->getPos())->getChemin();
}

// Méthode pour vérifier si le lecteur est vide
bool Lecteur::estVide() const
{
    return (getDiaporama() == nullptr);
}

// Méthode pour obtenir le diaporama actuel
Diaporama* Lecteur::getDiaporama() const
{
    return diaporama;   // peut être nullptr
}

// Méthode pour définir le diaporama actuel
void Lecteur::setDiaporama(Diaporama* pDiaporama)
{
    diaporama = pDiaporama;
}

// Méthode pour définir le rang de l'image courante dans le diaporama
void Lecteur::setRangImageCourante(unsigned int pRImageCourante)
{
    RangImageCourante= pRImageCourante;
}

// Méthode pour définir l'identifiant du diaporama actuel
void Lecteur::setIdDiaporama(unsigned int pIdDiaporama)
{
    idDiaporama = pIdDiaporama;
    diaporama->setId(pIdDiaporama);
}

// Méthode pour charger les images associées au diaporama courant
void Lecteur::chargerDiaporamaCourant()
{
    /* BUT: Charger les images associées au diaporama courant */
    diaporama->charger();
    if (nbImages() != 0)
    {
        setRangImageCourante(0);
    }
}

// Méthode pour changer le diaporama courant
void Lecteur::changerDiaporama(unsigned int pId)
{
    /* BUT: Charger les informations et images associées au diaporama courant
       Dans une version ultérieure, le seul paramètre sera le numéro ou l'identifiant du diaporama choisi,
       les autres informations proviendront de la Base de Données */

    if (!estVide())
    {
        diaporama->vider();
    }
    else
    {
        diaporama = new Diaporama();
    }
    setIdDiaporama(pId);
    diaporama->setId(pId);
    chargerDiaporamaCourant(); // charge les images et la position de l'image courante
}

// Méthode pour afficher l'image courante
void Lecteur::afficherImageCourante(const Diaporama& pDiaporama, unsigned int pImageCourante, Image* pImage)
{
    cout << endl << endl;
    cout << "DIAPORAMA : " << pDiaporama.getNom() << endl << endl;
    cout << pDiaporama._placeImages[pImageCourante]->getRang() << " sur " <<  pDiaporama.nbImages() << " / ";
    pImage->afficher();
}

// Méthode pour obtenir le nom du diaporama courant
string Lecteur::getNomD()
{
    return diaporama->getNom();
}

// Méthode pour obtenir le numéro de l'image courante
string Lecteur::getNum()
{
    return  (std::to_string(diaporama->_placeImages[RangImageCourante]->getRang())+" sur "+(std::to_string(diaporama->nbImages())));
}

// Méthode pour vider le lecteur
void Lecteur::viderLecteur()
{
    // Supprime les images du diaporama et réinitialise les attributs du lecteur
    if (!estVide())
    {
        diaporama->vider();
        setDiaporama(nullptr);
        setIdDiaporama(0);
    }
}

int Lecteur::getVitesseDiap() const
{
    return this->diaporama->getVitesse();
}
