#ifndef ROOK_H
#define ROOK_H
#include <piece.h>

class Rook : public Piece {
public:
    Rook(Color c);
    int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index);
    ~Rook();
};

#endif // ROOK_H
