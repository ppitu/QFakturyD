#ifndef REGON_H
#define REGON_H

#include <QString>

namespace qfaktury::core
{

class Regon
{
public:
    Regon();
    Regon(const QString& _regon);

    const QString& getRegon() const;

private:
    QString regon{};
};

}

#endif // REGON_H
