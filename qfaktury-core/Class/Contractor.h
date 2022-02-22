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
    Contractor(int id, const Person& person, const Company& company);

     int getId() const;
    const Person& getPerson() const;
    const Company& getCompany() const;

private:
    int id;
    Person person;
    Company company;

};

}

Q_DECLARE_METATYPE(qfaktury::core::Contractor);

#endif // CONTRACTOR_H
