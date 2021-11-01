#include "citezinvaccinedetails.h"
#include "ui_citezinvaccinedetails.h"

CitezinVaccineDetails::CitezinVaccineDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinVaccineDetails)
{
    ui->setupUi(this);
}

CitezinVaccineDetails::~CitezinVaccineDetails()
{
    delete ui;
}
