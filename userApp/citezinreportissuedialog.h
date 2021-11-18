#ifndef CITEZINREPORTISSUEDIALOG_H
#define CITEZINREPORTISSUEDIALOG_H

#include <QDialog>


namespace Ui {
class citezinReportIssueDialog;
}

class citezinReportIssueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinReportIssueDialog(QString nhi, QWidget *parent = nullptr);
    ~citezinReportIssueDialog();

    void confirmSubmit();

private:
    Ui::citezinReportIssueDialog *ui;

    QVector<citezinReportIssueDialog*> reportissue;
      citezinReportIssueDialog** newissue;
    QString nhi;

};

#endif // CITEZINREPORTISSUEDIALOG_H
