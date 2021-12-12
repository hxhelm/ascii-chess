#ifndef ROOK_H
#define ROOK_H
#include <piece.h>

class Rook : public Piece {
public:
    Rook(Color c);
    int isValidMove(Piece* board[boardSize], const int from_index, const int to_index);
};

#endif // ROOK_H
