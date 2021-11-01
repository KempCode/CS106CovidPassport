#ifndef CITEZINCOVIDPASSPORT_H
#define CITEZINCOVIDPASSPORT_H

#include <QMainWindow>

namespace Ui {
class CitezinCovidPassport;
}

class CitezinCovidPassport : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinCovidPassport(QWidget *parent = nullptr);
    ~CitezinCovidPassport();

private:
    Ui::CitezinCovidPassport *ui;
};

#endif // CITEZINCOVIDPASSPORT_H
