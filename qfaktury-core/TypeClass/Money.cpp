#include "Money.h"

#include <cmath>

#include <QRegularExpression>

#include "Exception/MoneyException.h"
#include "Vat.h"

namespace qfaktury::core {

Money::Money(const QString& money) noexcept(false) : Money(money, 2)
{
  ;
}

Money::Money(const QString& new_money, int precision) noexcept(false)
{
    if(precision > 4 || precision < 0)
        throw MoneyException();

    validate(new_money);

    money = convertToInt(new_money, precision);
}

Money::Money(int32_t new_money, int precision) noexcept(false)
{
    if(precision > 4 || precision < 0)
        throw MoneyException();

    money = new_money * std::pow(10, precision);
}

Money::Money(float new_money, int precision) noexcept(false)
{
    if(precision > 4 || precision < 0)
        throw MoneyException();

    money = static_cast<int>(new_money * 10000);
    qDebug() << money;
}

Money::Money(double new_money, int precision) noexcept(false)
{
    if(precision > 4 || precision < 0)
        throw MoneyException();

    money = static_cast<int>(new_money * 10000);
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

    int32_t round_ = money/10000;
    int32_t residual = money%10000;

    residual = round(residual);

    QString x = "";
    QString z = "";

    if(money < 0 && round_ == 0)
        x = "-" + QString::number(round_);
    else
        x = QString::number(round_);

    z = QString::number(std::abs(residual));

    if(z.size() == 1)
        z += "0";

    return x + "." + z;
}

Money Money::operator*(const Vat &obj) const
{
    return Money((float)(money/10000) * (float)(obj.getVat().toInt()/100.0), 2);
}

Money Money::operator*(const Money& obj) const
{
    return Money(this->money * obj.money);
}

Money Money::operator+(const Money &obj) const
{
    return Money(this->money + obj.money);
}

Money Money::operator -(const Money &obj) const
{
    return Money(this->money - obj.money);
}

Money::Money(int32_t _money) :
    money(_money)
{

}

void Money::validate(const QString& value) noexcept(false)
{
    QRegularExpression re("^-?[0-9]+(\\.[0-9]{1,4})?$");
    auto match = re.match(value);

    if(!match.hasMatch())
        throw MoneyException();
}

int32_t Money::convertToInt(const QString &value, int precision)
{
    auto list = value.split(".");

    int32_t result = (list[0].toInt() * std::pow(10, 4));

    if(result < 0)
        result -= (list[1].toInt() * std::pow(10, (4 - precision)));
    else
        result += (list[1].toInt() * std::pow(10, (4 - precision)));
    return result;
}

int32_t Money::round(int32_t number) const
{
    int32_t x = number%100;

    if(x >= 50)
        return static_cast<int32_t>((number/100)) + 1;
    else
        return static_cast<int32_t>(number/100);
}

}
