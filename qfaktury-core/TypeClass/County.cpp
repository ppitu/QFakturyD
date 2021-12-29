#include "County.h"

County::County() :
    county("")
{

}

County::County(const QString& county) :
    county(county)
{

}

const QString &County::getCounty() const
{
    return county;
}
