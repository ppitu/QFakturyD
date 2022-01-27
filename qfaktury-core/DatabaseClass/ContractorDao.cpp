#include "ContractorDao.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

#include "Database/DatabaseManager.h"

namespace qfaktury::database
{

ContractorDao::ContractorDao(QSqlDatabase& database_) :
    database(database_)
{

}

void ContractorDao::addContractor(core::Contractor &contractor) const
{

}

void ContractorDao::updateContractor(const core::Contractor &contractor) const
{

}

void ContractorDao::removeContractor(int id) const
{

}

std::unique_ptr<std::vector<std::unique_ptr<core::Contractor> > > ContractorDao::contractors() const
{
    return nullptr;
}

ContractorDao::~ContractorDao()
{

}

}
