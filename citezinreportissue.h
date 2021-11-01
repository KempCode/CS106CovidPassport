#ifndef CITEZINREPORTISSUE_H
#define CITEZINREPORTISSUE_H

#include <QMainWindow>

namespace Ui {
class CitezinReportIssue;
}

class CitezinReportIssue : public QMainWindow
{
    Q_OBJECT

public:
    explicit CitezinReportIssue(QWidget *parent = nullptr);
    ~CitezinReportIssue();

private:
    Ui::CitezinReportIssue *ui;
};

#endif // CITEZINREPORTISSUE_H
