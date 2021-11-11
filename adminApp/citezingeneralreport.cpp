#include "citezingeneralreport.h"
#include "ui_citezingeneralreport.h"

citezinGeneralReport::citezinGeneralReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinGeneralReport)
{
    ui->setupUi(this);
}

citezinGeneralReport::~citezinGeneralReport()
{
    delete ui;
}
