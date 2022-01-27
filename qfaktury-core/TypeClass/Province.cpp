#include "Province.h"

namespace qfaktury::core {

Province::Province() :
    province("")
{

}

Province::Province(const QString& province) :
    province(province)
{

}

const QString &Province::getProvince() const
{
    return province;
}

}
