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
    Citezin* loadVaccineDetails(Citezin* c1);
    Citezin* loadTestDetails(Citezin* c1);
    void modifyCitezin();


private slots:
    void on_vac1Radio_clicked();
    void on_vac2Radio_clicked();
    void on_vac3Radio_clicked();
    void on_covidPositive_clicked();
    void on_covidNegative_clicked();

private:
    Ui::ModifyDialog *ui;
    Citezin* newCitezin;
    int localCitezinVaccineNumber = 0;
    QString testResult = "Untested";
    QString imageFilePath;
    QString vaccineImageFilepath;
    QString covidTestImageFilepath;
};

#endif // MODIFYDIALOG_H
