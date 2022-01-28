#include "Contractor.h"

namespace qfaktury::core {

Contractor::Contractor()
{

}

Contractor::Contractor(const Person& person, const Company& company) :
    person(person),
    company(company)
{

}

const Person& Contractor::getPerson() const
{
    return person;
}

const Company& Contractor::getCompany() const
{
    return company;
}

}
