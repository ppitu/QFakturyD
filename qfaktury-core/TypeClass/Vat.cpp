#include "Vat.h"

Vat::Vat(const QString& new_vat) :
    vat(new_vat)
{

}

QString Vat::getVat() const
{
    return vat;
}
