#include "NIP.h"

#include "Exception/NIPException.h"

#include <QRegularExpression>

NIP::NIP()
{

}

NIP::NIP(const QString &nip) :
    nip(nip)
{

}

const QString &NIP::getNIP() const
{
    return nip;
}

void NIP::validate()
{
    if(nip.size() != 11)
    {
        throw NIPException();
    }

    QRegularExpression re("\\d\\d\\d\\d\\d\\d\\d\\d\\d\\d\\d");
    QRegularExpressionMatch match = re.match(nip);

    if(!match.hasMatch())
    {
        throw NIPException();
    }
}
