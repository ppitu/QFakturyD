#include "tst_VatTest.h"

VatTest::VatTest()
{

}

void VatTest::test_simple_vat()
{
    using namespace qfaktury::core;

    Money money("100.00", 2);
    Vat vat("23");

    {
        Money result = money * vat;

        QCOMPARE(result.toString(), "23.00");
    }

    {
        Money result = money + (money * vat);
        QCOMPARE(result.toString(), "123.00");
    }

}
