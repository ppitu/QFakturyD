#ifndef PERSON_H
#define PERSON_H

#include <QString>

#include "TypeClass/Pesel.h"

namespace qfaktury::core
{

class Person
{
public:
    Person();
    Person(const QString& _first_name, const QString& _last_name, const std::optional<QString>& _pesel);

    const QString& getFirstName() const;
    const QString& getLastName() const;
    const std::optional<Pesel>& getPesel() const;

private:
    QString first_name{};
    QString last_name{};
    std::optional<Pesel> pesel;
};

}

#endif // PERSON_H
