#pragma once

#include <vector>
#include <iostream>


class GameLogic;
class Board
{
private:
    std::vector<std::vector<char> > m_Board;

    std::string m_SrchHorizontal = "Horizontal";
    std::string m_SrchVertical = "Vertical";
    std::string m_SrchRightDiagonal = "DiagonalRight";
    std::string m_SrchLeftDiagonal = "DiagonalLeft";

    void initBoard();
    void searchForWinner(GameLogic& gameLogic, char playerPiece, std::string searchDirection, bool& foundWinner);

public:
    Board();

    char getBoardPosition(int row, int col) const;

    void displayBoard();
    bool isMoveLegal(int row, int col);
    void addPlayerPiece(int row, int col, char playerPiece);
    bool checkForWinner(GameLogic& gameLogic, char playerPiece);
};
