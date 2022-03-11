#ifndef LOGINN_H
#define LOGINN_H

#include <QMainWindow>
#include "shopp.h"
#include "loginadmin.h"
#include "registerbox.h"
QT_BEGIN_NAMESPACE
namespace Ui { class loginn; }
QT_END_NAMESPACE

class loginn : public QMainWindow
{
    Q_OBJECT

public:
    loginn(QWidget *parent = nullptr);
    ~loginn();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_ad_clicked();

    void on_pushButton_reg_clicked();

private:
    Ui::loginn *ui;
    shopp *shopp;
    loginadmin *loginadmin;
    registerbox *registerbox;

};
#endif // LOGINN_H
