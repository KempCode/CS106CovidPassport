#include "covidpassportdialog.h"
#include "ui_covidpassportdialog.h"

covidPassportDialog::covidPassportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::covidPassportDialog)
{
    ui->setupUi(this);
}

covidPassportDialog::~covidPassportDialog()
{
    delete ui;
}
