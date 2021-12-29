#include "Phone.h"


Phone::Phone(const QString &phone) :
    phone(phone)
{
    validate();
}

const QString &Phone::getPhone() const
{
    return phone;
}

void Phone::validate()
{
    // TODO
    // Add validate
}
