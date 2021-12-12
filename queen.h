#ifndef QUEEN_H
#define QUEEN_H
#include <piece.h>

class Queen : public Piece {
public:
    Queen(Color c);
    int isValidMove(Piece* board[boardSize], const int from_index, const int to_index);
};

#endif // QUEEN_H
