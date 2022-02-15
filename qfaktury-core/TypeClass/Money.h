#ifndef MONEY_H
#define MONEY_H

#include "qfaktury-core_global.h"

#include <QString>

namespace qfaktury::core {

class Vat;

class QFAKTURYCORE_EXPORT Money
{
public:
    Money(const QString& money, int precistion) noexcept(false);
    explicit Money(const QString& money) noexcept(false);

    //Important!!!
    //Two last digit are decimal
    Money(int32_t money, int precistion) noexcept(false);
    Money(float money, int precistion) noexcept(false);
    Money(double money, int precistion) noexcept(false);
    Money();

    QString toString() const;

    Money operator *(const Vat &obj) const;
    Money operator *(const Money& obj) const;
    Money operator +(const Money& obj) const;
    Money operator -(const Money& obj) const;
private:
    Money(int32_t money);

    int32_t money;

    void validate(const QString& value) noexcept(false);
    int32_t convertToInt(const QString& value, int precision);
    int32_t round(int32_t number) const;
};

}
#endif // MONEY_H
