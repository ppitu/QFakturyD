#include "Person.h"

namespace qfaktury::core
{

Person::Person() :
    pesel(std::nullopt)
{

}

Person::Person(const QString& _first_name, const QString& _last_name, const std::optional<QString>& _pesel) :
    first_name(_first_name),
    last_name(_last_name),
    pesel(_pesel)
{

}

const QString &Person::getFirstName() const
{
    return first_name;
}

const QString &Person::getLastName() const
{
    return last_name;
}

const std::optional<Pesel> &Person::getPesel() const
{
    return pesel;
}

}
