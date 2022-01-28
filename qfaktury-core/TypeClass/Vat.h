#ifndef VAT_H
#define VAT_H

#include "qfaktury-core_global.h"

#include <QString>

namespace qfaktury::core {

class QFAKTURYCORE_EXPORT Vat
{
public:
    Vat() = default;
    Vat(const QString& new_vat);

    QString getVat() const;

private:
    QString vat;
};

}

#endif // VAT_H
