#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H

#include <QString>
#include <memory>
#include <vector>

class QSqlDatabase;
class Product;

class ProductDao final
{
public:
    explicit ProductDao(QSqlDatabase& database);
    void init() const;
    void addProduct(Product& product) const;
    void updateProduct(const Product& product) const;
    void removeProduct(int id) const;
    std::unique_ptr<std::vector<std::unique_ptr<Product>>> products() const;

private:
    QSqlDatabase& mDatabase;
};

#endif // PRODUCTDAO_H
