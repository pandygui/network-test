#include "resultpage.h"

ResultPage::ResultPage(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    label = new QLabel();

    layout->addWidget(label);
}
