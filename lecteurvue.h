#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow> // Inclut la classe QMainWindow nécessaire pour définir LecteurVue
#include "lecteur.h" // Inclut la classe Lecteur nécessaire pour définir LecteurVue

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
    // Méthode pour créer une connexion avec la présentation
    void newConnex(QObject *c);
    // Méthode pour supprimer une connexion avec la présentation
    void supConnex(QObject *c);
    // Méthode pour mettre à jour l'interface en fonction de l'état du lecteur
    void majInterfaceEtat(Lecteur::UnEtat e);

private:
    Ui::LecteurVue *ui; // Pointeur vers l'objet de l'interface utilisateur de LecteurVue
};
#endif // LECTEURVUE_H



