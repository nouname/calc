#include "handler.h"
#include <QDebug>

Handler::Handler(QObject *parent) : QObject(parent) {}

void Handler::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if (ui->result_show->text().contains(".") && button->text() == "0") {
        new_label = ui->result_show->text() + button->text();
    } else {

    all_numbers = (ui->result_show->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
}
    ui->result_show->setText(new_label);

}

void Handler::on_pushButton_dot_clicked()
{   if(!(ui->result_show->text().contains('.')))
    ui->result_show->setText(ui->result_show->text() + ".");
}

void Handler::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;

    if(button->text() == "+/-") {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 15);

        ui->result_show->setText(new_label);
    } else if (button->text() == "%" && proc_flag == false) {
        all_numbers = (ui->result_show->text()).toDouble();
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);

        ui->result_show->setText(new_label);
        //qDebug() << new_label;
    }

    if(button->text() == "%") proc_cliked = true;
}

void Handler::math_operations()
{
     QPushButton *button = (QPushButton *)sender();
     proc_flag = true;
     num_first = ui->result_show->text().toDouble();
     ui->result_show->setText("");
     button->setChecked(true);
}

void Handler::on_pushButton_ac_clicked()
{
    ui->pushButton_p->setChecked(false);
    ui->pushButton_m->setChecked(false);
    ui->pushButton_d->setChecked(false);
    ui->pushButton_u->setChecked(false);

    ui->result_show->setText("0");
}

void Handler::on_pushButton_r_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    num_second = ui->result_show->text().toDouble();
    // попытка
    if(ui->pushButton_p->isChecked()) {
        if (proc_cliked == true) {
            labelNumber = (1 + num_second * 0.01)*num_first;

        } else {

            labelNumber = num_first + num_second;
        }
        proc_cliked = false;

        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        proc_flag = false;
        ui->pushButton_p->setChecked(false);

    } else if (ui->pushButton_m->isChecked()) {

        if (proc_cliked == true) {
            labelNumber = (1 - num_second * 0.01)*num_first;

        } else {

            labelNumber = num_first - num_second;
        }
        proc_cliked = false;



        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        proc_flag = false;
        ui->pushButton_m->setChecked(false);
    } else if (ui->pushButton_d->isChecked()) {
        if (num_second == 0) {
            ui->result_show->setText("0");
        } else {


            if (proc_cliked == true) {
                labelNumber = (1 / (num_second * 0.01))*num_first;

            } else {

                labelNumber = num_first / num_second;
            }
            proc_cliked = false;

            new_label = QString::number(labelNumber, 'g', 15);

            ui->result_show->setText(new_label);
        }
        proc_flag = false;
        ui->pushButton_d->setChecked(false);
    } else if (ui->pushButton_u->isChecked()) {

        if (proc_cliked == true) {
            printf("Sesh");
            labelNumber = (1 * num_second * 0.01)*num_first;

        } else {

            labelNumber = num_first * num_second;
        }
        proc_cliked = false;

        new_label = QString::number(labelNumber, 'g', 15);

        ui->result_show->setText(new_label);
        proc_flag = false;
        ui->pushButton_u->setChecked(false);
    }
}
