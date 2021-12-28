cmake_minimum_required(VERSION 3.14)

project(qfaktury-core LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Sql REQUIRED)

add_library(qfaktury-core SHARED
  qfaktury-core_global.h
  Class/Address.cpp Class/Address.h Class/Contractor.cpp Class/Contractor.h
  Class/Product.cpp Class/Product.h
  Database/DatabaseManager.cpp Database/DatabaseManager.cpp
  DatabaseClass/AddressDao.cpp DatabaseClass/AddressDao.h
  DatabaseClass/ContractorDao.cpp DatabaseClass/ContractorDao.h
  DatabaseClass/ProductDao.cpp DatabaseClass/ProductDao.h
  Exception/EmailException.cpp Exception/EmailException.h
  Exception/NIPException.cpp Exception/NIPException.h
  Exception/PhoneException.cpp Exception/PhoneException.h
  Exception/PostCodeException.cpp Exception/PostCodeException.h
  Model/ProductModel.cpp Model/ProductModel.h
  TypeClass/City.cpp TypeClass/City.h
  TypeClass/Country.cpp TypeClass/Country.h
  TypeClass/County.cpp TypeClass/County.h
  TypeClass/Email.cpp TypeClass/Email.h
  TypeClass/FlatNumber.cpp TypeClass/FlatNumber.h
  TypeClass/HouseNumber.cpp TypeClass/HouseNumber.h
  TypeClass/Municipality.cpp TypeClass/Municipality.h
  TypeClass/NIP.cpp TypeClass/NIP.h
  TypeClass/Phone.cpp TypeClass/Phone.h
  TypeClass/PostCode.cpp TypeClass/PostCode.h
  TypeClass/Price.cpp TypeClass/Price.h
  TypeClass/Province.cpp TypeClass/Province.h
  TypeClass/Street.cpp TypeClass/Street.h
  TypeClass/Money.h TypeClass/Money.cpp
  Exception/MoneyException.h Exception/MoneyException.cpp
)

target_link_libraries(qfaktury-core PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(qfaktury-core PRIVATE QFAKTURYCORE_LIBRARY)
target_link_libraries(qfaktury-core PRIVATE Qt${QT_VERSION_MAJOR}::Sql)

target_compile_definitions(qfaktury-core PRIVATE QFAKTURYCORE_LIBRARY)
