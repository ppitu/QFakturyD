#ifndef ADDRESSDAO_H
#define ADDRESSDAO_H

#include <QString>

#include <memory>
#include <vector>

#include "Class/Address.h"

class QSqlDatabase;

namespace qfaktury::database
{

class AddressDao final
{
public:
    explicit AddressDao(QSqlDatabase& new_database);

    void addAddress(core::Address& address) const;
    void removeAddress(int id) const;

private:
    QSqlDatabase& database;
};

}

#endif // ADDRESSDAO_H
