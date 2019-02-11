#include "qtcalc.h"
#include "ui_qtcalc.h"

QtCalc::QtCalc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtCalc)
{
    ui->setupUi(this);
}

QtCalc::~QtCalc()
{
    delete ui;
}
