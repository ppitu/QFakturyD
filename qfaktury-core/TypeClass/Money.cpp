#include "Money.h"

#include <cmath>

#include <QRegularExpression>

#include "Exception/MoneyException.h"
#include "Vat.h"

namespace qfaktury::core {

Money::Money(const QString& new_money) noexcept(false)
{
    validate(new_money);

    money = convertToInt(new_money);
}

Money::Money(int32_t new_money) :
    money(new_money)
{

}

Money::Money(float new_money)
{
    money = static_cast<int>(new_money * 100);
}

Money::Money(double new_money)
{
    money = static_cast<int>(new_money * 100);
}

Money::Money() :
    money(0)
{

}

QString Money::toString() const
{
    if(money == 0)
    {
        return "0.00";
    }

    int32_t round = money/100;
    int32_t residual = money%100;

    QString x = "";
    QString z = "";

    if(money < 0 && round == 0)
        x = "-" + QString::number(round);
    else
        x = QString::number(round);

    z = QString::number(std::abs(residual));

    if(z.size() == 1)
        z += "0";

    return x + "." + z;
}

Money Money::operator*(const Vat &obj) const
{
    return Money((float)(money/100) * (float)(obj.getVat().toInt()/100.0));
}

Money Money::operator*(const Money& obj) const
{
    return Money(this->money + obj.money);
}

Money Money::operator+(const Money &obj) const
{
    return Money(this->money + obj.money);
}

Money Money::operator -(const Money &obj) const
{
    return Money(this->money - obj.money);
}

void Money::validate(const QString& value) noexcept(false)
{
    QRegularExpression re("^-?[0-9]+(\\.[0-9]{1,2})?$");
    auto match = re.match(value);

    if(!match.hasMatch())
        throw MoneyException();
}

int32_t Money::convertToInt(const QString &value)
{
    auto list = value.split(".");

    int32_t result = (list[0].toInt() * 100);

    if(result < 0)
        result -= list[1].toInt();
    else
        result += list[1].toInt();

    return result;
}

}
