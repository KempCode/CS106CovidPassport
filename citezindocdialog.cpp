#include "citezindocdialog.h"
#include "ui_citezindocdialog.h"

citezinDocDialog::citezinDocDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinDocDialog)
{
    ui->setupUi(this);
}

citezinDocDialog::~citezinDocDialog()
{
    delete ui;
}
