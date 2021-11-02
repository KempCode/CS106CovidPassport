#include "citezincovidtestdialog.h"
#include "ui_citezincovidtestdialog.h"

citezinCovidTestDialog::citezinCovidTestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinCovidTestDialog)
{
    ui->setupUi(this);
}

citezinCovidTestDialog::~citezinCovidTestDialog()
{
    delete ui;
}
