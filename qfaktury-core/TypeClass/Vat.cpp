#include "Vat.h"

namespace qfaktury::core {

Vat::Vat(const QString& new_vat) :
    vat(new_vat)
{

}

QString Vat::getVat() const
{
    return vat;
}

}
