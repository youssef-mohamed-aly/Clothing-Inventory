#include "additemdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->menunewproduct, &QAction::triggered,this,&MainWindow::handlemenuitemnew);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handlemenuitemnew()
{
    Item* newItem = nullptr;
    additemDialog additemdialog(newItem, nullptr);
    additemdialog.setModal(true);
    additemdialog.exec();

    if(newItem != nullptr)
    {
        productList.push_back(newItem);
        ui->lstproducts->addItem(newItem->getName());

    }

}
