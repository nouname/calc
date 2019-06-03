#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../app/handler.h"
#include <QObject>

using namespace testing;

TEST(test0, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_0->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test1, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_1->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "1");
}

TEST(test2, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_2->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "2");
}

TEST(test3, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_3->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "3");
}

TEST(test4, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_4->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "4");
}


TEST(test5, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_5->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "5");
}

TEST(test6, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_6, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_6->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "6");
}

TEST(test7, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_7, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_7->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "7");
}

TEST(test8, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_8, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_8->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "8");
}

TEST(test9, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    ui->pushButton_9->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "9");
}

TEST(test10, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_inv, SIGNAL(clicked()), handler, SLOT(operations()));

    /* Нажали клавишу +/- */
    ui->pushButton_inv->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test11, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test12, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_proc, SIGNAL(clicked()), handler, SLOT(operations()));

    /* Нажали клавишу % */
    ui->pushButton_proc->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test13, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_u, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу * */
    ui->pushButton_u->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "");
}

TEST(test14, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_d, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу / */
    ui->pushButton_d->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "");
}


TEST(test15, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_p, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу + */
    ui->pushButton_p->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "");
}

TEST (test16, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_m, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу - */
    ui->pushButton_m->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "");
}

TEST(test17, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_dot, SIGNAL(clicked()), handler, SLOT(on_pushButton_dot_clicked()));

    /* Нажали клавишу . */
    ui->pushButton_dot->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0.");
}

TEST(test18, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    ui->pushButton_m->setCheckable(true);

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_m, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу - */
    ui->pushButton_m->click();

    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 5 */
    ui->pushButton_5->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "-4");
}

TEST(test19, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    ui->pushButton_p->setCheckable(true);
    ui->pushButton_u->setCheckable(true);

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 2 */
    ui->pushButton_2->click();

    QObject::connect(ui->pushButton_u, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу * */
    ui->pushButton_u->click();

    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 5 */
    ui->pushButton_5->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "10");
}

TEST (test20, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    ui->pushButton_d->setCheckable(true);

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 2 */
    ui->pushButton_2->click();

    QObject::connect(ui->pushButton_d, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу / */
    ui->pushButton_d->click();

    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 4 */
    ui->pushButton_4->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0.5");
}

TEST(test21, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    ui->pushButton_d->setCheckable(true);
    ui->pushButton_m->setCheckable(true);

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 2 */
    ui->pushButton_2->click();

    QObject::connect(ui->pushButton_d, SIGNAL(clicked()), handler, SLOT(math_operations()));

    /* Нажали клавишу * */
    ui->pushButton_d->click();

    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test22, tests)
{
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_inv, SIGNAL(clicked()), handler, SLOT(operations()));

    /* Нажали клавишу +/- */
    ui->pushButton_inv->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "-1");
}

TEST(test23, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    handler->proc_flag = false;

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_proc, SIGNAL(clicked()), handler, SLOT(operations()));

    /* Нажали клавишу % */
    ui->pushButton_proc->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0.01");
}

TEST(test24, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_ac, SIGNAL(clicked()), handler, SLOT(on_pushButton_ac_clicked()));

    /* Нажали клавишу AC */
    ui->pushButton_ac->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0");
}

TEST(test25, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 9 */
    ui->pushButton_9->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "9999999");
}


TEST(test26, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    ui->pushButton_dot->setCheckable(true);

    QObject::connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 0 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_dot, SIGNAL(clicked()), handler, SLOT(on_pushButton_dot_clicked()));

    /* Нажали клавишу . */
    ui->pushButton_dot->click();

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();


    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "0.01");
}

TEST(test27, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    QObject::connect(ui->pushButton_dot, SIGNAL(clicked()), handler, SLOT(on_pushButton_dot_clicked()));

    /* Нажали клавишу . */
    ui->pushButton_dot->click();

    QObject::connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    QObject::connect(ui->pushButton_p, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу + */
    ui->pushButton_p->click();

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "1");
}

TEST(test28, tests) {
    Ui::MainWindow *ui = new Ui::MainWindow;
    Handler *handler = new Handler(nullptr);
    ui->setupUi(new QMainWindow());
    handler->ui = ui;

    QObject::connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 1 */
    ui->pushButton_1->click();

    QObject::connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    /* Нажали клавишу 0 */
    ui->pushButton_0->click();

    QObject::connect(ui->pushButton_p, SIGNAL(clicked()), handler, SLOT(math_operations()));

    ui->pushButton_p->setCheckable(true);

    /* Нажали клавишу + */
    ui->pushButton_p->click();

    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), handler, SLOT(digits_numbers()));

    /* Нажали клавишу 5 */
    ui->pushButton_5->click();

    QObject::connect(ui->pushButton_proc, SIGNAL(clicked()), handler, SLOT(operations()));

    /* Нажали клавишу % */
    ui->pushButton_proc->click();

    QObject::connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));

    /* Нажали клавишу = */
    ui->pushButton_r->click();

    EXPECT_STREQ(handler->ui->result_show->text().toStdString().c_str(), "105");
}
