#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H

#include <QString>

#include <memory>
#include <vector>

#include "Class/Product.h"

class QSqlDatabase;

namespace qfaktury::database
{

class ProductDao final
{
public:
    explicit ProductDao(QSqlDatabase& new_database);

    void addProduct(core::Product& product) const;
    void updateProduct(const core::Product& product) const;
    void removeProduct(int id) const;
    std::unique_ptr<std::vector<std::unique_ptr<core::Product>>> products() const;

private:
    QSqlDatabase& database;
};

}

#endif // PRODUCTDAO_H
