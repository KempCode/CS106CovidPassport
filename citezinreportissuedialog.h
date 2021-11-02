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
    explicit citezinReportIssueDialog(QWidget *parent = nullptr);
    ~citezinReportIssueDialog();

private:
    Ui::citezinReportIssueDialog *ui;
};

#endif // CITEZINREPORTISSUEDIALOG_H
