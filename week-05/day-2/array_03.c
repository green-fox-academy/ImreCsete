#include <stdlib.h>
#include <stdio.h>

/*
 * Create a 2 dimensional array of characters. 8x8
 * Fill the array with X and space alternating.
 * Print it out row by row. (It should resemble a chess board)
 * Designate a character for each chess peace. (Queen could be Q, King could be K, etc.)
 * Set up the start of a game.
 * Print it out again.
 * Make one move with a horse.
 * Print it again.
 */

 int main()
 {
     int chess_board[8][8];

     int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
            if ((i + j) % 2 != 0) {
            chess_board[i][j] = 88;
        } else chess_board[i][j] = 32;
    }

    for (i = 0; i < 8; i++) { // Rook
        for (j = 0; j < 8; j++)
            if (i % 7 == 0 && j % 7 == 0) {
            chess_board[i][j] = 82;
            }
    }

    for (i = 0; i < 8; i++) { // Pawn
        for (j = 0; j < 8; j++)
            if (i == 1 || i == 6) {
            chess_board[i][j] = 80;
            }
    }

    chess_board[0][1] = 75, chess_board[0][6] = 75, chess_board[5][2] = 75, chess_board[7][6] = 75; // Knight and White Knight to C;3
    chess_board[0][2] = 66, chess_board[0][5] = 66, chess_board[7][2] = 66, chess_board[7][5] = 66; // Bishop
    chess_board[0][3] = 81, chess_board[7][3] = 81; // Queen
    chess_board[0][4] = 241, chess_board[7][4] = 241; // King


    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++)
        printf(" %c", chess_board[i][j]);
        printf("\n");
    }

     return 0;
 }
