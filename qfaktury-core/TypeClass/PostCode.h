#ifndef POSTCODE_H
#define POSTCODE_H

#include <QString>

class PostCode final
{
public:
    PostCode();
    PostCode(QString postCode);

    const QString& getPostCode() const;

private:
    QString postCode;

    void validate(QString value);
};

#endif // POSTCODE_H
