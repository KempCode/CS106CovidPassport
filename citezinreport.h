#ifndef CITEZINREPORT_H
#define CITEZINREPORT_H

#include <QMainWindow>

namespace Ui {
class citezinReport;
}

class citezinReport : public QMainWindow
{
    Q_OBJECT

public:
    explicit citezinReport(QWidget *parent = nullptr);
    ~citezinReport();

private:
    Ui::citezinReport *ui;
};

#endif // CITEZINREPORT_H
