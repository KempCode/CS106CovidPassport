#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void on_actionReport_Issue_triggered();

    void on_actionView_Certificate_triggered();

    void on_actionLogout_triggered();

private:
    Ui::UserWindow *ui;
};

#endif // USERWINDOW_H
