#ifndef ADMINMAIN_H
#define ADMINMAIN_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class adminmain;
}

class adminmain : public QDialog
{
    Q_OBJECT

public:
    explicit adminmain(QWidget *parent = nullptr);
    ~adminmain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminmain *ui;
    MainWindow *MainWindow;
};

#endif // ADMINMAIN_H
