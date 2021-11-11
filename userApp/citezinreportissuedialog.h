#ifndef CITEZINREPORTISSUEDIALOG_H
#define CITEZINREPORTISSUEDIALOG_H

#include <QDialog>
#include "issue.h"

namespace Ui {
class citezinReportIssueDialog;
}

class citezinReportIssueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinReportIssueDialog(Issue *& newissue, QWidget *parent = nullptr);
    ~citezinReportIssueDialog();
    void confirmSubmit();

private:
    Ui::citezinReportIssueDialog *ui;
    Issue** newissue;
    QVector<Issue*> reportissue;

};

#endif // CITEZINREPORTISSUEDIALOG_H
