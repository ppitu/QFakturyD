#ifndef EMAIL_H
#define EMAIL_H

#include <QString>

class Email final
{
public:
    Email() = delete;
    Email(const QString &email);

    const QString& getEmail() const;

private:
    QString email_;

    void validate();
};

#endif // EMAIL_H
