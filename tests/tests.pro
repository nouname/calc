include(gtest_dependency.pri)

QT       += core gui
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage

LIBS += -lgcov

HEADERS += \
        tst_test.h \
    ../app/mainwindow.h

SOURCES += \
        main.cpp \
    ../app/mainwindow.cpp

FORMS += \
    ../app/mainwindow.ui

INCLUDEPATH += ../app
