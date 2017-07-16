#ifndef TABBAR_H
#define TABBAR_H

#include <QWidget>
#include <QHBoxLayout>

class TabBar : public QWidget
{
    Q_OBJECT

public:
    TabBar(QWidget *parent = 0);

private:
    QHBoxLayout *layout;
};

#endif // TABBAR_H
