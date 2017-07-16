#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

class HomePage : public QWidget
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = 0);

    QPushButton *startButton;

private:
    QVBoxLayout *layout;
};

#endif // HOMEPAGE_H
