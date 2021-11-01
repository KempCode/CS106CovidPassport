#include "citezinreportissue.h"
#include "ui_citezinreportissue.h"

CitezinReportIssue::CitezinReportIssue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CitezinReportIssue)
{
    ui->setupUi(this);
}

CitezinReportIssue::~CitezinReportIssue()
{
    delete ui;
}
