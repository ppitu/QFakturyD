#ifndef TST_MONEYTEST_H
#define TST_MONEYTEST_H

#include <QTest>

#include "TypeClass/Money.h"

class MoneyTest : public QObject
{
    Q_OBJECT

public:
    MoneyTest();

private slots:
    void test_constructor_from_string();
    void test_constructor_from_float();
    void test_constructor_from_int();
    void test_addition();
    void test_subtraction();
};

#endif // TST_MONEYTEST_H
