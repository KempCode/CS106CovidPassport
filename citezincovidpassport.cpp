#include "citezincovidpassport.h"
#include "ui_citezincovidpassport.h"

CitezinCovidPassport::CitezinCovidPassport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinCovidPassport)
{
    ui->setupUi(this);
}

CitezinCovidPassport::~CitezinCovidPassport()
{
    delete ui;
}
