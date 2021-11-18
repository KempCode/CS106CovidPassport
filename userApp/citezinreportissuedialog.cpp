#include "citezinreportissuedialog.h"
#include "ui_citezinreportissuedialog.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QStringList>
#include <QDate>
citezinReportIssueDialog::citezinReportIssueDialog(QString nhi, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinReportIssueDialog)
{

    ui->setupUi(this);
    this->nhi = nhi;
    //registering events
    connect(ui->submit,&QPushButton::clicked,this,&citezinReportIssueDialog::confirmSubmit);
}

citezinReportIssueDialog::~citezinReportIssueDialog()
{
    delete ui;
}

void citezinReportIssueDialog::confirmSubmit()
{
QString productIssue = ui->reportissue->text();

if(productIssue.trimmed() != "")
{
    QFile outputFile ("issue.txt");
    outputFile.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
    QTextStream out(&outputFile);


    out << nhi;
    out << ", ";
    out << ui->reportissue->text();
    out << ", ";
    out<<QDate::currentDate().toString("dd::MM::yyyy");
    out<< " , ";
    out << "\n";

    this->close();
}

}
