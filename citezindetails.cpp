#include "citezindetails.h"
#include "ui_citezindetails.h"

CitezinDetails::CitezinDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinDetails)
{
    ui->setupUi(this);
}

CitezinDetails::~CitezinDetails()
{
    delete ui;
}
