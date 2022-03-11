#include "loginadmin.h"
#include "ui_loginadmin.h"
#include <QMessageBox>
loginadmin::loginadmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginadmin)
{
    ui->setupUi(this);
}

loginadmin::~loginadmin()
{
    delete ui;
}

void loginadmin::on_pushButton_cont_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();


    if (username == "admin" && password == "admin")
    {

        hide();
        adminmain = new class adminmain(this);
        adminmain->show();

    }
    else
    {
        QMessageBox::warning(this,"Login","Username and password are incorrect");
    }
}
