#include "shopp.h"
#include "ui_shopp.h"

shopp::shopp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopp)
{
    ui->setupUi(this);
}

shopp::~shopp()
{
    delete ui;
}
