#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include "DatabaseClass/ProductDao.h"

#include <QString>

#include <memory>


class QSqlDatabase;
class QSqlQuery;

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
    std::unique_ptr<QSqlDatabase> database;

    void updateDatabase();

public:
    const ProductDao product_dao;
};

#endif // DATABASEMANAGER_H
