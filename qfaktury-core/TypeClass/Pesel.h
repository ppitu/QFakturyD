#ifndef PESEL_H
#define PESEL_H

#include <QString>

namespace qfaktury::core
{

class Pesel
{
public:
    Pesel();
    Pesel(const QString& _pesel);

    const QString& getPesel() const;

private:
    QString pesel;
};

}
#endif // PESEL_H
