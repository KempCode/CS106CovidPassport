#ifndef CITEZINVACCINEDETAILS_H
#define CITEZINVACCINEDETAILS_H

#include <QMainWindow>

namespace Ui {
class CitezinVaccineDetails;
}

class CitezinVaccineDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinVaccineDetails(QWidget *parent = nullptr);
    ~CitezinVaccineDetails();

private:
    Ui::CitezinVaccineDetails *ui;
};

#endif // CITEZINVACCINEDETAILS_H
