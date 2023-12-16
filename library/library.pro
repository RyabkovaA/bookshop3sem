QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addpackage.cpp \
    authorization.cpp \
    booksearch.cpp \
    booksearchresultwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    menuwindow.cpp

HEADERS += \
    addbook.h \
    addpackage.h \
    authorization.h \
    booksearch.h \
    booksearchresultwindow.h \
    mainwindow.h \
    menuwindow.h

FORMS += \
    addbook.ui \
    addpackage.ui \
    authorization.ui \
    booksearch.ui \
    booksearchresultwindow.ui \
    mainwindow.ui \
    menuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
