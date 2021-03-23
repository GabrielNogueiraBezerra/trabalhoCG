QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    cor.cpp \
    cubo.cpp \
    main.cpp \
    mainwindow.cpp \
    meucanvas.cpp \
    ponto.cpp

HEADERS += \
    cor.h \
    cubo.h \
    mainwindow.h \
    meucanvas.h \
    ponto.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix|win32: LIBS += -lopengl32

unix|win32: LIBS += -lglu32
