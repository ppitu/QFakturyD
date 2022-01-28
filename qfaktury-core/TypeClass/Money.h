#ifndef MONEY_H
#define MONEY_H

#include "qfaktury-core_global.h"

#include <QString>

namespace qfaktury::core {

class Vat;

class QFAKTURYCORE_EXPORT Money
{
public:
    Money(const QString& money) noexcept(false);
    //Important!!!
    //Two last digit are decimal
    Money(int32_t money);
    Money(float money);
    Money(double money);
    Money();

    QString toString() const;

    Money operator *(const Vat &obj) const;
    Money operator *(const Money& obj) const;
    Money operator +(const Money& obj) const;
    Money operator -(const Money& obj) const;
private:
    int32_t money;

    void validate(const QString& value) noexcept(false);
    int32_t convertToInt(const QString& value);
};

}
#endif // MONEY_H
