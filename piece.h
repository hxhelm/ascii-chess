#ifndef PIECE_H
#define PIECE_H
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

enum Color {
    black = -1, white = 1
};
const int boardSize = 64;

class Piece {
public:
    Piece();
    Color getColor() const;
    string getColoredLabel();
    int getIntegerRepresentation();
    virtual int isValidMove(Piece* board[boardSize], const int from_index, const int to_index);
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
