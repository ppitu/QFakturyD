#include "tst_MoneyType.h"

MoneyTest::MoneyTest()
{

}

void MoneyTest::test_constructor_from_string()
{
    using namespace qfaktury::core;

    {
        Money money("100.00");

        QCOMPARE(money.toString(), "100.00");
    }
    {
        Money money("100.23");

        QCOMPARE(money.toString(), "100.23");
    }
    {
        Money money("0.00");

        QCOMPARE(money.toString(), "0.00");
    }
    {
        Money money("-100.00");

        QCOMPARE(money.toString(), "-100.00");
    }
    {
        Money money("-100.50");

        QCOMPARE(money.toString(), "-100.50");
    }
}

void MoneyTest::test_constructor_from_float()
{
    using namespace qfaktury::core;
    {
        Money money(100.00);

        QCOMPARE(money.toString(), "100.00");
    }
    {
        Money money(100.23);

        QCOMPARE(money.toString(), "100.23");
    }
    {
        Money money(0.00);

        QCOMPARE(money.toString(), "0.00");
    }
    {
        Money money(-100.00);

        QCOMPARE(money.toString(), "-100.00");
    }
}

void MoneyTest::test_constructor_from_int()
{
    using namespace qfaktury::core;

    {
    Money money(10000);

    QCOMPARE(money.toString(), "100.00");
}
    {
    Money money1(10023);

    QCOMPARE(money1.toString(), "100.23");
}
    {
    Money money2(00);

    QCOMPARE(money2.toString(), "0.00");
    }
    {
    Money money2(-10000);

    QCOMPARE(money2.toString(), "-100.00");
    }
}

void MoneyTest::test_addition()
{
    using namespace qfaktury::core;

    {
        Money money("100.00");
        Money money1("100.50");

        QCOMPARE((money + money1).toString(), "200.50");
    }

    {
        Money money("100.50");
        Money money1("100.50");

        QCOMPARE((money + money1).toString(), "201.00");
    }
    {
        Money money("-100.50");
        Money money1("100.50");

        QCOMPARE((money + money1).toString(), "0.00");
    }
    {
        Money money("-50.00");
        Money money1("-50.00");

        QCOMPARE((money + money1).toString(), "-100.00");
    }
}

void MoneyTest::test_subtraction()
{
    using namespace qfaktury::core;

    {
        Money money("100.00");
        Money money1("100.50");

        QCOMPARE((money - money1).toString(), "-0.50");
    }

    {
        Money money("100.50");
        Money money1("50.50");

        QCOMPARE((money - money1).toString(), "50.00");
    }
}
