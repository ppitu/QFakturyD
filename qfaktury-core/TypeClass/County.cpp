#include "County.h"

namespace qfaktury::core {

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

}
