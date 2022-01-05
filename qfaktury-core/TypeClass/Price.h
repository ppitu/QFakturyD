#ifndef PRICE_H
#define PRICE_H

// TODO
// Dodac obsluge dwoch liczba po przecinku, na razie moze ich byc wiecej

#include "Money.h"
#include "Vat.h"

class Price final
{
public:
    Price(const Money& new_net, const Vat& new_vat);
    Price();

    QString getNet() const;
    QString getGross() const;

private:
    Money net;
    Vat vat;

    void calculate();
};

#endif // PRICE_H
