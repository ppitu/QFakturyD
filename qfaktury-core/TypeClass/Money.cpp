#include "Money.h"

#include "Exception/MoneyException.h"

#include <QRegularExpression>

Money::Money(const QString& money) noexcept(false)
{
    validate(money);

    money_ = convertToInt(money);
}

Money::Money(int32_t money) :
    money_(money)
{

}

QString Money::toString()
{
    return QString::number(money_/100) + "." + QString::number(money_%100);
}

void Money::validate(const QString& value) noexcept(false)
{
    QRegularExpression re("\\d*\\.^[0-9]{2}$");
    auto match = re.match(value);

    if(!match.hasMatch())
        throw MoneyException();
}

int32_t Money::convertToInt(const QString &value)
{
    auto list = value.split(".");

    int32_t result = (list[0].toInt() * 100) + list[1].toInt();

    return result;
}
