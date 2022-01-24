#include <pawn.h>

using std::cout;

Pawn::Pawn(Color c) {
    label_black = "♙";
    label_white = "♟";
    color = c;
    intRepresentation = PAWN_INT_REP;
};

int Pawn::isValidMove(Piece* const  board[boardSize], const int from_index, const int to_index) {
    // check if Pawn is in unmoved position (row 2 or row 7);
    bool unmoved = from_index / 8 == 1 || from_index / 8 == 6;

    // check if position is occupied
    if (board[to_index] == nullptr) {
        // (8/-8 or 16/-16 for unmoved pos)
        if (to_index == from_index + color * 8 ||
            (unmoved && to_index == from_index + color * 16 && board[from_index + color * 8] == nullptr)) {
            return true;
        }

    // (7/-7 or 9/-9 for attacking diagonally)
    } else if ((to_index == from_index + color * 9 || to_index == from_index + color * 7)) {
        return true;
    }

    return false;
}

Pawn::~Pawn()
{
};
