#ifndef PAWN_H
#define PAWN_H
#include <piece.h>

class Pawn : public Piece {
public:
    Pawn(Color c);
    int isValidMove(Piece* board[boardSize], const int from_index, const int to_index);
};

#endif // PAWN_H
