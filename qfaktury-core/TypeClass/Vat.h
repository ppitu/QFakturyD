#ifndef VAT_H
#define VAT_H

#include <QString>

class Vat
{
public:
    Vat() = default;
    Vat(const QString& new_vat);

    QString getVat() const;

private:
    QString vat;
};

#endif // VAT_H
