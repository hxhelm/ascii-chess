#include <queen.h>
#include <math.h>

using std::min;
using std::max;
using std::cout;

Queen::Queen(Color c) {
    label_black = "♕";
    label_white = "♛";
    color = c;
    intRepresentation = QUEEN_INT_REP;
};

int Queen::isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) {
    int travel_distance = 1;
    if (abs(from_index - to_index) % 9 == 0) { // diagonal
        travel_distance = 9;
    } else if (abs(from_index - to_index) % 7 == 0) { // diagonal
        travel_distance = 7;
    } else if (abs(from_index - to_index) % 8 == 0) { // vertical
        travel_distance = 8;
    } else if (from_index / 8 != to_index / 8) { // horizontal
        return false;
    }

    // check if there is a piece between from and to
    for (int i = min(from_index, to_index) + travel_distance; i <= max(from_index, to_index) - travel_distance; i += travel_distance) {
        if (board[i] != nullptr) {
            return false;
        }
    }

    return true;
}

Queen::~Queen()
{
};
