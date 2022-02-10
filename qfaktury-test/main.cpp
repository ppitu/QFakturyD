#include <QTest>

#include "tst_MoneyType.h"
#include "tst_VatTest.h"

int main(int argc, char** argv)
{
    int status = 0;

    auto ASSERT_TEST = [&status, argc, argv](QObject* obj) {
        status |= QTest::qExec(obj, argc, argv);
        delete obj;
    };

    ASSERT_TEST(new MoneyTest());
    ASSERT_TEST(new VatTest());

    return status;
}
