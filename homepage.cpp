#include "homepage.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    startButton = new QPushButton("立即测试");

    layout->addWidget(startButton, Qt::AlignCenter);
    layout->setMargin(50);
}
