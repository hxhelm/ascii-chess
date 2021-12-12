TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bishop.cpp \
        board.cpp \
        king.cpp \
        knight.cpp \
        main.cpp \
        pawn.cpp \
        piece.cpp \
        queen.cpp \
        rook.cpp

HEADERS += \
    bishop.h \
    board.h \
    global_declarations.h \
    king.h \
    knight.h \
    pawn.h \
    piece.h \
    queen.h \
    rook.h

DISTFILES += \
    chess.pro.user
