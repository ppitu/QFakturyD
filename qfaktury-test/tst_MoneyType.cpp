#include "tst_MoneyType.h"

MoneyTest::MoneyTest()
{

}

void MoneyTest::test_constructor_from_string()
{
    using namespace qfaktury::core;

    Money money("100.00");

    QCOMPARE(money.toString(), "100.00");

    Money money1("100.23");

    QCOMPARE(money1.toString(), "100.23");
}

void MoneyTest::test_constructor_from_float()
{
    using namespace qfaktury::core;

    Money money(100.00);

    QCOMPARE(money.toString(), "100.00");

    Money money1(100.23);

    QCOMPARE(money1.toString(), "100.23");
}

void MoneyTest::test_constructor_from_int()
{
    using namespace qfaktury::core;

    Money money(10000);

    QCOMPARE(money.toString(), "100.00");

    Money money1(10023);

    QCOMPARE(money1.toString(), "100.23");
}
