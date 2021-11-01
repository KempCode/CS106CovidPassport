#include "citezindoc.h"
#include "ui_citezindoc.h"

CitezinDoc::CitezinDoc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinDoc)
{
    ui->setupUi(this);
}

CitezinDoc::~CitezinDoc()
{
    delete ui;
}
