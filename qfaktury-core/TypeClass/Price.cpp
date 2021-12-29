#include "Price.h"


Price::Price(double net, int vat) :
    net(net),
    vat(vat),
    gross(0.00)
{
    calculate();
}

Price::Price() :
    net(0.00),
    vat(23),
    gross(0.00)
{

}

double Price::getNet() const
{
    return net;
}

double Price::getGross() const
{
    return gross;
}

int Price::getVat() const
{
    return vat;
}

void Price::calculate()
{
    gross = net + (net * (vat/100.00));
}
