#-------------------------------------------------
#
# Project created by QtCreator 2015-03-13T17:28:53
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = befairTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    productcreatedialog.cpp \
    msgthread.cpp \
    common.cpp

HEADERS  += mainwindow.h \
    productcreatedialog.h \
    msgthread.h \
    common.h

FORMS    += mainwindow.ui \
    productcreatedialog.ui
