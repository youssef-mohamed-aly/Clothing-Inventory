#ifndef UPDATEITEMDIALOG_H
#define UPDATEITEMDIALOG_H

#include <QDialog>

namespace Ui {
class updateitemDialog;
}

class updateitemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit updateitemDialog(QWidget *parent = nullptr);
    ~updateitemDialog();

private:
    Ui::updateitemDialog *ui;
};

#endif // UPDATEITEMDIALOG_H
