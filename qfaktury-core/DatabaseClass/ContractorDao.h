#ifndef CONTRACTORDAO_H
#define CONTRACTORDAO_H

#include <QString>
#include <memory>
#include <vector>

class QSqlDatabase;
class Contractor;

class ContractorDao
{
public:
    explicit ContractorDao(QSqlDatabase& database_);

    void init() const;
    void addContractor(Contractor& contractor) const;
    void updateContractor(const Contractor& contractor) const;
    void removeContractor(int id) const;
    std::unique_ptr<std::vector<std::unique_ptr<Contractor>>> contractors() const;
    virtual ~ContractorDao();

private:
    QSqlDatabase& database;
};

#endif // CONTRACTORDAO_H
