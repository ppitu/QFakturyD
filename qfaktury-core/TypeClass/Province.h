#ifndef PROVINCE_H
#define PROVINCE_H

#include <QString>

class Province final
{
public:
    Province();
    Province(const QString& province);

    const QString& getProvince() const;

private:
    QString province_;
};

#endif // PROVINCE_H
