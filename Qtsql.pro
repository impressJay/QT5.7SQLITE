#-------------------------------------------------
#
# Project created by QtCreator 2018-08-24T10:17:28
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qtsql
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

DISTFILES += \
    Qss/css/qss.css

RESOURCES += \
    qss.qrc
