#ifndef CONTRACTOR_H
#define CONTRACTOR_H

#include <QString>
#include <optional>
#include <QMetaType>

#include "Company.h"
#include "Person.h"

namespace qfaktury::core
{

class Contractor final
{
public:
    Contractor();
    Contractor(const Person& person, const Company& company);

    const Person& getPerson() const;
    const Company& getCompany() const;

private:
    Person person;
    Company company;

};

}

Q_DECLARE_METATYPE(qfaktury::core::Contractor);

#endif // CONTRACTOR_H
