#include "tst_test.h"
#include <gtest/gtest.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
