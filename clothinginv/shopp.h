#ifndef SHOPP_H
#define SHOPP_H

#include <QDialog>

namespace Ui {
class shopp;
}

class shopp : public QDialog
{
    Q_OBJECT

public:
    explicit shopp(QWidget *parent = nullptr);
    ~shopp();

private:
    Ui::shopp *ui;
};

#endif // SHOPP_H
