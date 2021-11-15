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

private:
    Ui::ModifyDialog *ui;
};

#endif // MODIFYDIALOG_H
