#include "Pesel.h"

namespace qfaktury::core
{

Pesel::Pesel()
{

}

Pesel::Pesel(const QString& _pesel) :
    pesel(_pesel)
{

}

const QString &Pesel::getPesel() const
{
    return pesel;
}

}
