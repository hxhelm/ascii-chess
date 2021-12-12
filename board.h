#ifndef BOARD_H
#define BOARD_H
#include <piece.h>
#include <pawn.h>
#include <rook.h>
#include <knight.h>
#include <bishop.h>
#include <queen.h>
#include <king.h>

class Board
{
public:
    Board();
    Piece* field[boardSize] {nullptr};
    Color player = white;
    bool moveIsValid(const int from_index, const int to_index);
    bool isOpposingKingInDanger();
    void print();
};

#endif // BOARD_H
