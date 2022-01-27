#ifndef PHONE_H
#define PHONE_H

#include <QString>

namespace qfaktury::core {

class Phone final
{
public:
    Phone() = delete;
    Phone(const QString& phone);

    const QString& getPhone() const;

private:
    QString phone;

    void validate();
};

}

#endif // PHONE_H
