#include "citezinvaccinedialog.h"
#include "ui_citezinvaccinedialog.h"

citezinVaccineDialog::citezinVaccineDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinVaccineDialog)
{
    ui->setupUi(this);
}

citezinVaccineDialog::~citezinVaccineDialog()
{
    delete ui;
}
