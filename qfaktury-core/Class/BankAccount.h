#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <QString>

#include "TypeClass/BankAccountNumber.h"

namespace qfaktury::core
{

class BankAccount
{
public:
    BankAccount();
    BankAccount(const QString& _bank_name, const BankAccountNumber& _number);

    const QString& getBankName() const;
    const BankAccountNumber& getNumber() const;

private:
    QString bank_name{};
    BankAccountNumber number{};
};

}

#endif // BANKACCOUNT_H
