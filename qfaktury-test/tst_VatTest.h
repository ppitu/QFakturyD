#ifndef VATTEST_H
#define VATTEST_H

#include <QTest>

#include "TypeClass/Money.h"
#include "TypeClass/Vat.h"

class VatTest : public QObject
{
    Q_OBJECT

public:
    VatTest();

private slots:
    void test_simple_vat();
};

#endif // VATTEST_H
