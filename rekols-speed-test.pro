#-------------------------------------------------
#
# Project created by QtCreator 2017-07-16T18:36:44
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rekols-speed-test
TEMPLATE = app

CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += dtkwidget dtkbase dtkutil

SOURCES += main.cpp\
        mainwindow.cpp \
    homepage.cpp \
    resultpage.cpp

HEADERS  += mainwindow.h \
    homepage.h \
    resultpage.h