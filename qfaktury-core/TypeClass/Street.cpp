#include "Street.h"

Street::Street() :
    street("")
{

}

Street::Street(const QString& street) :
    street(street)
{

}

const QString& Street::getStreet() const
{
    return street;
}
