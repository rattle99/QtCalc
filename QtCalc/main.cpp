#include "qtcalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCalc w;
    w.show();

    return a.exec();
}
