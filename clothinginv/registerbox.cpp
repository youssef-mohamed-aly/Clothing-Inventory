#include "registerbox.h"
#include "ui_registerbox.h"

registerbox::registerbox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerbox)
{
    ui->setupUi(this);
}

registerbox::~registerbox()
{
    delete ui;
}

void registerbox::on_pushButton_clicked()
{
    hide();
    shopp = new class shopp(this);
    shopp->show();
}


