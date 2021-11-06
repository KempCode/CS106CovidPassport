#include "citezinreportissuedialog.h"
#include "ui_citezinreportissuedialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QStringList>

citezinReportIssueDialog::citezinReportIssueDialog(Issue*& newissue, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::citezinReportIssueDialog)
{
    this->newissue=&newissue;
    ui->setupUi(this);

    //registering events
    connect(ui->submit,&QPushButton::clicked,this,&citezinReportIssueDialog::confirmSubmit);
}

citezinReportIssueDialog::~citezinReportIssueDialog()
{
    delete ui;
}

void citezinReportIssueDialog::confirmSubmit()
{

    QString productIssue =ui->reportissue->text();
    if(productIssue.trimmed() != "")
    {
        *newissue = new Issue(productIssue);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Enter issue");
        mb.exec();
    }

    //FILE
     QFile outputFile ("issue.txt");
     outputFile.open(QIODevice::WriteOnly|QIODevice::Text);
     QTextStream out(&outputFile);

     for (Issue * productIssue:reportissue)
     {
         out<<productIssue->getIssue()<<","<<Qt::endl;
     }
}
