#include "stdlib.h"
#include "Player.h"
#include "Board.h"
#include "GameLogic.h"


int Player::getRowPosition(const Board& board) const
{
    int row = 0;
    bool positionAllowed = false;
    while (!positionAllowed)
    {
        std::cout << "Enter row.\n";
        std::cin >> row;

        if (row >= 1 && row < GameLogic::ROWS - 1)
            positionAllowed = true;
        else
            std::cout << "Position out of bounds. Please enter again.\n";
    }
    return row;
}

int Player::getColPosition(const Board& board) const
{
    int row = 0;
    bool positionAllowed = false;
    while (!positionAllowed)
    {
        std::cout << "Enter column.\n";
        std::cin >> row;

        if (row >= 1 && row < GameLogic::COLUMNS - 1)
            positionAllowed = true;
        else
            std::cout << "Position out of bounds. Please enter again.\n";
    }
    return row;
}


void Player::move(Board& board)
{
    int row = 0;
    int col = 0;
    bool moveComplete = false;
    while (!moveComplete)
    {
        row = getRowPosition(board);
        col = getColPosition(board);

        if (board.isMoveLegal(row, col))
        {
            board.addPlayerPiece(row, col, getGamePiece());
            moveComplete = true;
        }
    }

}

void Player::setGamePiece(const char gamePiece)
{
    m_GamePiece = gamePiece;
}

char Player::getGamePiece() const
{
    return m_GamePiece;
}
