#ifndef RESULTPAGE_H
#define RESULTPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>

class ResultPage : public QWidget
{
    Q_OBJECT

public:
    ResultPage(QWidget *parent = 0);

    QLabel *label;

private:
    QVBoxLayout *layout;
};

#endif // RESULTPAGE_H
