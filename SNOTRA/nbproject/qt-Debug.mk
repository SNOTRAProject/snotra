#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/SNOTRA
# Generated by qmake (2.01a) (Qt 4.8.3) on: ven. avr. 12 15:40:38 2013
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/bin/qmake-qt4 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -std=c++0x -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -Inbproject -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = modele/Device.cpp \
		modele/ARPTable.cpp \
		modele/DeviceN4.cpp \
		ToolBox.cpp \
		modele/ICMPHeader.cpp \
		modele/NetworkInterface.cpp \
		modele/Frame.cpp \
		DataBaseManager.cpp \
		main.cpp \
		modele/Wire.cpp \
		modele/NetworkHeader.cpp \
		modele/Hub.cpp \
		WireShark.cpp \
		modele/Header.cpp \
		modele/Mac.cpp \
		modele/ARPHeader.cpp \
		modele/TransportHeader.cpp \
		ObjectToCommunicate.cpp \
		modele/UDPHeader.cpp \
		modele/Switch.cpp \
		RelevantActions.cpp \
		modele/DataLinkHeader.cpp \
		Game.cpp \
		PropertiesOfIterfaceSetter.cpp \
		NumberOfInterfaceSetter.cpp \
		modele/RoutingTable.cpp \
		NetworkGameArea.cpp \
		Confirmation.cpp \
		modele/MacTable.cpp \
		modele/Ip.cpp \
		modele/TCPHeader.cpp \
		ConnecterChoice.cpp \
		Charger.cpp \
		modele/Mask.cpp \
		Sauvegarder.cpp moc_Sauvegarder.cpp \
		moc_RelevantActions.cpp \
		moc_ConnecterChoice.cpp \
		moc_Game.cpp \
		moc_PropertiesOfIterfaceSetter.cpp \
		moc_WireShark.cpp \
		moc_ToolBox.cpp \
		moc_Confirmation.cpp \
		moc_NetworkGameArea.cpp \
		moc_Charger.cpp \
		moc_NumberOfInterfaceSetter.cpp \
		qrc_IconeItemNetwork.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/Device.o \
		build/Debug/GNU-Linux-x86/ARPTable.o \
		build/Debug/GNU-Linux-x86/DeviceN4.o \
		build/Debug/GNU-Linux-x86/ToolBox.o \
		build/Debug/GNU-Linux-x86/ICMPHeader.o \
		build/Debug/GNU-Linux-x86/NetworkInterface.o \
		build/Debug/GNU-Linux-x86/Frame.o \
		build/Debug/GNU-Linux-x86/DataBaseManager.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/Wire.o \
		build/Debug/GNU-Linux-x86/NetworkHeader.o \
		build/Debug/GNU-Linux-x86/Hub.o \
		build/Debug/GNU-Linux-x86/WireShark.o \
		build/Debug/GNU-Linux-x86/Header.o \
		build/Debug/GNU-Linux-x86/Mac.o \
		build/Debug/GNU-Linux-x86/ARPHeader.o \
		build/Debug/GNU-Linux-x86/TransportHeader.o \
		build/Debug/GNU-Linux-x86/ObjectToCommunicate.o \
		build/Debug/GNU-Linux-x86/UDPHeader.o \
		build/Debug/GNU-Linux-x86/Switch.o \
		build/Debug/GNU-Linux-x86/RelevantActions.o \
		build/Debug/GNU-Linux-x86/DataLinkHeader.o \
		build/Debug/GNU-Linux-x86/Game.o \
		build/Debug/GNU-Linux-x86/PropertiesOfIterfaceSetter.o \
		build/Debug/GNU-Linux-x86/NumberOfInterfaceSetter.o \
		build/Debug/GNU-Linux-x86/RoutingTable.o \
		build/Debug/GNU-Linux-x86/NetworkGameArea.o \
		build/Debug/GNU-Linux-x86/Confirmation.o \
		build/Debug/GNU-Linux-x86/MacTable.o \
		build/Debug/GNU-Linux-x86/Ip.o \
		build/Debug/GNU-Linux-x86/TCPHeader.o \
		build/Debug/GNU-Linux-x86/ConnecterChoice.o \
		build/Debug/GNU-Linux-x86/Charger.o \
		build/Debug/GNU-Linux-x86/Mask.o \
		build/Debug/GNU-Linux-x86/Sauvegarder.o \
		build/Debug/GNU-Linux-x86/moc_Sauvegarder.o \
		build/Debug/GNU-Linux-x86/moc_RelevantActions.o \
		build/Debug/GNU-Linux-x86/moc_ConnecterChoice.o \
		build/Debug/GNU-Linux-x86/moc_Game.o \
		build/Debug/GNU-Linux-x86/moc_PropertiesOfIterfaceSetter.o \
		build/Debug/GNU-Linux-x86/moc_WireShark.o \
		build/Debug/GNU-Linux-x86/moc_ToolBox.o \
		build/Debug/GNU-Linux-x86/moc_Confirmation.o \
		build/Debug/GNU-Linux-x86/moc_NetworkGameArea.o \
		build/Debug/GNU-Linux-x86/moc_Charger.o \
		build/Debug/GNU-Linux-x86/moc_NumberOfInterfaceSetter.o \
		build/Debug/GNU-Linux-x86/qrc_IconeItemNetwork.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = SNOTRA
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/SNOTRA

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_ToolBox.h ui_Charger.h ui_Sauvegarder.h ui_NetworkGameArea.h ui_PropertiesOfIterfaceSetter.h ui_WireShark.h ui_ConnecterChoice.h ui_Confirmation.h ui_RelevantActions.h ui_NumberOfInterfaceSetter.h ui_Game.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtSql.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtSql.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux-x86/SNOTRA1.0.0 || $(MKDIR) build/Debug/GNU-Linux-x86/SNOTRA1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/SNOTRA1.0.0/ && $(COPY_FILE) --parents Sauvegarder.h modele/ICMPHeader.h RelevantActions.h modele/ARPHeader.h ConnecterChoice.h Game.h modele/Header.h PropertiesOfIterfaceSetter.h modele/RoutingTable.h modele/enum.h modele/DataLinkHeader.h modele/Mask.h WireShark.h ToolBox.h modele/TCPHeader.h DataBaseManager.h Confirmation.h modele/UDPHeader.h NetworkGameArea.h modele/DeviceN4.h Charger.h ObjectToCommunicate.h modele/MacTable.h modele/ARPTable.h modele/Ip.h modele/Wire.h modele/TransportHeader.h modele/Switch.h NumberOfInterfaceSetter.h modele/Hub.h modele/Device.h modele/Mac.h modele/NetworkHeader.h modele/Frame.h modele/NetworkInterface.h build/Debug/GNU-Linux-x86/SNOTRA1.0.0/ && $(COPY_FILE) --parents IconeItemNetwork/IconeItemNetwork.qrc build/Debug/GNU-Linux-x86/SNOTRA1.0.0/ && $(COPY_FILE) --parents modele/Device.cpp modele/ARPTable.cpp modele/DeviceN4.cpp ToolBox.cpp modele/ICMPHeader.cpp modele/NetworkInterface.cpp modele/Frame.cpp DataBaseManager.cpp main.cpp modele/Wire.cpp modele/NetworkHeader.cpp modele/Hub.cpp WireShark.cpp modele/Header.cpp modele/Mac.cpp modele/ARPHeader.cpp modele/TransportHeader.cpp ObjectToCommunicate.cpp modele/UDPHeader.cpp modele/Switch.cpp RelevantActions.cpp modele/DataLinkHeader.cpp Game.cpp PropertiesOfIterfaceSetter.cpp NumberOfInterfaceSetter.cpp modele/RoutingTable.cpp NetworkGameArea.cpp Confirmation.cpp modele/MacTable.cpp modele/Ip.cpp modele/TCPHeader.cpp ConnecterChoice.cpp Charger.cpp modele/Mask.cpp Sauvegarder.cpp build/Debug/GNU-Linux-x86/SNOTRA1.0.0/ && $(COPY_FILE) --parents ToolBox.ui Charger.ui Sauvegarder.ui NetworkGameArea.ui PropertiesOfIterfaceSetter.ui WireShark.ui ConnecterChoice.ui Confirmation.ui RelevantActions.ui NumberOfInterfaceSetter.ui Game.ui build/Debug/GNU-Linux-x86/SNOTRA1.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/SNOTRA1.0.0` && $(TAR) SNOTRA1.0.0.tar SNOTRA1.0.0 && $(COMPRESS) SNOTRA1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/SNOTRA1.0.0`/SNOTRA1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/SNOTRA1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_Sauvegarder.cpp moc_RelevantActions.cpp moc_ConnecterChoice.cpp moc_Game.cpp moc_PropertiesOfIterfaceSetter.cpp moc_WireShark.cpp moc_ToolBox.cpp moc_Confirmation.cpp moc_NetworkGameArea.cpp moc_Charger.cpp moc_NumberOfInterfaceSetter.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_Sauvegarder.cpp moc_RelevantActions.cpp moc_ConnecterChoice.cpp moc_Game.cpp moc_PropertiesOfIterfaceSetter.cpp moc_WireShark.cpp moc_ToolBox.cpp moc_Confirmation.cpp moc_NetworkGameArea.cpp moc_Charger.cpp moc_NumberOfInterfaceSetter.cpp
moc_Sauvegarder.cpp: ui_Sauvegarder.h \
		Sauvegarder.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Sauvegarder.h -o moc_Sauvegarder.cpp

moc_RelevantActions.cpp: ui_RelevantActions.h \
		RelevantActions.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) RelevantActions.h -o moc_RelevantActions.cpp

moc_ConnecterChoice.cpp: ui_ConnecterChoice.h \
		ConnecterChoice.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) ConnecterChoice.h -o moc_ConnecterChoice.cpp

moc_Game.cpp: ui_Game.h \
		ToolBox.h \
		ui_ToolBox.h \
		NetworkGameArea.h \
		ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		Game.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Game.h -o moc_Game.cpp

moc_PropertiesOfIterfaceSetter.cpp: ui_PropertiesOfIterfaceSetter.h \
		PropertiesOfIterfaceSetter.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) PropertiesOfIterfaceSetter.h -o moc_PropertiesOfIterfaceSetter.cpp

moc_WireShark.cpp: ui_WireShark.h \
		WireShark.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) WireShark.h -o moc_WireShark.cpp

moc_ToolBox.cpp: ui_ToolBox.h \
		ToolBox.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) ToolBox.h -o moc_ToolBox.cpp

moc_Confirmation.cpp: ui_Confirmation.h \
		Confirmation.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Confirmation.h -o moc_Confirmation.cpp

moc_NetworkGameArea.cpp: ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		NetworkGameArea.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) NetworkGameArea.h -o moc_NetworkGameArea.cpp

moc_Charger.cpp: ui_Charger.h \
		Charger.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Charger.h -o moc_Charger.cpp

moc_NumberOfInterfaceSetter.cpp: ui_NumberOfInterfaceSetter.h \
		NumberOfInterfaceSetter.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) NumberOfInterfaceSetter.h -o moc_NumberOfInterfaceSetter.cpp

compiler_rcc_make_all: qrc_IconeItemNetwork.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_IconeItemNetwork.cpp
qrc_IconeItemNetwork.cpp: IconeItemNetwork/IconeItemNetwork.qrc
	/usr/bin/rcc -name IconeItemNetwork IconeItemNetwork/IconeItemNetwork.qrc -o qrc_IconeItemNetwork.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_ToolBox.h ui_Charger.h ui_Sauvegarder.h ui_NetworkGameArea.h ui_PropertiesOfIterfaceSetter.h ui_WireShark.h ui_ConnecterChoice.h ui_Confirmation.h ui_RelevantActions.h ui_NumberOfInterfaceSetter.h ui_Game.h
compiler_uic_clean:
	-$(DEL_FILE) ui_ToolBox.h ui_Charger.h ui_Sauvegarder.h ui_NetworkGameArea.h ui_PropertiesOfIterfaceSetter.h ui_WireShark.h ui_ConnecterChoice.h ui_Confirmation.h ui_RelevantActions.h ui_NumberOfInterfaceSetter.h ui_Game.h
ui_ToolBox.h: ToolBox.ui
	/usr/bin/uic-qt4 ToolBox.ui -o ui_ToolBox.h

ui_Charger.h: Charger.ui
	/usr/bin/uic-qt4 Charger.ui -o ui_Charger.h

ui_Sauvegarder.h: Sauvegarder.ui
	/usr/bin/uic-qt4 Sauvegarder.ui -o ui_Sauvegarder.h

ui_NetworkGameArea.h: NetworkGameArea.ui
	/usr/bin/uic-qt4 NetworkGameArea.ui -o ui_NetworkGameArea.h

ui_PropertiesOfIterfaceSetter.h: PropertiesOfIterfaceSetter.ui
	/usr/bin/uic-qt4 PropertiesOfIterfaceSetter.ui -o ui_PropertiesOfIterfaceSetter.h

ui_WireShark.h: WireShark.ui
	/usr/bin/uic-qt4 WireShark.ui -o ui_WireShark.h

ui_ConnecterChoice.h: ConnecterChoice.ui
	/usr/bin/uic-qt4 ConnecterChoice.ui -o ui_ConnecterChoice.h

ui_Confirmation.h: Confirmation.ui
	/usr/bin/uic-qt4 Confirmation.ui -o ui_Confirmation.h

ui_RelevantActions.h: RelevantActions.ui
	/usr/bin/uic-qt4 RelevantActions.ui -o ui_RelevantActions.h

ui_NumberOfInterfaceSetter.h: NumberOfInterfaceSetter.ui
	/usr/bin/uic-qt4 NumberOfInterfaceSetter.ui -o ui_NumberOfInterfaceSetter.h

ui_Game.h: Game.ui
	/usr/bin/uic-qt4 Game.ui -o ui_Game.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/Device.o: modele/Device.cpp modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Device.o modele/Device.cpp

build/Debug/GNU-Linux-x86/ARPTable.o: modele/ARPTable.cpp modele/ARPTable.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ARPTable.o modele/ARPTable.cpp

build/Debug/GNU-Linux-x86/DeviceN4.o: modele/DeviceN4.cpp modele/DeviceN4.h \
		modele/enum.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		modele/ARPTable.h \
		modele/RoutingTable.h \
		modele/ARPHeader.h \
		modele/ICMPHeader.h \
		modele/TransportHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/DeviceN4.o modele/DeviceN4.cpp

build/Debug/GNU-Linux-x86/ToolBox.o: ToolBox.cpp ToolBox.h \
		ui_ToolBox.h \
		NetworkGameArea.h \
		ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ToolBox.o ToolBox.cpp

build/Debug/GNU-Linux-x86/ICMPHeader.o: modele/ICMPHeader.cpp modele/ICMPHeader.h \
		modele/TransportHeader.h \
		modele/Header.h \
		modele/enum.h \
		modele/Ip.h \
		modele/Mask.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ICMPHeader.o modele/ICMPHeader.cpp

build/Debug/GNU-Linux-x86/NetworkInterface.o: modele/NetworkInterface.cpp modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NetworkInterface.o modele/NetworkInterface.cpp

build/Debug/GNU-Linux-x86/Frame.o: modele/Frame.cpp modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Frame.o modele/Frame.cpp

build/Debug/GNU-Linux-x86/DataBaseManager.o: DataBaseManager.cpp DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		NetworkGameArea.h \
		ui_NetworkGameArea.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		Charger.h \
		ui_Charger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/DataBaseManager.o DataBaseManager.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp Game.h \
		ui_Game.h \
		ToolBox.h \
		ui_ToolBox.h \
		NetworkGameArea.h \
		ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		WireShark.h \
		ui_WireShark.h \
		RelevantActions.h \
		ui_RelevantActions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/Wire.o: modele/Wire.cpp modele/Wire.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Wire.o modele/Wire.cpp

build/Debug/GNU-Linux-x86/NetworkHeader.o: modele/NetworkHeader.cpp modele/NetworkHeader.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NetworkHeader.o modele/NetworkHeader.cpp

build/Debug/GNU-Linux-x86/Hub.o: modele/Hub.cpp modele/Hub.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Hub.o modele/Hub.cpp

build/Debug/GNU-Linux-x86/WireShark.o: WireShark.cpp WireShark.h \
		ui_WireShark.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/WireShark.o WireShark.cpp

build/Debug/GNU-Linux-x86/Header.o: modele/Header.cpp modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Header.o modele/Header.cpp

build/Debug/GNU-Linux-x86/Mac.o: modele/Mac.cpp modele/Mac.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Mac.o modele/Mac.cpp

build/Debug/GNU-Linux-x86/ARPHeader.o: modele/ARPHeader.cpp modele/ARPHeader.h \
		modele/Mac.h \
		modele/NetworkHeader.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ARPHeader.o modele/ARPHeader.cpp

build/Debug/GNU-Linux-x86/TransportHeader.o: modele/TransportHeader.cpp modele/TransportHeader.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/TransportHeader.o modele/TransportHeader.cpp

build/Debug/GNU-Linux-x86/ObjectToCommunicate.o: ObjectToCommunicate.cpp ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ObjectToCommunicate.o ObjectToCommunicate.cpp

build/Debug/GNU-Linux-x86/UDPHeader.o: modele/UDPHeader.cpp modele/UDPHeader.h \
		modele/TransportHeader.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/UDPHeader.o modele/UDPHeader.cpp

build/Debug/GNU-Linux-x86/Switch.o: modele/Switch.cpp modele/Switch.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h \
		modele/MacTable.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Switch.o modele/Switch.cpp

build/Debug/GNU-Linux-x86/RelevantActions.o: RelevantActions.cpp RelevantActions.h \
		ui_RelevantActions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RelevantActions.o RelevantActions.cpp

build/Debug/GNU-Linux-x86/DataLinkHeader.o: modele/DataLinkHeader.cpp modele/DataLinkHeader.h \
		modele/Mac.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/DataLinkHeader.o modele/DataLinkHeader.cpp

build/Debug/GNU-Linux-x86/Game.o: Game.cpp Game.h \
		ui_Game.h \
		ToolBox.h \
		ui_ToolBox.h \
		NetworkGameArea.h \
		ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Game.o Game.cpp

build/Debug/GNU-Linux-x86/PropertiesOfIterfaceSetter.o: PropertiesOfIterfaceSetter.cpp PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/PropertiesOfIterfaceSetter.o PropertiesOfIterfaceSetter.cpp

build/Debug/GNU-Linux-x86/NumberOfInterfaceSetter.o: NumberOfInterfaceSetter.cpp NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NumberOfInterfaceSetter.o NumberOfInterfaceSetter.cpp

build/Debug/GNU-Linux-x86/RoutingTable.o: modele/RoutingTable.cpp modele/RoutingTable.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Wire.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/Device.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RoutingTable.o modele/RoutingTable.cpp

build/Debug/GNU-Linux-x86/NetworkGameArea.o: NetworkGameArea.cpp NetworkGameArea.h \
		ui_NetworkGameArea.h \
		DataBaseManager.h \
		Confirmation.h \
		ui_Confirmation.h \
		Sauvegarder.h \
		ui_Sauvegarder.h \
		ConnecterChoice.h \
		ui_ConnecterChoice.h \
		PropertiesOfIterfaceSetter.h \
		ui_PropertiesOfIterfaceSetter.h \
		NumberOfInterfaceSetter.h \
		ui_NumberOfInterfaceSetter.h \
		ObjectToCommunicate.h \
		modele/Device.h \
		modele/Frame.h \
		modele/Header.h \
		modele/enum.h \
		modele/NetworkInterface.h \
		modele/Mac.h \
		modele/Ip.h \
		modele/Mask.h \
		modele/Wire.h \
		modele/DataLinkHeader.h \
		modele/NetworkHeader.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NetworkGameArea.o NetworkGameArea.cpp

build/Debug/GNU-Linux-x86/Confirmation.o: Confirmation.cpp Confirmation.h \
		ui_Confirmation.h \
		Charger.h \
		ui_Charger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Confirmation.o Confirmation.cpp

build/Debug/GNU-Linux-x86/MacTable.o: modele/MacTable.cpp modele/MacTable.h \
		modele/Mac.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MacTable.o modele/MacTable.cpp

build/Debug/GNU-Linux-x86/Ip.o: modele/Ip.cpp modele/Ip.h \
		modele/Mask.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Ip.o modele/Ip.cpp

build/Debug/GNU-Linux-x86/TCPHeader.o: modele/TCPHeader.cpp modele/TCPHeader.h \
		modele/UDPHeader.h \
		modele/TransportHeader.h \
		modele/Header.h \
		modele/enum.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/TCPHeader.o modele/TCPHeader.cpp

build/Debug/GNU-Linux-x86/ConnecterChoice.o: ConnecterChoice.cpp ConnecterChoice.h \
		ui_ConnecterChoice.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/ConnecterChoice.o ConnecterChoice.cpp

build/Debug/GNU-Linux-x86/Charger.o: Charger.cpp Charger.h \
		ui_Charger.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Charger.o Charger.cpp

build/Debug/GNU-Linux-x86/Mask.o: modele/Mask.cpp modele/Mask.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Mask.o modele/Mask.cpp

build/Debug/GNU-Linux-x86/Sauvegarder.o: Sauvegarder.cpp Sauvegarder.h \
		ui_Sauvegarder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Sauvegarder.o Sauvegarder.cpp

build/Debug/GNU-Linux-x86/moc_Sauvegarder.o: moc_Sauvegarder.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Sauvegarder.o moc_Sauvegarder.cpp

build/Debug/GNU-Linux-x86/moc_RelevantActions.o: moc_RelevantActions.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_RelevantActions.o moc_RelevantActions.cpp

build/Debug/GNU-Linux-x86/moc_ConnecterChoice.o: moc_ConnecterChoice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_ConnecterChoice.o moc_ConnecterChoice.cpp

build/Debug/GNU-Linux-x86/moc_Game.o: moc_Game.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Game.o moc_Game.cpp

build/Debug/GNU-Linux-x86/moc_PropertiesOfIterfaceSetter.o: moc_PropertiesOfIterfaceSetter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_PropertiesOfIterfaceSetter.o moc_PropertiesOfIterfaceSetter.cpp

build/Debug/GNU-Linux-x86/moc_WireShark.o: moc_WireShark.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_WireShark.o moc_WireShark.cpp

build/Debug/GNU-Linux-x86/moc_ToolBox.o: moc_ToolBox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_ToolBox.o moc_ToolBox.cpp

build/Debug/GNU-Linux-x86/moc_Confirmation.o: moc_Confirmation.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Confirmation.o moc_Confirmation.cpp

build/Debug/GNU-Linux-x86/moc_NetworkGameArea.o: moc_NetworkGameArea.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NetworkGameArea.o moc_NetworkGameArea.cpp

build/Debug/GNU-Linux-x86/moc_Charger.o: moc_Charger.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Charger.o moc_Charger.cpp

build/Debug/GNU-Linux-x86/moc_NumberOfInterfaceSetter.o: moc_NumberOfInterfaceSetter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NumberOfInterfaceSetter.o moc_NumberOfInterfaceSetter.cpp

build/Debug/GNU-Linux-x86/qrc_IconeItemNetwork.o: qrc_IconeItemNetwork.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/qrc_IconeItemNetwork.o qrc_IconeItemNetwork.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

