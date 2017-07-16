#include "homepage.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    startButton = new DBaseButton("立即测试");

    startButton->setFixedHeight(50);
    startButton->setFixedWidth(200);

    layout->addWidget(startButton, 50, Qt::AlignCenter);
    layout->setMargin(50);
}
