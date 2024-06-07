#include "diaporama.h"

Diaporama::Diaporama(): _nom("Diaporama par défaut"),_vitesse(1)
{
    (*this).chargerImages(_image);
}

Diaporama::~Diaporama()
{
}

Images Diaporama::getImage() const
{
    return _image;
}
//BUT: Renvoie les images du diaporama

string Diaporama::getNom()const
{
    return (*this)._nom;
}
//BUT: Renvoie le nom du diaporama

int Diaporama::getVitesse() const
{
    return (*this)._vitesse;
}
//BUT: Renvoie la vitesse de défilement du diaporama

unsigned int Diaporama::getId() const
{
    return _id;
}
//BUT: Renvoie l'ID du diaporama

void Diaporama::setVitesse(int vitesse)
{
    (*this)._vitesse=vitesse;
}
//BUT: Définit la vitesse de défilement du diaporama

void Diaporama::setNom(string nom)
{
    (*this)._nom=nom;
}
//BUT: Définit le nom du diaporama

void Diaporama::setId(unsigned int pId)
{
    _id = pId;
}
//BUT: Définit l'ID du diaporama

unsigned int Diaporama::nbImages()const
{
    return (*this)._placeImages.size();
}
//BUT: Renvoie le nombre d'images dans le diaporama

void Diaporama::ajouterImageEnFin(ImageDansDiapo* pImage)
{
    _placeImages.push_back(pImage);
    // post-condition : nbImages() > 0
}
//BUT: Ajoute une image à la fin du diaporama

void Diaporama::enleverImageEnFin()
{
    if (nbImages() != 0)
    {
        _placeImages.pop_back();
    }
    // post-condition : nbImages() >= 0
}
//BUT: Supprime l'image à la fin du diaporama

void Diaporama::vider()
{
    unsigned int taille = nbImages();
    for (unsigned int i = 0; i < taille ; i++)
    {
        enleverImageEnFin();
    }
    // post-condition : nbImages() == 0
}
//BUT: Vide le diaporama de toutes ses images

void Diaporama::charger()
{
    ImageDansDiapo* imageACharger;
    switch(_id) {
    case 0 :{
        (*this).setNom("Diaporama par defaut");
        (*this).setVitesse(1);
        imageACharger= new ImageDansDiapo(0,1);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 1 : {
        (*this).setNom("Diaporama Pantxika");
        (*this).setVitesse(2);
        imageACharger= new ImageDansDiapo(4,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,1);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 2 :{
        (*this).setNom("Diaporama Thierry");
        (*this).setVitesse(4);
        imageACharger= new ImageDansDiapo(4,1);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,4);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 3 :{
        (*this).setNom("Diaporama Yann");
        (*this).setVitesse(3);
        imageACharger= new ImageDansDiapo(4,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,1);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,3);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 4 :{
        (*this).setNom("Diaporama Manu");
        (*this).setVitesse(1);
        imageACharger= new ImageDansDiapo(4,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,1);
        ajouterImageEnFin(imageACharger);
    default : break;}
    }

    trierParRangCroissant();  // selon le rang de l'image dans le diaporama

    // post-condition : nbImages() >= 0
}
//BUT: Charge les images associées au diaporama courant
void Diaporama::chargerImages(Images& pImages) {
    // Charge les images associées au diaporama
    // Crée chaque image et les ajoute à la liste d'images du diaporama

    Image* imageACharger = new Image();
    imageACharger->creationImage("objet", "Tapis", ":/diapo/images/Disney_tapis.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("personnage", "Blanche Neige", ":/diapo/images/Disney_4.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("personnage", "Alice", ":/diapo/images/Disney_2.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("animal", "Mickey", ":/diapo/images/Disney_19.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("personnage", "Pinnochio", ":/diapo/images/Disney_29.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("objet", "chateau", ":/diapo/images/Disney_0.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("personnage", "Minnie", ":/diapo/images/Disney_14.gif");
    pImages.push_back(imageACharger);

    imageACharger = new Image();
    imageACharger->creationImage("animal", "Bambi", ":/diapo/images/Disney_3.gif");
    pImages.push_back(imageACharger);
}

void Diaporama::trierParRangCroissant()
{
    // Trie les images du diaporama par rang croissant

    ImageDansDiapo* pteurImage;
    unsigned int taille = nbImages();
    for (unsigned int ici = taille - 1; ici >= 1; ici--)
    {
        // Fait monter la bulle ici = déplacer l'élément de rang le plus grand en position ici
        // par échanges successifs
        for (unsigned int i = 0; i < ici; i++)
        {
            if (_placeImages[i]->getRang() > _placeImages[i + 1]->getRang())
            {
                // Échange les 2 éléments
                pteurImage = _placeImages[i];
                _placeImages[i] = _placeImages[i + 1];
                _placeImages[i + 1] = pteurImage;
            }
        }
    }
}
