#ifndef CITEZINGENERALREPORT_H
#define CITEZINGENERALREPORT_H

#include <QDialog>

namespace Ui {
class citezinGeneralReport;
}

class citezinGeneralReport : public QDialog
{
    Q_OBJECT

public:
    explicit citezinGeneralReport(QWidget *parent = nullptr);
    ~citezinGeneralReport();

private:
    Ui::citezinGeneralReport *ui;
};

#endif // CITEZINGENERALREPORT_H
