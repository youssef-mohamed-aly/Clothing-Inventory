#ifndef LOGINADMIN_H
#define LOGINADMIN_H

#include <QDialog>
#include "adminmain.h"
namespace Ui {
class loginadmin;
}

class loginadmin : public QDialog
{
    Q_OBJECT

public:
    explicit loginadmin(QWidget *parent = nullptr);
    ~loginadmin();

private slots:
    void on_pushButton_cont_clicked();

private:
    Ui::loginadmin *ui;
    adminmain *adminmain;
};

#endif // LOGINADMIN_H
