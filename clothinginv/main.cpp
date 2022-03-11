#include "loginn.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginn w;
    w.show();
    return a.exec();
}
