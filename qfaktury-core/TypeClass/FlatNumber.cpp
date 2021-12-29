#include "FlatNumber.h"

FlatNumber::FlatNumber() :
    flat_number("")
{

}

FlatNumber::FlatNumber(const QString& flatNumber) :
    flat_number(flatNumber)
{

}

const QString &FlatNumber::getFlatNumber() const
{
    return flat_number;
}
