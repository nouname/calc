#ifndef HANDLER_H
#define HANDLER_H

#include "mainwindow.h"
#include <QObject>
#include <QPushButton>
#include <ui_mainwindow.h>

class Handler : public QObject
{
    Q_OBJECT

public:
    Handler(QObject *parent = nullptr);
    Ui::MainWindow *ui;
    double num_first;
    bool proc_flag;
    bool proc_cliked = false;

public slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_ac_clicked();
    void on_pushButton_r_clicked();
   // void on_pushButton_m_clicked();
    //void on_pushButton_p_clicked();
   // void on_pushButton_u_clicked();
   // void on_pushButton_d_clicked();
    void math_operations();
};

#endif // HANDLER_H
