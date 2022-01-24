#include <piece.h>

Piece::Piece() {};

Color Piece::getColor() const
{
    return color;
}

string Piece::getColoredLabel() {
    return getColor() == white ? label_white : label_black;
}

int Piece::getIntegerRepresentation() const
{
    return intRepresentation;
};

int Piece::isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) {
    return false;
};
