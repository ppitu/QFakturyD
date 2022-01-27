#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QtSql/QSqlDatabase>

#include <memory>

#include "DatabaseClass/ProductDao.h"

class QSqlQuery;

namespace qfaktury::database
{

const QString DATABASE_NAME = "qfaktury.db";

class DatabaseManager
{
public:
    static void debugQuery(const QSqlQuery& query);

    static DatabaseManager& instance();
    ~DatabaseManager();

protected:
    DatabaseManager(const QString& path = DATABASE_NAME);

private:
    QSqlDatabase database;

    void updateDatabase();

public:
    const ProductDao product_dao;
};

}

#endif // DATABASEMANAGER_H
