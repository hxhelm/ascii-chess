#include <king.h>
#include <math.h>

using std::cout;

King::King(Color c) {
    label_black = "♔";
    label_white = "♚";
    color = c;
};

int King::isValidMove(Piece* board[boardSize], const int from_index, const int to_index) {
//    cout << "Checking King-moves...";

    int distance = abs(from_index - to_index);
    if (!(distance == 1 || distance == 7 || distance == 8 || distance == 9)) {
        return false;
    }

    return true;
};
