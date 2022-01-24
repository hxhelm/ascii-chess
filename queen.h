#ifndef QUEEN_H
#define QUEEN_H
#include <piece.h>

class Queen : public Piece {
public:
    Queen(Color c);
    int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index);
    ~Queen();
};

#endif // QUEEN_H
