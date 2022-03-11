QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Item.cpp \
    additemdialog.cpp \
    adminmain.cpp \
    loginadmin.cpp \
    main.cpp \
    loginn.cpp \
    mainwindow.cpp \
    registerbox.cpp \
    shopp.cpp \
    updateitemdialog.cpp

HEADERS += \
    Item.h \
    additemdialog.h \
    adminmain.h \
    loginadmin.h \
    loginn.h \
    mainwindow.h \
    registerbox.h \
    shopp.h \
    updateitemdialog.h

FORMS += \
    additemdialog.ui \
    adminmain.ui \
    loginadmin.ui \
    loginn.ui \
    mainwindow.ui \
    registerbox.ui \
    shopp.ui \
    updateitemdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
