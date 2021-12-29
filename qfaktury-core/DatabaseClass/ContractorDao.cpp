#include "ContractorDao.h"

#include "Database/DatabaseManager.h"
#include "Class/Contractor.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

ContractorDao::ContractorDao(QSqlDatabase& database_) :
    database(database_)
{

}

void ContractorDao::addContractor(Contractor &contractor) const
{

}

void ContractorDao::updateContractor(const Contractor &contractor) const
{

}

void ContractorDao::removeContractor(int id) const
{

}

std::unique_ptr<std::vector<std::unique_ptr<Contractor> > > ContractorDao::contractors() const
{
    return nullptr;
}

ContractorDao::~ContractorDao()
{

}
