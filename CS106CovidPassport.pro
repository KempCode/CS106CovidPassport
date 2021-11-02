QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    citezin.cpp \
    citezincovidtestdialog.cpp \
    citezindetaildialog.cpp \
    citezindocdialog.cpp \
    citezingeneralreport.cpp \
    citezinreportissuedialog.cpp \
    citezinvaccinedialog.cpp \
    covidpassportdialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    citezin.h \
    citezincovidtestdialog.h \
    citezindetaildialog.h \
    citezindocdialog.h \
    citezingeneralreport.h \
    citezinreportissuedialog.h \
    citezinvaccinedialog.h \
    covidpassportdialog.h \
    mainwindow.h

FORMS += \
    citezincovidtestdialog.ui \
    citezindetaildialog.ui \
    citezindocdialog.ui \
    citezingeneralreport.ui \
    citezinreportissuedialog.ui \
    citezinvaccinedialog.ui \
    covidpassportdialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
