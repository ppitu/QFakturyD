#ifndef BANKACCOUNTNUMBER_H
#define BANKACCOUNTNUMBER_H

#include <QString>

namespace qfaktury::core
{

class BankAccountNumber
{
public:
    BankAccountNumber();
    BankAccountNumber(const QString& _number);

    const QString& getNumber() const;

private:
    QString number;
};

}

#endif // BANKACCOUNTNUMBER_H
