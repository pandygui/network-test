#include "tabbar.h"
#include <QLabel>

TabBar::TabBar(QWidget *parent)
    : QWidget(parent)
{
    layout = new QHBoxLayout(this);

    QLabel *icon = new QLabel;
    icon->setPixmap(QPixmap(":/images/icon.svg").scaled(22, 22));

    QLabel *title = new QLabel("网络测速");

    layout->setContentsMargins(5, 0, 0, 0);

    layout->addWidget(icon);
    layout->addWidget(title);
    layout->addStretch();
}
