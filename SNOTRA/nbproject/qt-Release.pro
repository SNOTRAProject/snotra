# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux-x86
TARGET = SNOTRA
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui sql
SOURCES += modele/ChangeIp.cpp modele/Device.cpp modele/ARPTable.cpp modele/DeviceN4.cpp ToolBox.cpp modele/ICMPHeader.cpp modele/NetworkInterface.cpp modele/Frame.cpp DataBaseManager.cpp main.cpp modele/Wire.cpp modele/NetworkHeader.cpp modele/Hub.cpp WireShark.cpp modele/Header.cpp modele/Mac.cpp modele/ARPHeader.cpp modele/TransportHeader.cpp ObjectToCommunicate.cpp modele/UDPHeader.cpp modele/Switch.cpp RelevantActions.cpp modele/DataLinkHeader.cpp Game.cpp PropertiesOfIterfaceSetter.cpp NumberOfInterfaceSetter.cpp modele/RoutingTable.cpp NetworkGameArea.cpp Confirmation.cpp modele/MacTable.cpp modele/Ip.cpp modele/TCPHeader.cpp ConnecterChoice.cpp Charger.cpp modele/Mask.cpp Sauvegarder.cpp
HEADERS += Sauvegarder.h modele/ICMPHeader.h RelevantActions.h modele/ARPHeader.h ConnecterChoice.h Game.h modele/Header.h PropertiesOfIterfaceSetter.h modele/RoutingTable.h modele/ChangeIp.h modele/enum.h modele/DataLinkHeader.h modele/Mask.h WireShark.h ToolBox.h modele/TCPHeader.h DataBaseManager.h Confirmation.h modele/UDPHeader.h NetworkGameArea.h modele/DeviceN4.h Charger.h ObjectToCommunicate.h modele/MacTable.h modele/ARPTable.h modele/Ip.h modele/Wire.h modele/TransportHeader.h modele/Switch.h NumberOfInterfaceSetter.h modele/Hub.h modele/Device.h modele/Mac.h modele/NetworkHeader.h modele/Frame.h modele/NetworkInterface.h
FORMS += ToolBox.ui Charger.ui Sauvegarder.ui NetworkGameArea.ui PropertiesOfIterfaceSetter.ui modele/ChangeIp.ui WireShark.ui ConnecterChoice.ui Confirmation.ui RelevantActions.ui NumberOfInterfaceSetter.ui Game.ui
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
"QT += sql"
