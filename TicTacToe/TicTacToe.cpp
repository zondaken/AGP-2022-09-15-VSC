#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

#include "Board.hpp"
#include "BoardDrawer.hpp"
#include "WinCheck.hpp"

void draw_example_board()
{
    std::cout << "\nExample:\n";
    std::cout << "0 | 1 | 2\n";
    std::cout << "==========\n";
    std::cout << "3 | 4 | 5\n";
    std::cout << "==========\n";
    std::cout << "6 | 7 | 8\n";
}

void main()
{
    board b;
    board_drawer bd(&b);
    win_check wc(&b);

    int currentPlayer = 1;
    int turnCount = 0;
    int winCheckResult = 0;

    while(winCheckResult == 0)
    {
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
        std::cout << "Current Player: " << board_drawer::player_to_char(currentPlayer) << "\n";
        bd.draw();

        draw_example_board();

        int position;

        std::cout << "Position: ";
        std::cin >> position;

        if(b.at(position) != 0)
        {
            continue;
        }

        b.at(position) = currentPlayer;

        if((winCheckResult = wc.check()) > 0)
        {
            break;
        }


        turnCount++;
        
        if(turnCount == b.length())
        {
            winCheckResult = -1;
            break;
        }

        currentPlayer = currentPlayer % 2 + 1;
    }

    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
    std::cout << "Gewonnen: " << board_drawer::player_to_char(wc.check()) << "\n";
    bd.draw();
}