# 5inaRow_GOMOKU_C++
5 in a Row Program in C++
'5-in-a-Row' Game is one of the *Connect 4* Game variation. It is a 2-Player 54-ply (6x9) connection game, also called as **GOMOKU**

## Description 

- The game plays similarly to the original Connect 4, except players must now get five pieces in a row to win. 
  Notice this is still a 42-ply game since the two new columns added to the game represent twelve game pieces already played, 
  before the start of a game.
- Two players should choose the option (either **X** or **O**) to take turns to fill the board.
- The game has a 9 Columns and 6 Rows grid board game. The pieces fall straight down,
  occupying the next available space within the column. The objective of the game is to be the
  first to form a horizontal, vertical, or diagonal line of five of one's own discs.

## Prerequisites

Softwares to install
 ```
 Microsoft Visual Studio Code version : 1.45.1
 vcpkg: C++ Package Manager
 C++ Intellisense
 C++ Clang Command Adaptor
 C++ GNU Global
 Code Runner
 PlatformIO IDE
 
 ```
## Platform/Language Used
 ```
 Platform : MacOS
 Language : C++
 ```
## File Names
1. main.cpp
2. Board.cpp
3. Board.h
4. Player.cpp
5. Player.h
6. GameLogic.cpp
7. GameLogic.h

## Assumptions & Limitations
- There is option to choose from only 2 options either X or O.

## Improvements
 More validations and conditions can be added to improvize the game:
 - Give color options to choose.
 - Create a chat room for the players.
 - More prompt messages for players to confirm before they would like to quit.
 - Set a timer to drop the coin instead of wait thread.
 - Client-server architecture using socket

## Author
- Tejashri Gunde - Developer/Author
