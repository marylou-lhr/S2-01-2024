#include "lecteur.h"
#include "diaporama.h"
#include "imagedansdiapo.h"
#include "image.h"


Lecteur::Lecteur():_mode("manuel"),_etat(false)
{
}

Lecteur::~Lecteur()
{
}


void Lecteur::charger(Diaporamas& pDiaporamas)
{
    Image imageACharger;
    ImageDansDiapo imageDansDiapo;
    Diaporama diaporama;

    // Diaporama par défaut
    diaporama.setNom("Diaporama par defaut");
    diaporama.setVitesseDefilement(1);

    // L'unique image du diaporama par défaut
    imageDansDiapo.setPos(0);
    imageDansDiapo.setRang(1);
    diaporama._placeImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._placeImages.clear();

    // Diaporama de Pantxika
    diaporama.setNom("Diaporama Pantxika");
    diaporama.setVitesseDefilement(2);

    // Les images du diaporama de Pantxika
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(3);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama._placeImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._placeImages.clear();

    // Diaporama de Thierry
    diaporama.setNom("Diaporama Thierry");
    diaporama.setVitesseDefilement(4);

    // Les images du diaporama de Thierry
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(1);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(3);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(4);
    diaporama._placeImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._placeImages.clear();

    // Diaporama de Yann
    diaporama.setNom("Diaporama Yann");
    diaporama.setVitesseDefilement(3);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(2);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(1);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(3);
    diaporama._placeImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._placeImages.clear();

    // Diaporama de Manu
    diaporama.setNom("Diaporama Manu");
    diaporama.setVitesseDefilement(1);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(4);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(3);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(2);
    diaporama._placeImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama._placeImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._placeImages.clear();

}


void  Lecteur::charger(Images& pImages) {
    Image* imageACharger = new Image ();
    imageACharger->creationImage("objet", "", "C:\\cartesDisney\\Disney_tapis.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage("personnage", "Blanche Neige", "C:\\cartesDisney\\Disney_4.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage ("personnage", "Alice", "C:\\cartesDisney\\Disney_2.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage("animal", "Mickey", "C:\\cartesDisney\\Disney_19.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage ("personnage", "Pinnochio", "C:\\cartesDisney\\Disney_29.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage("objet", "chateau", "C:\\cartesDisney\\Disney_0.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage("personnage", "Minnie", "C:\\cartesDisney\\Disney_14.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creationImage("animal", "Bambi", "C:\\cartesDisney\\Disney_3.gif");
    pImages.push_back(imageACharger);
}

// Méthode pour avancer dans le diaporama
void Lecteur::avancer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante)
{
    // Vérifie si la position de l'image courante est à la fin du diaporama
    if (pPosImageCourante == pDiaporama._placeImages.size() - 1)
    {
        // Si c'est le cas, revenir au début du diaporama
        pPosImageCourante = 0;
    }
    else {
        // Sinon, avancer à l'image suivante
        pPosImageCourante = pPosImageCourante + 1;
    }
}

// Méthode pour reculer dans le diaporama
void Lecteur::reculer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante)
{
    // Vérifie si la position de l'image courante est au début du diaporama
    if (pPosImageCourante == 0)
    {
        // Si c'est le cas, aller à la fin du diaporama
        pPosImageCourante = pDiaporama._placeImages.size() - 1;
    }
    else {
        // Sinon, reculer à l'image précédente
        pPosImageCourante = pPosImageCourante - 1;
    }
}

// Méthode pour définir l'état du lecteur
void Lecteur::setEtat(bool pEtat)
{
    // Définit l'état du lecteur avec la valeur passée en paramètre
    (*this)._etat=pEtat;
}

// Méthode pour obtenir le mode du lecteur
string Lecteur::getMode() const
{
    // Renvoie le mode actuel du lecteur
    return (*this)._mode;
}

// Méthode pour obtenir l'état du lecteur
bool Lecteur::getEtat() const
{
    // Renvoie l'état actuel du lecteur
    return (*this)._etat;
}

// Méthode pour définir le mode du lecteur
void Lecteur::setMode(string pMode)
{
    // Définit le mode du lecteur avec la valeur passée en paramètre
    (*this)._mode=pMode;
}

// Méthode pour vérifier le choix de l'utilisateur
void Lecteur::verifChoix(char& pChoixAction)
{
    // Affiche le menu des actions disponibles jusqu'à ce que l'utilisateur fasse un choix valide
    cout << endl << endl;
    while (true)
    {
        cout  << endl ;
        cout << "ACTIONS :" << "  A-vancer" << "  R-eculer" << "  C-hanger de diaporama " << "  Q-uitter .......  votre choix ? ";
        cin >> pChoixAction;
        pChoixAction = toupper(pChoixAction);

        // Vérifie si le choix de l'utilisateur est valide
        if ((pChoixAction == 'A') || (pChoixAction == 'R') || (pChoixAction == 'C') || (pChoixAction == 'Q'))
        {
            break;
        }
    }
}

// Méthode pour saisir et vérifier le choix du diaporama
unsigned int Lecteur::saisieVerifChoixDiaporama(const Diaporamas& pDiaporamas)
{
    unsigned int choixSaisi;
    int choixDiaporama; // valeur retournée

    while (true)
    {
        system("cls");  // Efface l'écran
        cout << endl << endl << "CHANGEMENT DIAPORAMA : " << endl << endl;
        for (unsigned int num = 1; num < pDiaporamas.size(); num++)
        {
            cout << num << ": " << pDiaporamas[num].getNom();
            if (num != pDiaporamas.size()-1) { cout << endl; }
        }
        cout << ".......  votre choix ? "; cin >> choixSaisi;
        choixDiaporama = choixSaisi;

        // Vérifie si le choix du diaporama est valide
        if ((choixDiaporama >= 1)&&(choixDiaporama < static_cast<unsigned int>(pDiaporamas.size())))
        {
            break;
        }
    }
    return choixDiaporama;
}

// Méthode pour afficher l'image courante dans le diaporama
void Lecteur::afficherImageCourante(const Diaporama& pDiaporama, unsigned int pImageCourante,  Image* pImage)
{
    // Affiche le titre du diaporama et le rang de l'image courante
    cout << endl << endl;
    cout << "DIAPORAMA : " << pDiaporama.getNom() << endl << endl;
    cout << pDiaporama._placeImages[pImageCourante].getRang() << " sur " <<  pDiaporama.nbImages() << " / ";
    // Affiche l'image courante
    pImage->afficher();
}

// Méthode pour réaliser une action selon le choix de l'utilisateur
void Lecteur::choixAction(char pChoixAction, const Diaporamas& pDiaporamas, unsigned int& pDiaporamaCourant,
                      unsigned int& pImageCourante, const Images& pImages)
{
    unsigned int position;
    unsigned int choixDiaporama;
    switch (pChoixAction)
    {
        case 'A':
            // Avance dans le diaporama et affiche l'image courante
            (*this).avancer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant]._placeImages[pImageCourante].getPos();
            afficherImageCourante (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'R':
            // Recule dans le diaporama et affiche l'image courante
            (*this).reculer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant]._placeImages[pImageCourante].getPos();
            afficherImageCourante (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'C' :
            // Demande à l'utilisateur de choisir un diaporama
            cout << "Choisissez un Diaporama " << endl;
            choixDiaporama = saisieVerifChoixDiaporama(pDiaporamas);
            // Change le diaporama courant et revient à la première image
            pDiaporamaCourant = choixDiaporama;
            pImageCourante = 0;
            break;
        default : break;
    }
}
