#ifndef BISHOP_H
#define BISHOP_H
#include <piece.h>

class Bishop : public Piece {
public:
    Bishop(Color c);
    int isValidMove(Piece* board[boardSize], const int from_index, const int to_index);
};

#endif // BISHOP_H
