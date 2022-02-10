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
    Person(int id, const QString& _first_name, const QString& _last_name, const std::optional<QString>& _pesel);

    const int getId() const;
    const QString& getFirstName() const;
    const QString& getLastName() const;
    const std::optional<Pesel>& getPesel() const;

private:
    int id;
    QString first_name{};
    QString last_name{};
    std::optional<Pesel> pesel;
};

}

#endif // PERSON_H
