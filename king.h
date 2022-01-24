#ifndef KING_H
#define KING_H
#include <piece.h>

class King : public Piece {
public:
    King(Color c);
    int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index);
    ~King();
};

#endif // KING_H
