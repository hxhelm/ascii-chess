#ifndef KNIGHT_H
#define KNIGHT_H
#include <piece.h>

class Knight : public Piece {
public:
    Knight(Color c);
    int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index);
    ~Knight();
};

#endif // KNIGHT_H
