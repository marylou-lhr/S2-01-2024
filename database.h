#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "bd_diaporama"   // Définition du nom de la base de données (DSN)
#define CONNECT_TYPE "QODBC" // Définition du type de connexion utilisé (ODBC dans ce cas)

// Déclaration de la classe Database
class Database {

public:

    Database();// Constructeur de la classe Database

    bool openDataBase();
    // Méthode pour ouvrir la base de données
    // Retourne true si la base de données est ouverte avec succès, sinon retourne false


    void closeDataBase();
    //BUT: Méthode pour fermer la base de données
private:

    QSqlDatabase mydb;// stocker l'objet QSqlDatabase, qui représente la connexion à la base de données

};

#endif // DATABASE_H
