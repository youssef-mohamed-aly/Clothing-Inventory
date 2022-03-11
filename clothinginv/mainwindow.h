#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Item.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void handlemenuitemnew();

private:
    Ui::MainWindow *ui;
    QVector<Item*> productList;
};

#endif // MAINWINDOW_H
