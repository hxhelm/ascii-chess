#include <knight.h>
#include <math.h>

using std::cout;

Knight::Knight(Color c) {
    label_black = "♘";
    label_white = "♞";
    color = c;
    intRepresentation = KNIGHT_INT_REP;
};

int Knight::isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) {
    int jump = abs(from_index - to_index);
    if (!(jump == 6 || jump == 10 || jump == 15 || jump == 17)) {
        return false;
    }

    return true;
}

Knight::~Knight()
{
};
