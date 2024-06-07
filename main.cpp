#include "lecteurvue.h"
#include "lecteur.h"
#include "presentation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Création du modèle
    Lecteur *m = new Lecteur();

    // Création de la présentation
    Presentation *p = new Presentation();

    // Création de la vue
    LecteurVue w;

    // Liaison de la présentation avec la vue et le modèle
    p->setVue(&w);
    p->setModele(m);

    // Connexion des signaux de la vue avec les slots de la présentation
    w.newConnex(p);

    // Demande d'enlever
    p->demandeEnlever();

    // Affichage de la vue et démarrage de la boucle d'attente des messages
    w.show();

    return a.exec();
}
