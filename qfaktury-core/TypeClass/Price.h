#ifndef PRICE_H
#define PRICE_H

// TODO
// Dodac obsluge dwoch liczba po przecinku, na razie moze ich byc wiecej

class Price final
{
public:
    Price(double net, int vat);
    Price();

    double getNet() const;
    double getGross() const;
    int getVat() const;

private:
    double net;
    double gross;
    int vat;

    void calculate();
};

#endif // PRICE_H
