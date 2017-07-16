#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DMainWindow>
#include <QStackedLayout>
#include <QTimer>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include "homepage.h"
#include "loadpage.h"
#include "resultpage.h"
#include "tabbar.h"

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *mainWidget;
    TabBar *tabbar;
    QStackedLayout *layout;
    HomePage *homePage;
    LoadPage *loadPage;
    ResultPage *resultPage;
    QTimer *timer;
    QNetworkAccessManager *http;

    void startTest();

    void timeOut();
    void replyFinished(QNetworkReply *);

    double time;
};

#endif // MAINWINDOW_H
