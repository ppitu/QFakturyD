#include "tst_MoneyType.h"
#include "TypeClass/Money.h"

MoneyTest::MoneyTest()
{

}

void MoneyTest::test_constructor_from_string()
{
    using namespace qfaktury::core;

    {
        Money money("100.00", 2);

        QCOMPARE(money.toString(), "100.00");
    }
    {
        Money money("100.23", 2);

        QCOMPARE(money.toString(), "100.23");
    }
    {
        Money money("0.00", 2);

        QCOMPARE(money.toString(), "0.00");
    }
    {
        Money money("-100.00", 2);

        QCOMPARE(money.toString(), "-100.00");
    }
    {
        Money money("-100.50", 2);

        QCOMPARE(money.toString(), "-100.50");
    }
    {
        Money money("100.5", 1);

        QCOMPARE(money.toString(), "100.50");
    }
    {
        Money money("100.500", 3);

        QCOMPARE(money.toString(), "100.50");
    }
    {
        Money money("100.5000", 4);

        QCOMPARE(money.toString(), "100.50");
    }
    {
        Money money("100.50");

        QCOMPARE( money.toString(), "100.50");
    }
    {
      Money money("999.99", 2);

      QCOMPARE( money.toString(), "999.99");
    }
    {
      Money money("999.99");

      QCOMPARE( money.toString(), "999.99");
    }
}

void MoneyTest::test_constructor_from_float()
{
    using namespace qfaktury::core;
    {
        Money money(100.00, 2);

        QCOMPARE(money.toString(), "100.00");
    }
    {
        Money money(100.23, 2);

        QCOMPARE(money.toString(), "100.23");
    }
    {
        Money money(0.00, 2);

        QCOMPARE(money.toString(), "0.00");
    }
    {
        Money money(-100.00, 2);

        QCOMPARE(money.toString(), "-100.00");
    }
}

void MoneyTest::test_constructor_from_int()
{
    using namespace qfaktury::core;

    {
    Money money(10000, 2);

    QCOMPARE(money.toString(), "100.00");
}
    {
    Money money1(10023, 2);

    QCOMPARE(money1.toString(), "100.23");
}
    {
    Money money2(00, 2);

    QCOMPARE(money2.toString(), "0.00");
    }
    {
    Money money2(-10000, 2);

    QCOMPARE(money2.toString(), "-100.00");
    }
}

void MoneyTest::test_addition()
{
    using namespace qfaktury::core;

    {
        Money money("100.00", 2);
        Money money1("100.50", 2);

        QCOMPARE((money + money1).toString(), "200.50");
    }

    {
        Money money("100.50", 2);
        Money money1("100.50", 2);

        QCOMPARE((money + money1).toString(), "201.00");
    }
    {
        Money money("-100.50", 2);
        Money money1("100.50", 2);

        QCOMPARE((money + money1).toString(), "0.00");
    }
    {
        Money money("-50.00", 2);
        Money money1("-50.00", 2);

        QCOMPARE((money + money1).toString(), "-100.00");
    }
}

void MoneyTest::test_subtraction()
{
    using namespace qfaktury::core;

    {
        Money money("100.00", 2);
        Money money1("100.50", 2);

        QCOMPARE((money - money1).toString(), "-0.50");
    }

    {
        Money money("100.50", 2);
        Money money1("50.50", 2);

        QCOMPARE((money - money1).toString(), "50.00");
    }
}
