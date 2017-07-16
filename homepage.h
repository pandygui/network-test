#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <dbasebutton.h>

DWIDGET_USE_NAMESPACE

class HomePage : public QWidget
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = 0);

    DBaseButton *startButton;

private:
    QVBoxLayout *layout;
};

#endif // HOMEPAGE_H
