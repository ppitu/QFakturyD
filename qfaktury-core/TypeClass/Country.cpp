#include "Country.h"

Country::Country() :
    country("")
{

}

Country::Country(const QString& country) :
    country(country)
{

}

const QString &Country::getCountry() const
{
    return country;
}
