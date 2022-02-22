cmake_minimum_required(VERSION 3.14)

project(qfakturydb)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if( CMAKE_BUILD_TYPE STREQUAL "Debug" )
  message(NOTICE "Error detection options have been added")
  add_compile_options(
      -fvisibility=hidden
      -fvisibility-inlines-hidden

      -fstack-protector
  )

  # enable warnings
  add_compile_options(
      -Werror

      -Wall
      -Wextra
      -Wpedantic

      -Wcast-align
      -Wcast-qual
      -Wctor-dtor-privacy
      -Wformat
      -Wlogical-op
      -Wnoexcept
      -Wold-style-cast
      -Wredundant-decls
      -Wstack-protector
      -Wstrict-null-sentinel

      # Code fixes required to enable following warnings
  #    -Wconversion
  #    -Wdouble-promotion
  #    -Woverloaded-virtual
  #    -Wzero-as-null-pointer-constant
  )

  # disable warnings
  add_compile_options(
      -Wno-deprecated-declarations
  )

  # usefull switches for debugging
  #add_compile_options(
  #    -finstrument-functions
  #    -fsanitize=address
  #    -fno-omit-frame-pointer
  #    -fsanitize=leak
  #)
endif()

find_package(QT NAMES Qt6 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_subdirectory(qfaktury-core)
add_subdirectory(qfakturydb)
add_subdirectory(qfaktury-test)
