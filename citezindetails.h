#ifndef CITEZINDETAILS_H
#define CITEZINDETAILS_H

#include <QMainWindow>

namespace Ui {
class CitezinDetails;
}

class CitezinDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinDetails(QWidget *parent = nullptr);
    ~CitezinDetails();

private:
    Ui::CitezinDetails *ui;
};

#endif // CITEZINDETAILS_H
