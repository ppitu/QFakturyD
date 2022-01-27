#ifndef PROVINCE_H
#define PROVINCE_H

#include <QString>

namespace qfaktury::core {

class Province final
{
public:
    Province();
    Province(const QString& province);

    const QString& getProvince() const;

private:
    QString province;
};

}

#endif // PROVINCE_H
