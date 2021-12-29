#include "City.h"

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
