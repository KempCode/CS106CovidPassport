#ifndef CITEZINCOVIDTESTDIALOG_H
#define CITEZINCOVIDTESTDIALOG_H

#include <QDialog>

namespace Ui {
class citezinCovidTestDialog;
}

class citezinCovidTestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinCovidTestDialog(QWidget *parent = nullptr);
    ~citezinCovidTestDialog();

private:
    Ui::citezinCovidTestDialog *ui;
};

#endif // CITEZINCOVIDTESTDIALOG_H
