#include "MoneyException.h"

MoneyException::MoneyException()
{

}

const char *MoneyException::what() const noexcept
{
    return "Invalid format of money";
}
