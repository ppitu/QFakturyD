#ifndef NIP_H
#define NIP_H

#include <QString>

namespace qfaktury::core {

class NIP final
{
public:
    NIP();
    NIP(const QString& nip);

    const QString& getNIP() const;

private:
    QString nip;

    void validate();
};

}

#endif // NIP_H
