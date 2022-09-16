#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>

class board 
{
private:
    std::vector<int> _board;

public:
    board();

    int& at(int position);

    int& at(int row, int col);

    int size();
    int length();
};

#endif