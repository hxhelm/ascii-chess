#include <rook.h>
#include <math.h>

using std::min;
using std::max;
using std::cout;

Rook::Rook(Color c) {
    label_black = "♖";
    label_white = "♜";
    color = c;
};

int Rook::isValidMove(Piece* board[boardSize], const int from_index, const int to_index) {
//    cout << "Checking Rook-moves...";

    int travel_distance = 1;
    if (abs(from_index - to_index) % 8 == 0) { // vertical
        travel_distance = 8;
    } else if (from_index / 8 != to_index / 8) { // horizontal
//        cout << "Forbidden move-direction...";
        return false;
    }

    // check if there is a piece between from and to
    for (int i = min(from_index, to_index) + travel_distance; i <= max(from_index, to_index) - travel_distance; i += travel_distance) {
        if (board[i] != nullptr) {
//            cout << "A piece is in the way...";
            return false;
        }
    }

    return true;
};
