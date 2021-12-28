#ifndef NIP_H
#define NIP_H

#include <QString>

class NIP final
{
public:
    NIP();
    NIP(const QString& nip);

    const QString& getNIP() const;

private:
    QString nip_;

    void validate();
};

#endif // NIP_H
