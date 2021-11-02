#ifndef CITEZINVACCINEDIALOG_H
#define CITEZINVACCINEDIALOG_H

#include <QDialog>

namespace Ui {
class citezinVaccineDialog;
}

class citezinVaccineDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinVaccineDialog(QWidget *parent = nullptr);
    ~citezinVaccineDialog();

private:
    Ui::citezinVaccineDialog *ui;
};

#endif // CITEZINVACCINEDIALOG_H
