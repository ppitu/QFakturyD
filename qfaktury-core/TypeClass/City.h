#ifndef CITY_H
#define CITY_H

#include <QString>

namespace qfaktury::core {

class City final
{
public:
    City();
    City(const QString& city);

    const QString& getCity() const;

private:
    QString city;
};

}

#endif // CITY_H
