#ifndef CONTRACTORDAO_H
#define CONTRACTORDAO_H

#include <QString>

#include <memory>
#include <vector>

#include "Class/Contractor.h"

class QSqlDatabase;

namespace qfaktury::database
{

class ContractorDao final
{
public:
    explicit ContractorDao(QSqlDatabase& new_database);

    void addContractor(core::Contractor& contractor) const;
    void updateContractor(const core::Contractor& contractor) const;
    void removeContractor(int id) const;
    std::unique_ptr<std::vector<std::unique_ptr<core::Contractor>>> contractors() const;
    virtual ~ContractorDao();

private:
    QSqlDatabase& database;
};

}

#endif // CONTRACTORDAO_H
