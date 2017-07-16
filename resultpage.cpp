#include "resultpage.h"

ResultPage::ResultPage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    label = new QLabel();
    button = new DLinkButton("重新测速");

    QFont font;
    font.setPointSize(14);
    label->setFont(font);

    QLabel *icon = new QLabel;
    icon->setPixmap(QPixmap(":/images/tips.svg"));
    QLabel *label2 = new QLabel("测试结果为相对速度，并非真实数据");

    layout->addWidget(icon, 5, Qt::AlignCenter);
    layout->addWidget(label, 5, Qt::AlignCenter);
    layout->addWidget(label2, 5, Qt::AlignCenter);
    layout->addWidget(button, 5, Qt::AlignCenter);
}
