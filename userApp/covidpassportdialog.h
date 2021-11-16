#ifndef COVIDPASSPORTDIALOG_H
#define COVIDPASSPORTDIALOG_H

#include <QDialog>

namespace Ui {
class covidPassportDialog;
}

class covidPassportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit covidPassportDialog(QWidget *parent = nullptr);

    ~covidPassportDialog();

private:
    Ui::covidPassportDialog *ui;
};

#endif // COVIDPASSPORTDIALOG_H
