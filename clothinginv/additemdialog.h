#ifndef ADDITEMDIALOG_H
#define ADDITEMDIALOG_H

#include <QDialog>
#include "Item.h"

namespace Ui {
class additemDialog;
}

class additemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit additemDialog(Item*& newItem,QWidget* parent = nullptr);
    ~additemDialog();
    void confirmAdd();
    void loadItemImage();

private:
    Ui::additemDialog *ui;
    Item** newItem;
    QString imageFilePath;
};

#endif // ADDITEMDIALOG_H
