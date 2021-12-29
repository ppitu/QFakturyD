#ifndef STREET_H
#define STREET_H

#include <QString>

class Street final
{
public:
    Street();
    Street(const QString& street);

    const QString& getStreet() const;

private:
    QString street;
};

#endif // STREET_H
