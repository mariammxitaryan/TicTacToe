#include "TicTacToeHeader.hpp"

TicTacToe::TicTacToe() {
    resetBoard();
    currentPlayer = 'X';
}

void TicTacToe::resetBoard() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = ' ';
}

void TicTacToe::printBoard() const {
    std::cout << "\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}

bool TicTacToe::makeMove(int cell) {
    if (cell < 1 || cell > 9) return false;
    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;
    if (board[row][col] != ' ') return false;
    board[row][col] = currentPlayer;
    return true;
}

bool TicTacToe::checkWin() const {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer))
            return true;
    }
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer))
        return true;
    return false;
}

bool TicTacToe::isDraw() const {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ') return false;
    return true;
}

void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void TicTacToe::play() {
    std::cout << "Welcome to Tic Tac Toe!" << std::endl;
    while (true) {
        printBoard();
        std::cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        int move;
        std::cin >> move;
        if (!makeMove(move)) {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }
        if (checkWin()) {
            printBoard();
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }
        if (isDraw()) {
            printBoard();
            std::cout << "It's a draw!" << std::endl;
            break;
        }
        switchPlayer();
    }
}
