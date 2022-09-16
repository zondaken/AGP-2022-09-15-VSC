#ifndef BOARDDRAWER_HPP
#define BOARDDRAWER_HPP

#include "Board.hpp"

class board_drawer 
{
private:
    board* _board;
public:
    board_drawer(board* board);

    void draw();

    static char player_to_char(int player);
};

#endif