#ifndef CITEZINDETAILDIALOG_H
#define CITEZINDETAILDIALOG_H

#include <QDialog>
#include "citezin.h"

namespace Ui {
class citezinDetailDialog;
}

class citezinDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit citezinDetailDialog(Citezin*& newCitezin, QWidget *parent = nullptr);
    ~citezinDetailDialog();
    void addCitezinDetails();
    Citezin* getVaccineDetails(Citezin* c1);
    Citezin* getTestDetails(Citezin* c1);
    void loadCitezinDetailsImage();
    void loadCitezinVaccineImage();
    void loadCitezinTestImage();
    void loadQRImage();



private slots:
    void on_vac1Radio_clicked();
    void on_vac2Radio_clicked();
    void on_vac3Radio_clicked();
    void on_covidPositive_clicked();
    void on_covidNegative_clicked();

private:
    Ui::citezinDetailDialog *ui;
    //Instantiate pointer to pointer for citezinList MVC model Vector.
    //Pointer to pointer because we can't fix the size.
    Citezin** newCitezin;
    QString imageFilePath;
    QString vaccineImageFilepath;
    QString covidTestImageFilepath;
    QString qrImageFilepath="";
    QString testResult = "Untested";
    int localCitezinVaccineNumber=0;
};

#endif // CITEZINDETAILDIALOG_H
