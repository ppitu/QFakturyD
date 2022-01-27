#include "HouseNumber.h"

namespace qfaktury::core {

HouseNumber::HouseNumber() :
    house_number("")
{

}

HouseNumber::HouseNumber(const QString& houseNumber) :
    house_number(houseNumber)
{

}

const QString &HouseNumber::getHouseNumber() const
{
    return house_number;
}

}
