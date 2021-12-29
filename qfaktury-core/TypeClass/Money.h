#ifndef MONEY_H
#define MONEY_H

#include <QString>

class Money
{
public:
    Money(const QString& money) noexcept(false);
    Money(int32_t money);

    QString toString();

private:
    int32_t money;

    void validate(const QString& value) noexcept(false);
    int32_t convertToInt(const QString& value);
};

#endif // MONEY_H
