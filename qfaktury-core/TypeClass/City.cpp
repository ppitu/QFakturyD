#include "City.h"

namespace qfaktury::core {

City::City() :
    city("")
{

}

City::City(const QString& city) :
    city(city)
{

}

const QString &City::getCity() const
{
    return city;
}

}
