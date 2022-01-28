#include "BankAccount.h"

namespace qfaktury::core
{

BankAccount::BankAccount()
{

}

BankAccount::BankAccount(const QString& _bank_name, const BankAccountNumber& _number) :
    bank_name(_bank_name),
    number(_number)
{

}

const QString& BankAccount::getBankName() const
{
    return bank_name;
}

const BankAccountNumber& BankAccount::getNumber() const
{
    return number;
}

}
