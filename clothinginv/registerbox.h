#ifndef REGISTERBOX_H
#define REGISTERBOX_H

#include <QDialog>
#include "shopp.h"
namespace Ui {
class registerbox;
}

class registerbox : public QDialog
{
    Q_OBJECT

public:
    explicit registerbox(QWidget *parent = nullptr);
    ~registerbox();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registerbox *ui;
    shopp *shopp;
};

#endif // REGISTERBOX_H
