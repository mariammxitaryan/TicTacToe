#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <iostream>

class TicTacToe {
public:
    TicTacToe();
    void play();

private:
    char board[3][3];     
    char currentPlayer;    

    void resetBoard();
    void printBoard() const;
    bool makeMove(int cell);
    bool checkWin() const;
    bool isDraw() const;
    void switchPlayer();
};

#endif 