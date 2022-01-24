#ifndef PAWN_H
#define PAWN_H
#include <piece.h>

class Pawn : public Piece {
public:
    Pawn(Color c);
    int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index);
    ~Pawn();
};

#endif // PAWN_H
