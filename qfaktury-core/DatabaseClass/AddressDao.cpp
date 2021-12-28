#include "AddressDao.h"

#include <QSqlDatabase>
#include <QSqlQuery>

#include "Database/DatabaseManager.h"

#include "Class/Address.h"

AddressDao::AddressDao(QSqlDatabase& database_) :
    database(database_)
{

}

void AddressDao::init() const
{
    if(!database.tables().contains("address"))
    {
        QSqlQuery query(database);

        query.exec("CREATE TABLE address (id INTEGER PRIMARY KEY AUTOINCREMENT, street VARCHAR(20), house_number VARCHAR(10), "
                   "flat_number VARCHAR(10), city VARCHAR(30), municipality VARCHAR(30), post_code VARCHAR(10), county VARCHAR(30),"
                   "country VARCHAR(30), province VARCHAR(30))");

        DatabaseManager::debugQuery(query);
    }
}

void AddressDao::addAddress(Address &address) const
{
    QSqlQuery query(database);

    query.prepare("INSERT INTO address (street, house_number, flat_number, city, municipality, post_code, county, country, province) VALUES"
                  "(:street, :house_number, :flat_number, :city, :municipality, :post_code, :county, :country, :province)");
    query.bindValue(":street", address.getStreet().getStreet());
    query.bindValue(":house_number", address.getHouseNumber().getHouseNumber());
    query.bindValue(":flat_number", address.getFlatNumber().has_value() ? address.getFlatNumber()->getFlatNumber() : "");
    query.bindValue(":city", address.getCity().getCity());
    query.bindValue(":municipality", address.getMunicipality().getMunicipality());
    query.bindValue(":post_code", address.getPostCode().getPostCode());
    query.bindValue(":county", address.getCounty().has_value() ? address.getCounty()->getCounty() : "");
    query.bindValue(":country", address.getCountry().has_value() ? address.getCountry()->getCountry() : "");
    query.bindValue(":province", address.getProvice().has_value() ? address.getProvice()->getProvince() : "");

    query.exec();

    DatabaseManager::debugQuery(query);
}

void AddressDao::removeAddress(int id) const
{
   QSqlQuery query(database);
   query.prepare("DELETE FROM address WHERE id = (:id)");
   query.bindValue(":id", id);
   query.exec();

   DatabaseManager::debugQuery(query);
}
