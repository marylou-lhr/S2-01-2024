QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    diaporama.cpp \
    image.cpp \
    imagedansdiapo.cpp \
    lecteur.cpp \
    main.cpp \
    lecteurvue.cpp \
    presentation.cpp

HEADERS += \
    database.h \
    diaporama.h \
    image.h \
    imagedansdiapo.h \
    lecteur.h \
    lecteurvue.h \
    presentation.h

FORMS += \
    lecteurvue.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressourcesDiapo.qrc
