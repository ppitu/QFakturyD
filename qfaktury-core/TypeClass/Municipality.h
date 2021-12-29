#ifndef MUNICIPALITY_H
#define MUNICIPALITY_H

#include <QString>

class Municipality final
{
public:
    Municipality();
    Municipality(const QString& municipality);

    const QString& getMunicipality() const;

private:
    QString municipality;
};

#endif // MUNICIPALITY_H
