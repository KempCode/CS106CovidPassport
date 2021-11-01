#include "citezinreport.h"
#include "ui_citezinreport.h"

citezinReport::citezinReport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::citezinReport)
{
    ui->setupUi(this);
}

citezinReport::~citezinReport()
{
    delete ui;
}
