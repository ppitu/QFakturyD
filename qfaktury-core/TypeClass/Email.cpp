#include "Email.h"

Email::Email(const QString &email) :
    email(email)
{
    validate();
}

const QString &Email::getEmail() const
{
    return email;
}

void Email::validate()
{
    // TODO
    // Add validation
}
