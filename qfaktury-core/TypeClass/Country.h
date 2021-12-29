#ifndef COUNTRY_H
#define COUNTRY_H

#include <QString>

class Country final
{
public:
    Country();
    Country(const QString& country);

    const QString& getCountry() const;

private:
    QString country;
};

#endif // COUNTRY_H
