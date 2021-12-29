#include "Municipality.h"

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
