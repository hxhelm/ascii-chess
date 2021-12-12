#include <bishop.h>
#include <math.h>

using std::min;
using std::max;
using std::cout;

Bishop::Bishop(Color c) {
    label_black = "♗";
    label_white = "♝";
    color = c;
};

int Bishop::isValidMove(Piece* board[boardSize], const int from_index, const int to_index) {
//    cout << "Checking Bishop-moves...";

    int travel_distance = 7;
    if (abs(from_index - to_index) % 9 == 0) {
        travel_distance = 9;
    } else if (abs(from_index - to_index) % 7 != 0) {
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
