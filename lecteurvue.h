#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow> // Inclut la classe QMainWindow nécessaire pour définir LecteurVue
#include "lecteur.h" // Inclut la classe Lecteur nécessaire pour définir LecteurVue
#include "presentation.h"
QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; } // Déclare un namespace Ui avec la classe LecteurVue
QT_END_NAMESPACE

class LecteurVue : public QMainWindow // Définit la classe LecteurVue comme une sous-classe de QMainWindow
{
    Q_OBJECT // Macro Qt pour activer le mécanisme de signaux et slots

public:
    LecteurVue(QMainWindow *parent = nullptr); // Constructeur de LecteurVue
    ~LecteurVue(); // Destructeur de LecteurVue

public:

    void newConnex(QObject *c);
    // BUT: Crée une connexion avec la présentation

    void supConnex(QObject *c);
    // BUT: Supprime une connexion avec la présentation

    void majInterface(Lecteur::UnEtat e, string num = "0/0", string tD = "Titre D", string tI = "titre I", string tC = "titre cat", string chem = "image");
    // BUT: Met à jour l'interface en fonction de l'état du lecteur

private:

    void majDiaporama(string num, string tD, string tI, string tC, string chem);
    // BUT: Met à jour l'affichage du diaporama

    void afficheQMessageBox();
    // BUT: Affiche une boîte de message

private:
    Ui::LecteurVue *ui; // Pointeur vers l'objet de l'interface utilisateur de LecteurVue
};
#endif // LECTEURVUE_H
