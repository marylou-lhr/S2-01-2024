#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <iostream>
#include "imagedansdiapo.h"
#include "database.h"
using namespace std;

// Classe représentant un diaporama
class Diaporama
{
private:
    string _nom;        // Nom du diaporama
    int _vitesse;       // Vitesse de défilement du diaporama
    Images _image;
    unsigned int _id;
    void trierParRangCroissant();
    Database *db;

public:
    vector<ImageDansDiapo*> _placeImages; // Images du diaporama

    Diaporama();        // Constructeur
    ~Diaporama();       // Destructeur

    // Chargement du tableau des diaporamas avec des diaporamas préalablement construits 'en dur'

    // Définit le nom du diaporama
    void setNom(string pNom);
    //BUT: Définit le nom du diaporama

    string getNom() const;
    //BUT: Renvoie le nom du diaporama

    int getVitesse() const;
    //BUT: Renvoie la vitesse de défilement du diaporama

    void setVitesse(int pVitesse);
    //BUT: Définit la vitesse de défilement du diaporama

    Images getImage() const;
    //BUT: Renvoie la collection d'images du diaporama

    // Définit l'identifiant du diaporama
    void setId(unsigned int pId);
    //BUT: Définit l'identifiant du diaporama

    unsigned int getId() const;
    //BUT: Renvoie l'identifiant du diaporama

    unsigned int nbImages() const;
    //BUT: Renvoie le nombre d'images du diaporama

    void vider();
    //BUT: Vide la collection d'images du diaporama

    void ajouterImageEnFin(ImageDansDiapo* pImage);
    //BUT: Ajoute une image à la fin du diaporama

    void enleverImageEnFin();
    //BUT: Enlève une image à la fin du diaporama

    void charger();
    //BUT: Charge les images associées au diaporama courant (d'identifiant id) à partir de la collection pImages

    // Charge les images associées au diaporama à partir de la collection pImages
    void chargerImages(Images& pImages);
    //BUT: Charge les images associées au diaporama à partir de la collection pImages

};

// Alias pour un vecteur d'objets Diaporama
typedef vector<Diaporama> Diaporamas;

#endif // DIAPORAMA_H
