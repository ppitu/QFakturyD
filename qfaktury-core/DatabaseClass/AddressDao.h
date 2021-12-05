#ifndef ADDRESSDAO_H
#define ADDRESSDAO_H

#include <QString>
#include <memory>
#include <vector>

class QSqlDatabase;
class Address;

class AddressDao
{
public:
    explicit AddressDao(QSqlDatabase& database_);

    void init() const;
    void addAddress(Address& address) const;
    //void updateAddress(const Address& address) const;
    void removeAddress(int id) const;
    //Address& getAddress(int id);

    virtual ~AddressDao();

private:
    QSqlDatabase& database;
};

#endif // ADDRESSDAO_H
