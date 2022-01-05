#include "Price.h"


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
    return (net * vat).toString();
}

void Price::calculate()
{
    //gross = net + (net * (vat/100.00));
}
