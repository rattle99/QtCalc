#ifndef QTCALC_H
#define QTCALC_H

#include <QMainWindow>

namespace Ui {
class QtCalc;
}

class QtCalc : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtCalc(QWidget *parent = 0);
    ~QtCalc();

private:
    Ui::QtCalc *ui;
};

#endif // QTCALC_H
