#include <iostream>
#include <piece.h>
#include <board.h>

using namespace std;

bool moveTakesPiece(Piece* target, Color color) {
    return target != nullptr && target->getColor() != color;
}

int main()
{
    Board board;

    string inp = "";
    int move[5], from_index, to_index;
    while (inp != "exit") {
        // check if inp is in right format
        if (inp.length() == 5) {
            for (int i = 0; i < 5; i++) move[i] = inp[i];

            if (
                move[2] == 45
                && 96 < move[0]
                && 96 < move[3]
                && 105 > move[0]
                && 105 > move[3]
                && 48 < move[1]
                && 48 < move[4]
                && 57 > move[1]
                && 57 > move[4]
            ) {
                from_index = (move[1] - 49) * 8 + move[0] - 97;
                to_index = (move[4] - 49) * 8 + move[3] - 97;
                cout << from_index << " -> " << to_index << endl;

                if (board.moveIsValid(from_index, to_index)) {
                    cout << "Valid move :)" << endl;
                    Piece* piece = board.field[from_index];
                    if (moveTakesPiece(board.field[to_index], piece->getColor())) {
                        cout << "Taking enemy piece..." << endl;
                    }
                    board.field[to_index] = piece;
                    board.field[from_index] = nullptr;

                    cout << "Last move: " << inp << endl;

                    if (board.isOpposingKingInDanger()) {
                        cout << (board.player == white ? "Black" : "White") << " king in danger!" << endl;
                    }
                    board.player = (board.player == white ? black : white);
                } else {
                    cout << "Invalid move :(" << endl;
                }
            }
        }

        cout << endl << endl;
        cout << "Current player: " << (board.player == black ? "Black" : "White") << endl;
        board.print();
        cout << "Please enter valid move to make (e.g. b1-c3) or type 'exit' to exit the program. ([move]/exit): " << endl;
        cin >> inp;
    }

    return 1;
}
