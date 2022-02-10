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
    BankAccount(int _id, const QString& _bank_name, const BankAccountNumber& _number);

    const int getInt() const;
    const QString& getBankName() const;
    const BankAccountNumber& getNumber() const;

private:
    int id;
    QString bank_name{};
    BankAccountNumber number{};
};

}

#endif // BANKACCOUNT_H
