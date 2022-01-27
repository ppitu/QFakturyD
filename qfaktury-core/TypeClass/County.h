#ifndef COUNTY_H
#define COUNTY_H

#include <QString>

namespace qfaktury::core {

class County final
{
public:
    County();
    County(const QString& county);

    const QString& getCounty() const;

private:
    QString county;
};

}
#endif // COUNTY_H
