#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();

    DApplication a(argc, argv);
    a.setTheme("light");

    MainWindow w;
    w.setWindowTitle("网速测试");
    w.setFixedSize(500, 400);
    w.setWindowIcon(QIcon(":/images/icon.svg"));
    w.show();

    Dtk::Widget::moveToCenter(&w);

    return a.exec();
}
