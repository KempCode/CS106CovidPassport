#ifndef ISSUE_H
#define ISSUE_H
#include <QString>

class Issue
{
public:
    Issue(QString reportissue);
    void setIssue(QString reportissue);
    QString getIssue()const;
private:
    QString reportissue;
};

#endif // ISSUE_H
