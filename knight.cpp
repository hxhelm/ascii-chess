#include <knight.h>
#include <math.h>

using std::cout;

Knight::Knight(Color c) {
    label_black = "♘";
    label_white = "♞";
    color = c;
};

int Knight::isValidMove(Piece* board[boardSize], const int from_index, const int to_index) {
//    cout << "Checking Knight-moves...";

    int jump = abs(from_index - to_index);
    if (!(jump == 6 || jump == 10 || jump == 15 || jump == 17)) {
//        cout << "Forbidden move-direction...";
        return false;
    }

    return true;
};
