#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    mainWidget = new QWidget();
    layout = new QStackedLayout;
    homePage = new HomePage;
    resultPage = new ResultPage;
    timer = new QTimer(this);
    http = new QNetworkAccessManager(this);
    time = 0;

    layout->addWidget(homePage);
    layout->addWidget(resultPage);

    mainWidget->setLayout(layout);

    connect(http, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished);
    connect(timer, &QTimer::timeout, this, &MainWindow::timeOut);
    connect(homePage->startButton, &QPushButton::clicked, this, &MainWindow::startTest);

    setCentralWidget(mainWidget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::startTest()
{
    QNetworkRequest request;
    request.setUrl(QUrl("https://bbs.deepin.org/data/attachment/forum/201706/06/134606egatt1wrvgy317jr.jpg"));
    http->get(request);

    timer->start(10);
}

void MainWindow::timeOut()
{
    time = time + 0.01;
}

void MainWindow::replyFinished(QNetworkReply *reply)
{
    timer->stop();

    double times = reply->size() / time;
    QString temp = QString::number(times, 'f', 2);
    double result = temp.toDouble() / 1024;

    resultPage->label->setText("下载速度：" + QString::number(result, 'f', 2) + " KB/s");

    layout->setCurrentIndex(1);
}
