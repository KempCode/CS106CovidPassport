#include "issue.h"

Issue::Issue(QString reportissue)
{
this->reportissue=reportissue;
}
void Issue::setIssue(QString reportissue)
{
    this->reportissue=reportissue;
}
QString Issue::getIssue(QString reportissue)
{
    return reportissue;
}

