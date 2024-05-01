QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aftergoal.cpp \
    ball.cpp \
    button.cpp \
    game.cpp \
    kickoff.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    playerbutton.cpp \
    prescene.cpp \
    selectbutton1.cpp \
    selectdialog1.cpp \
    selectdialog2.cpp \
    win1.cpp \
    win2.cpp

HEADERS += \
    aftergoal.h \
    ball.h \
    button.h \
    game.h \
    kickoff.h \
    mainwindow.h \
    player.h \
    playerbutton.h \
    prescene.h \
    selectbutton1.h \
    selectdialog1.h \
    selectdialog2.h \
    win1.h \
    win2.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
