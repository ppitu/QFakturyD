#include "Province.h"

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
