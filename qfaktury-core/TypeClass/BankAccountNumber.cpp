#include "BankAccountNumber.h"

namespace qfaktury::core
{

BankAccountNumber::BankAccountNumber()
{

}

BankAccountNumber::BankAccountNumber(const QString& _number) :
    number(_number)
{

}

const QString& BankAccountNumber::getNumber() const
{
    return number;
}

}
