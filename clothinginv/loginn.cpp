#include "loginn.h"
#include "ui_loginn.h"
#include <QMessageBox>


loginn::loginn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginn)
{
    ui->setupUi(this);
}

loginn::~loginn()
{
    delete ui;
}


void loginn::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit->text();


    if (username == "test" && password == "test")
    {
        ui->statusbar->showMessage("Username and password are correct");
        hide();
        shopp = new class shopp(this);
        shopp->show();

    }
    else
    {
        QMessageBox::warning(this,"Login","Username and password are incorrect");
    }

}


void loginn::on_pushButton_ad_clicked()
{
    hide();
    loginadmin = new class loginadmin();
    loginadmin->show();
}



void loginn::on_pushButton_reg_clicked()
{
    hide ();
    registerbox = new class registerbox;
    registerbox->show();
}
