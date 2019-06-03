#include "handler.h"
#include "mainwindow.h"
#include <ui_mainwindow.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Handler *handler = new Handler(this);
    handler->ui = ui;

    connect(ui->pushButton_0, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), handler, SLOT(digits_numbers()));
    connect(ui->pushButton_inv, SIGNAL(clicked()), handler, SLOT(operations()));
    connect(ui->pushButton_proc, SIGNAL(clicked()), handler, SLOT(operations()));
    connect(ui->pushButton_r, SIGNAL(clicked()), handler, SLOT(on_pushButton_r_clicked()));
    connect(ui->pushButton_u, SIGNAL(clicked()), handler, SLOT(math_operations()));
    connect(ui->pushButton_m, SIGNAL(clicked()), handler, SLOT(math_operations()));
    connect(ui->pushButton_p, SIGNAL(clicked()), handler, SLOT(math_operations()));
    connect(ui->pushButton_d, SIGNAL(clicked()), handler, SLOT(math_operations()));
    connect(ui->pushButton_dot, SIGNAL(clicked()), handler, SLOT(on_pushButton_dot_clicked()));
    connect(ui->pushButton_ac, SIGNAL(clicked()), handler, SLOT(on_pushButton_ac_clicked()));

    ui->pushButton_d->setCheckable(true);
    ui->pushButton_u->setCheckable(true);
    ui->pushButton_m->setCheckable(true);
    ui->pushButton_p->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
