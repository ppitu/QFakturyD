#ifndef TST_FIRSTTEST_H
#define TST_FIRSTTEST_H

#include <QTest>

class FirstTest : public QObject
{
    Q_OBJECT

public:
    FirstTest();
    ~FirstTest();

private slots:
    void test_case1();

};

#endif // TST_FIRSTTEST_H
