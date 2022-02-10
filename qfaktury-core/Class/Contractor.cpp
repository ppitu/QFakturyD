#include "Contractor.h"

namespace qfaktury::core {

Contractor::Contractor()
{

}

const int Contractor::getId() const
{
    return id;
}

Contractor::Contractor(int id, const Person& person, const Company& company) :
    id(id),
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
