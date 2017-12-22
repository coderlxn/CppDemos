TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += D:/boost/include

LIBS += -L"D:/boost/lib140" \
    -llibboost_system-vc140-mt-gd-1_65_1

SOURCES += main.cpp
