#include "stdlib.h"
#include "Board.h"
#include "GameLogic.h"

Board::Board()
{
    initBoard();
}

void Board::initBoard()
{
    std::vector<char> tempBoard;

    for (int i = 0; i < GameLogic::ROWS; i++)
    {
        tempBoard.push_back(GameLogic::EMPTY);
    }

    for (int i = 0; i < GameLogic::ROWS; i++)
    {
        m_Board.push_back(tempBoard);
    }

}

void Board::displayBoard()
{
    std::cout << "\n";
    for (int row = 0; row < GameLogic::ROWS - 1; row++)
    {

        std::cout << "\t"; //std::cout << "1 2 3 4 5 6";
        //std::cout << "\nrow";
        for (int col = 0; col < GameLogic::COLUMNS - 1; col++)
        {
            if(col != 0)
                std::cout << "|" << m_Board[row][col] << "|";
        }
        std::cout << "\n";
    }
}

bool Board::isMoveLegal(int row, int col)
{

    if (m_Board[row][col] == GameLogic::EMPTY) //If square player wants to move to is empty
    {
        if (row == GameLogic::ROWS - 2 && m_Board[row][col] == GameLogic::EMPTY) //If square player wants to move to is on the bottom row.
        {
            return true;
        }

        else
        {
            int tempRow = row;
            tempRow++;
            if (m_Board[tempRow][col] != GameLogic::EMPTY)
            {
                return true;
            }

            else
            {
                std::cout << "You cannot move here.\n";
                return false;
            }

        }
    }

    else
    {
        std::cout << "You cannot move here.\n";
        return false;
    }
}

void Board::addPlayerPiece(int row, int col, char playerPiece)
{
    m_Board[row][col] = playerPiece;

}



char Board::getBoardPosition(int row, int col) const
{
    return m_Board[row][col];
}

bool Board::checkForWinner(GameLogic& gameLogic, char playerPiece)
{
    bool foundWinner = false;

    searchForWinner(gameLogic, playerPiece, m_SrchHorizontal, foundWinner);
    searchForWinner(gameLogic, playerPiece, m_SrchVertical, foundWinner);
    searchForWinner(gameLogic, playerPiece, m_SrchRightDiagonal, foundWinner);
    searchForWinner(gameLogic, playerPiece, m_SrchLeftDiagonal, foundWinner);

    return foundWinner;
}


void Board::searchForWinner(GameLogic& gameLogic, char playerPiece, std::string searchDirection, bool& foundWinner)
{
    if (!foundWinner)
    {
        int i = 0;
        for (int row = 0; row < GameLogic::ROWS; row++)
        {
            for (int col = 0; col < GameLogic::COLUMNS; col++)
            {
                while (m_Board[row][col] == playerPiece && !foundWinner)
                {
                    i++; //Counts blocks 
                    gameLogic.setWinner(playerPiece);

                    if (searchDirection == m_SrchHorizontal)
                        col++;

                    if (searchDirection == m_SrchVertical)
                        row++;

                    if (searchDirection == m_SrchRightDiagonal)
                    {
                        row++;
                        col++;
                    }

                    if (searchDirection == m_SrchLeftDiagonal)
                    {
                        row++;
                        col--;
                    }
                    if (i == GameLogic::WINNING_ROWS)
                    {
                        foundWinner = true;
                    }
                }
                i = 0;
            }
        }
    }
    else
    {
        return;
    }
}
