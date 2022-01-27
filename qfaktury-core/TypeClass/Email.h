#ifndef EMAIL_H
#define EMAIL_H

#include <QString>

namespace qfaktury::core {

class Email final
{
public:
    Email() = delete;
    Email(const QString &email);

    const QString& getEmail() const;

private:
    QString email;

    void validate();
};

}
#endif // EMAIL_H
