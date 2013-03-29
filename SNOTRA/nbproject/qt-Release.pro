# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = SNOTRA
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui
SOURCES += ToolBox.cpp DataBaseManager.cpp main.cpp WireShark.cpp Game.cpp NetworkGameArea.cpp Frame.cpp PortConnecterChoice.cpp
HEADERS += Game.h Frame.h WireShark.h ToolBox.h DataBaseManager.h NetworkGameArea.h PortConnecterChoice.h
FORMS += Frame.ui PortConnecterChoice.ui ToolBox.ui NetworkGameArea.ui WireShark.ui Game.ui
RESOURCES += IconeItemNetwork/IconeItemNetwork.qrc
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
