#include "Municipality.h"

namespace qfaktury::core {

Municipality::Municipality() :
    municipality("")
{

}

Municipality::Municipality(const QString& municipality) :
    municipality(municipality)
{

}

const QString &Municipality::getMunicipality() const
{
    return municipality;
}

}
