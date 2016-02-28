TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ChangeableTable.cpp \
    PermamentTable.cpp \
    Lexeme.cpp

HEADERS += \
    ChangeableTable.h \
    PermamentTable.h \
    Lexeme.h
