#ifndef MODIFYDIALOG_H
#define MODIFYDIALOG_H

#include <QDialog>
#include <citezin.h>

namespace Ui {
class ModifyDialog;
}

class ModifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyDialog(Citezin*& newCitezin, QWidget *parent = nullptr);
    ~ModifyDialog();

    void loadCitezinDetailsImage();
    void loadCitezinVaccineImage();
    void loadCitezinTestImage();


private slots:
    void on_vac1Radio_clicked();

    void on_vac2Radio_clicked();

    void on_vac3Radio_clicked();

private:
    Ui::ModifyDialog *ui;
    int localCitezinVaccineNumber = 0;
};

#endif // MODIFYDIALOG_H
