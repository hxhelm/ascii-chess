#include <king.h>
#include <math.h>

using std::cout;

King::King(Color c) {
    label_black = "♔";
    label_white = "♚";
    color = c;
    intRepresentation = KING_INT_REP;
};

int King::isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) {
    int distance = abs(from_index - to_index);
    if (!(distance == 1 || distance == 7 || distance == 8 || distance == 9)) {
        return false;
    }

    return true;
}

King::~King()
{
}
