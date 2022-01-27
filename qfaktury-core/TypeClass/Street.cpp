#include "Street.h"

namespace qfaktury::core {

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

}
