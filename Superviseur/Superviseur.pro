#-------------------------------------------------
#
# Project created by QtCreator 2016-01-04T17:34:52
#
#-------------------------------------------------

#permettre à qmake d'ajouter les chemins d'inclusion des en-têtes et les libs pour XML
QT += xml

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Superviseur
TEMPLATE = app


SOURCES += main.cpp\
        fen_superviseur.cpp \
    superviseur.cpp

HEADERS  += fen_superviseur.h \
    superviseur.h

FORMS    += fen_superviseur.ui
