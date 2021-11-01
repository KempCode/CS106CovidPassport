#ifndef CITEZINCOVIDTEST_H
#define CITEZINCOVIDTEST_H

#include <QMainWindow>

namespace Ui {
class CitezinCovidTest;
}

class CitezinCovidTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinCovidTest(QWidget *parent = nullptr);
    ~CitezinCovidTest();

private:
    Ui::CitezinCovidTest *ui;
};

#endif // CITEZINCOVIDTEST_H
