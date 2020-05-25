#include "stdlib.h"
#include "Board.h"
#include "Player.h"
#include "GameLogic.h"

#include <iostream>
#include <vector>

/*/
AI
Search for empty blocks with block filled under
Make data structure with these blocks
randomly choose a block from that data structure to spawn on

*/

int main()
{
    Board board;
    Player player1, player2;
    GameLogic gameLogic;

    gameLogic.game(board, player1, player2, gameLogic);

    char c;
    std::cin >> c;
    return 0;
}
