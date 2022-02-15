cmake_minimum_required(VERSION 3.5)

project(qfaktury-test LANGUAGES CXX)

enable_testing()

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Test REQUIRED)

add_executable(qfaktury-test main.cpp
    tst_MoneyType.h tst_MoneyType.cpp
    tst_VatTest.h tst_VatTest.cpp)

include_directories("../qfaktury-core")

target_link_libraries(qfaktury-test PRIVATE Qt${QT_VERSION_MAJOR}::Test)
target_link_libraries(qfaktury-test PRIVATE qfaktury-core)
