#include "Regon.h"

namespace qfaktury::core {

Regon::Regon()
{

}

Regon::Regon(const QString &_regon) :
    regon(_regon)
{

}

const QString &Regon::getRegon() const
{
    return regon;
}

}
