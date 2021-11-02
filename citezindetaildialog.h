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
    void loadCitezinDetailsImage();
    void getVaccineDetails();
    void getTestDetails();
private:
    Ui::citezinDetailDialog *ui;
    //Instantiate pointer to pointer for citezinList MVC model Vector.
    //Pointer to pointer because we can't fix the size.
    Citezin** newCitezin;
    QString imageFilePath;
};

#endif // CITEZINDETAILDIALOG_H
