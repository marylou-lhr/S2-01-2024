#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>
#include <QTimer>
// Constructeur
Presentation::Presentation(QObject *parent)
    : QObject{parent},arret(false), _leModele(), _laVue()
{

}

// Obtient le modèle (Lecteur)
Lecteur *Presentation::getModele()
{
    return _leModele;
}

// Obtient la vue (LecteurVue)
LecteurVue *Presentation::getVue()
{
    return _laVue;
}

// Définit le modèle (Lecteur)
void Presentation::setModele(Lecteur *m)
{
    _leModele = m;
}

// Définit la vue (LecteurVue)
void Presentation::setVue(LecteurVue *v)
{
    _laVue = v;
}
void Presentation::demandeSuivant()
{
    if (_leModele->getEtat()==Lecteur::automatique){
        arret=true;}
    else{
        _leModele->setEtat(Lecteur::suivant);
        _leModele->avancer();
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
    }}

void Presentation::demandePrecedent()
{
    if (_leModele->getEtat()==Lecteur::automatique){
        arret=true;}
    else{
        _leModele->setEtat(Lecteur::precedent);
        _leModele->reculer();
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
    }
}

void Presentation::demandeLancer()
{
    if (_leModele->getEtat()!=Lecteur::automatique && !arret){
        _leModele->setEtat(Lecteur::automatique);
        _leModele->setRangImageCourante(0);
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
        QTimer::singleShot(_leModele->getVitesseDiap()*1000, this, SLOT(demandeLancer()));
    }
    else{
        if (!arret && _leModele->avancer()){
            _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
            QTimer::singleShot(_leModele->getVitesseDiap()*1000, this, SLOT(demandeLancer()));
        }
        else{
            _leModele->setEtat(Lecteur::charge);
            arret=false;
            _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());}
    }
}

void Presentation::demandeArreter()
{
    _leModele->setEtat(Lecteur::manuel);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
    arret=true;
}


void Presentation::demandeCharger()
{
    _leModele->setEtat(Lecteur::charge);
    QAction *action = qobject_cast<QAction *>(sender());
    _leModele->changerDiaporama(action->data().toInt());
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());
}


void Presentation::demandeEnlever()
{
    _leModele->setEtat(Lecteur::enlever);
    _leModele->changerDiaporama(0);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getNomD(),_leModele->getImageCourante(),_leModele->getCategorieImageCourante(),_leModele->getCheminImageCourante());

}

void Presentation::demandeInfo()
{
    _leModele->setEtat(Lecteur::info);
    _laVue->majInterface(_leModele->getEtat());
}
