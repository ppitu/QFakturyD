#include "Price.h"

namespace qfaktury::core {

Price::Price(const Money& new_net, const Vat& new_vat) :
    net(new_net),
    vat(new_vat)
{
}

Price::Price()
{
}

QString Price::getNet() const
{
    return net.toString();
}

QString Price::getGross() const
{
    return (net + (net * vat)).toString();
}

}
