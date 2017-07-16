#ifndef RESULTPAGE_H
#define RESULTPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <dlinkbutton.h>

DWIDGET_USE_NAMESPACE

class ResultPage : public QWidget
{
    Q_OBJECT

public:
    ResultPage(QWidget *parent = 0);

    QLabel *label;
    DLinkButton *button;

private:
    QVBoxLayout *layout;
};

#endif // RESULTPAGE_H
