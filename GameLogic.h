#pragma once

#include <string>

class Board;
class Player;
class GameLogic
{
private:
    char m_Turn = X;
    bool m_FoundWinner = false;
    char m_Winner = ' ';

    void allocateFirstTurns(Player& player1, Player& player2, char choice);
    void decideFirstTurn(Player& player1, Player& player2);
    void gameRound(Board& board, Player& player1, Player& player2, GameLogic& gameLogic);
    void changeTurn(char turn);

public:
    static const int ROWS = 6;
    static const int COLUMNS = 9;
    static const int WINNING_ROWS = 5;

    static const char X = 'X';
    static const char O = 'O';
    static const char EMPTY = ' ';

    void game(Board& board, Player& player1, Player& player2, GameLogic& gamelogic);
    void setWinner(char gamePiece);
};
