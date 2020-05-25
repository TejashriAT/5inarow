#pragma once

class GameLogic;
class Board;
class Player
{
private:
    char m_GamePiece = ' ';
    int m_Score = 0;

    int getRowPosition(const Board& board) const;
    int getColPosition(const Board& board) const;


public:

    void move(Board& board);
    void setGamePiece(const char gamePiece);
    char getGamePiece() const;
};
