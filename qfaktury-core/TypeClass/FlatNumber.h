#ifndef FLATNUMBER_H
#define FLATNUMBER_H

#include <QString>

class FlatNumber final
{
public:
    FlatNumber();
    FlatNumber(const QString& flatNumber);

    const QString& getFlatNumber() const;

private:
    QString flat_number;
};

#endif // FLATNUMBER_H
