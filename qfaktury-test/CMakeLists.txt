cmake_minimum_required(VERSION 3.5)

project(qfaktury-test LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(qfaktury-test main.cpp tst_firsttest.cpp tst_firsttest.h)

include_directories("../qfaktury-core")

target_link_libraries(qfaktury-test PRIVATE Qt${QT_VERSION_MAJOR}::Test)
target_link_libraries(qfaktury-test PRIVATE qfaktury-core)
