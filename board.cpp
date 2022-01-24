#include "board.h"

using std::cout;
using std::endl;

Board::Board()
{
    for (int i = 0; i < boardSize; ++i) {
        Color c = (i > 32 ? white : black);
        if (i / 8 == 1 || i / 8 == 6) {
            field[i] = new Pawn(c);
        } else if (i % 56 == 0 || i % 56 == 7) {
            field[i] = new Rook(c);
        } else if (i % 56 == 1 || i % 56 == 6) {
            field[i] = new Knight(c);
        } else if (i % 56 == 2 || i % 56 == 5) {
            field[i] = new Bishop(c);
        } else if (i % 56 == 3) {
            field[i] = new Queen(c);
        } else if (i % 56 == 4) {
            field[i] = new King(c);
        }
    }
}

bool Board::moveIsValid(const int from_index, const int to_index) {
    Piece* piece = field[from_index];
    if (piece == nullptr || piece->getColor() != player) {
        return false;
    }

    if (field[to_index] != nullptr && field[to_index]->getColor() == piece->getColor()) {
        return false;
    }

    return piece->isValidMove(field, from_index, to_index);
}

bool Board::isOpposingKingInDanger() {
    for (int i = 0; i < boardSize; ++i) {
        if (field[i] == nullptr) continue;
        if (field[i]->getColor() == player) continue;
        if (field[i]->getIntegerRepresentation() != KING_INT_REP) continue;
//        if (instanceof<King>(field[i])) continue;

        for (int j = 0; j < boardSize; ++j) {
            if (moveIsValid(j, i)) {
                return true;
            }
        }
        break;
    }

    return false;
}

void Board::print() {
    cout << "\n\t    a  | b  | c  | d  | e  | f  | g  | h";
    for (int i = 0; i < boardSize; ++i) {
        if (i % 8 == 0) {
            cout << endl << "\t  +----+----+----+----+----+----+----+----+" << endl;
            cout << "\t" << i / 8 + 1 << " |";
        }
        if (field[i] == nullptr) {
            cout << "    |";
        } else {
            cout << " " << field[i]->getColoredLabel() << "  |";
        }
    }
    cout << endl << "\t  +----+----+----+----+----+----+----+----+" << endl;
    cout << "\t    a  | b  | c  | d  | e  | f  | g  | h\n\n";
}
