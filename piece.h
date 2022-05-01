#ifndef PIECE_H
#define PIECE_H
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

enum Color {
    white = -1, black = 1
};
const int boardSize = 64;

const int PAWN_INT_REP = 1;
const int ROOK_INT_REP = 2;
const int KNIGHT_INT_REP = 3;
const int BISHOP_INT_REP = 4;
const int QUEEN_INT_REP = 5;
const int KING_INT_REP = 6;

class Piece {
public:
    Piece();
    Color getColor() const;
    string getColoredLabel();
    int getIntegerRepresentation() const;
    virtual int isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) = 0;
    virtual ~Piece(){};
protected:
    Color color;
    string label_white = " ";
    string label_black = " ";
    int intRepresentation = 0;
};

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

#endif // PIECE_H
