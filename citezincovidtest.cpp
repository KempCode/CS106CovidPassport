#include "citezincovidtest.h"
#include "ui_citezincovidtest.h"

CitezinCovidTest::CitezinCovidTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinCovidTest)
{
    ui->setupUi(this);
}

CitezinCovidTest::~CitezinCovidTest()
{
    delete ui;
}
