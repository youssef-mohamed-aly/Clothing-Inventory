#include "updateitemdialog.h"
#include "ui_updateitemdialog.h"

updateitemDialog::updateitemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateitemDialog)
{
    ui->setupUi(this);
}

updateitemDialog::~updateitemDialog()
{
    delete ui;
}
