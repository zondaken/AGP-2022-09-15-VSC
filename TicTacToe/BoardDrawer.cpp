#include <iostream>

#include "BoardDrawer.hpp"
#include "Board.hpp"

board_drawer::board_drawer(board* board)
{
    _board = board;
}

void board_drawer::draw()
{
    for(int row = 0; row < _board->size(); row++)
    {
        for(int col = 0; col < _board->size(); col++)
        {
            int player = _board->at(row, col);
            std::cout << player_to_char(player);

            if((col + 1) < _board->size())
            {
                std::cout << " | ";
            }
        }

        if((row + 1) < _board->size())
        {
            std::cout << "\n==========";
        }

        std::cout << "\n";
    }
}

char board_drawer::player_to_char(int player)
{
    if(player == 0) return ' ';
    if(player == 1) return 'X';
    if(player == 2) return 'O';

    return '\0';
}