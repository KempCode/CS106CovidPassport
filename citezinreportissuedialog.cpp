#include "citezinreportissuedialog.h"
#include "ui_citezinreportissuedialog.h"

citezinReportIssueDialog::citezinReportIssueDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinReportIssueDialog)
{
    ui->setupUi(this);
}

citezinReportIssueDialog::~citezinReportIssueDialog()
{
    delete ui;
}
