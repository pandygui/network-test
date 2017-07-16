#include "mainwindow.h"
#include <DApplication>
#include <dutility.h>

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();

    DApplication a(argc, argv);
    a.setTheme("dark");

    MainWindow w;
    w.setFixedSize(500, 400);
    w.show();

    return a.exec();
}
