#include "database.h"
#include "qsqlquery.h"
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <iostream>
using namespace std;

// Constructeur de la classe Database
Database::Database()
{
}


bool Database::openDataBase()
{

    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE); // Ajouter une base de données

    mydb.setDatabaseName(DATABASE_NAME); // nom de la base de données ( bd_diaporama)
    qDebug() << "BD OUVERTE"; // Cette ligne ne sera jamais exécutée car elle se trouve après le retour
    return mydb.open(); // ouvrir la base de données

}


void Database::closeDataBase()
{

    mydb.close();// Fermer la base de données
}
