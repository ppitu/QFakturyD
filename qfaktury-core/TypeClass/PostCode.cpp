#include "PostCode.h"

#include "Exception/PostCodeException.h"

#include <QRegularExpression>

namespace qfaktury::core {

PostCode::PostCode()
{

}

PostCode::PostCode(QString postCode) :
    postCode(postCode)
{
    validate(postCode);
}

const QString &PostCode::getPostCode() const
{
    return postCode;
}

void PostCode::validate(QString value)
{
    if(postCode.size() != 6)
    {
        throw PostCodeException();
    }

    QRegularExpression re("\\d\\d-\\d\\d\\d");
    QRegularExpressionMatch match = re.match(value);

    if(!match.hasMatch())
    {
        throw PostCodeException();
    }

}

}
