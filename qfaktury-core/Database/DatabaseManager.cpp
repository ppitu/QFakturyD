#include "DatabaseManager.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

namespace qfaktury::database
{

void DatabaseManager::debugQuery(const QSqlQuery &query)
{
    if(query.lastError().type() == QSqlError::ErrorType::NoError) {
        qDebug() << "Query Ok: " << query.lastQuery();
    } else {
        qWarning() << "Query KO: " << query.lastError().type();
        qWarning() << "Query text: " << query.lastQuery();
    }
}

DatabaseManager &DatabaseManager::instance()
{

    static DatabaseManager singleton;
    return singleton;
}

DatabaseManager::~DatabaseManager()
{

    database.close();
}

DatabaseManager::DatabaseManager(const QString &path) :
    database(QSqlDatabase(QSqlDatabase::addDatabase("QSQLITE"))),
    product_dao(database)
{

    database.setDatabaseName(path);
    bool openStatus = database.open();

    qDebug() << "Database connection: " << (openStatus ? "OK" : "Error");

    updateDatabase();
}

void DatabaseManager::updateDatabase()
{
    //In this function we have all changes in database

    if(!database.tables().contains("address"))
    {
        QSqlQuery query(database);

        query.exec("CREATE TABLE address (id INTEGER PRIMARY KEY AUTOINCREMENT, street VARCHAR(20), house_number VARCHAR(10), "
                   "flat_number VARCHAR(10), city VARCHAR(30), municipality VARCHAR(30), post_code VARCHAR(10), county VARCHAR(30),"
                   "country VARCHAR(30), province VARCHAR(30))");

        DatabaseManager::debugQuery(query);
    }

    if(!database.tables().contains("product"))
    {
        QSqlQuery query(database);
        query.exec("CREATE TABLE product (id INTEGER PRIMARY KEY AUTOINCREMENT, ident VARCHAR(50) NOT NULL UNIQUE, name VARCHAR(50), code VARCHAR(20), pkwiu VARCHAR(20),"
                   "quality VARCHAR(30), description VARCHAR(100), net REAL, gross REAL, vat INTEGER, metric VARCHAR(30))");

        DatabaseManager::debugQuery(query);
    }


}

}
