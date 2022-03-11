#include "adminmain.h"
#include "ui_adminmain.h"

adminmain::adminmain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminmain)
{
    ui->setupUi(this);
}

adminmain::~adminmain()
{
    delete ui;
}

void adminmain::on_pushButton_clicked()
{
    hide();
    MainWindow = new class MainWindow(this);
    MainWindow->show();
}
