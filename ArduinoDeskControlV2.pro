#-------------------------------------------------
#
# Project created by QtCreator 2019-06-02T17:30:14
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ArduinoDeskControlV2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    ledsettingsdialog.cpp \
    controlersettingsdialog.cpp \
    applicationsettingsdialog.cpp \
    modestaticsettingsdialog.cpp \
    moderainbowsettingsdialog.cpp \
    modemusicsyncsettingsdialog.cpp \
    modecustomsettingsdialog.cpp

HEADERS += \
        mainwindow.h \
    ledsettingsdialog.h \
    controlersettingsdialog.h \
    applicationsettingsdialog.h \
    modestaticsettingsdialog.h \
    moderainbowsettingsdialog.h \
    modemusicsyncsettingsdialog.h \
    modecustomsettingsdialog.h

FORMS += \
        mainwindow.ui \
    ledsettingsdialog.ui \
    controlersettingsdialog.ui \
    applicationsettingsdialog.ui \
    modestaticsettingsdialog.ui \
    moderainbowsettingsdialog.ui \
    modemusicsyncsettingsdialog.ui \
    modecustomsettingsdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
