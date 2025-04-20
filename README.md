# Tic Tac Toe

A simple two-player Tic Tac Toe game implemented in C++ with a terminal-based interface.

## Project Structure

```
├── TicTacToeHeader.hpp   # Declaration of the TicTacToe class
├── TicTacToeImplementation.cpp   # Implementation of the TicTacToe class methods
└── main.cpp        # Entry point: creates a TicTacToe instance and starts the game
```  

## Features

- 3×3 game board
- Two players: X and O
- Input validation for moves (1–9)
- Win detection (rows, columns, diagonals)
- Draw detection when board is full
- Simple command‑line UI

## Prerequisites

- A C++ compiler (GCC, Clang, MSVC) with C++11 support or later.

## Building

1. Open a terminal and navigate to the project directory.
2. Run the following command to compile:

   ```bash
   g++ -std=c++11 TicTacToeImplementation.cpp main.cpp -o tictactoe
   ```

## Usage

After building, start the game:

```bash
./tictactoe
```

- The board cells are numbered 1 to 9 as follows:
  
  ```
   1 | 2 | 3
  ---+---+---
   4 | 5 | 6
  ---+---+---
   7 | 8 | 9
  ```

- Players alternate entering the number corresponding to an empty cell.
- The first player to align three of their marks (X or O) horizontally, vertically, or diagonally wins.
- If all cells are filled without a winning line, the game ends in a draw.

