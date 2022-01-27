#include "Email.h"

namespace qfaktury::core {

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

}
