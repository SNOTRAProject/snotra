# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = SNOTRA
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui sql
SOURCES += modele/Device.cpp modele/ARPTable.cpp modele/DeviceN4.cpp ToolBox.cpp modele/ICMPHeader.cpp modele/NetworkInterface.cpp LoadManager.cpp modele/Frame.cpp DataBaseManager.cpp main.cpp modele/Wire.cpp modele/NetworkHeader.cpp modele/Hub.cpp modele/Header.cpp WireShark.cpp modele/Mac.cpp modele/ARPHeader.cpp modele/TransportHeader.cpp ObjectToCommunicate.cpp modele/UDPHeader.cpp modele/Switch.cpp RelevantActions.cpp modele/DataLinkHeader.cpp Game.cpp PropertiesOfIterfaceSetter.cpp IpManager.cpp NumberOfInterfaceSetter.cpp modele/RoutingTable.cpp modele/DeviceFactory.cpp NetworkGameArea.cpp modele/MacTable.cpp Confirmation.cpp modele/Ip.cpp BackupManager.cpp ConnecterChoice.cpp modele/TCPHeader.cpp modele/Mask.cpp
HEADERS += modele/ARPHeader.h modele/ICMPHeader.h RelevantActions.h ConnecterChoice.h Game.h modele/Header.h PropertiesOfIterfaceSetter.h modele/RoutingTable.h modele/enum.h modele/DataLinkHeader.h modele/Mask.h WireShark.h ToolBox.h modele/TCPHeader.h DataBaseManager.h Confirmation.h modele/UDPHeader.h NetworkGameArea.h modele/DeviceN4.h ObjectToCommunicate.h modele/MacTable.h modele/ARPTable.h modele/Ip.h modele/Wire.h BackupManager.h modele/TransportHeader.h modele/Switch.h modele/DeviceFactory.h NumberOfInterfaceSetter.h modele/Hub.h modele/Device.h LoadManager.h modele/Mac.h modele/NetworkHeader.h modele/Frame.h IpManager.h modele/NetworkInterface.h
FORMS += LoadManager.ui ToolBox.ui BackupManager.ui NetworkGameArea.ui PropertiesOfIterfaceSetter.ui IpManager.ui WireShark.ui ConnecterChoice.ui Confirmation.ui RelevantActions.ui NumberOfInterfaceSetter.ui Game.ui
RESOURCES += IconeItemNetwork/IconeItemNetwork.qrc
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
"QT += sql"
QMAKE_CXXFLAGS += -std=c++0x
