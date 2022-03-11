#include "additemdialog.h"
#include "ui_additemdialog.h"
#include <QDir>
#include <QMessageBox>
#include <QfileDialog>
additemDialog::additemDialog(Item*& newItem,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::additemDialog)
{
    ui->setupUi(this);
    this->newItem = &newItem;
    imageFilePath = "none.png";

    connect(ui->btnconfirmadd,&QPushButton::clicked,this, &additemDialog::confirmAdd);
    connect(ui->btnloadimage,&QPushButton::clicked,this,&additemDialog::loadItemImage);

    QDir pathDir("./image");
    if(!pathDir.exists())
    {
        QDir().mkdir("./images");
    }


}

additemDialog::~additemDialog()
{
    delete ui;
}

void additemDialog::confirmAdd()
{
    QString productName = ui->txtproductname->text();
    int quantity = ui->sbquantity->value();

    if(productName.trimmed()!="" && quantity >= 1 )
    {
        *newItem = new Item(productName,quantity, imageFilePath);
        this->close();

    }
    else
    {
        QMessageBox mb;
        mb.setText("You max have a valid name and a quantity of at least 1 ");
        mb.exec();
    }



}

void additemDialog::loadItemImage()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this,"open image", "./","Image Files (*.png *.jpg)");


    if(filename != "")
    {
        int lastSlash = filename.lastIndexOf("/");
        QString shortName = filename.right(filename.size()-lastSlash - 1);

        QFile::copy(filename,"./images" + shortName);

        QPixmap pixmap("./images" + shortName);

        ui->lblimage->setPixmap(pixmap);
        ui->lblimage->setScaledContents(true);

        imageFilePath = "./images/"+shortName;

    }

}
