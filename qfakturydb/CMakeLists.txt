cmake_minimum_required(VERSION 3.5)

project(qfakturydb VERSION 0.1 LANGUAGES CXX)

set(PROJECT_SOURCES
        main.cpp
        MainWindow.cpp
        MainWindow.h
        MainWindow.ui
        Dialog/ProductDialog.h Dialog/ProductDialog.cpp Dialog/ProductDialog.ui
        Widget/ProductWidget.h Widget/ProductWidget.cpp Widget/ProductWidget.ui
        Widget/ContractorWidget.h Widget/ContractorWidget.cpp Widget/ContractorWidget.ui
        Dialog/ContractorDialog.h Dialog/ContractorDialog.cpp Dialog/ContractorDialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(qfakturydb
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET qfakturydb APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(qfakturydb SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(qfakturydb
            ${PROJECT_SOURCES}
        )
    endif()
endif()

include_directories("../qfaktury-core")
include_directories("./Widget")

target_link_libraries(qfakturydb PRIVATE qfaktury-core)
target_link_libraries(qfakturydb PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(qfakturydb PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(qfakturydb)
endif()
