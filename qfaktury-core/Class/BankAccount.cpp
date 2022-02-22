#include "BankAccount.h"

namespace qfaktury::core
{

BankAccount::BankAccount()
{

}

 int BankAccount::getInt() const
{
    return id;
}

BankAccount::BankAccount(int _id, const QString& _bank_name, const BankAccountNumber& _number) :
    id(_id),
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
