#include "Board.hpp"

board::board() : _board()
{
    _board.reserve(9);

    int zahlen[] = 
    {
        0, 0, 0,
        0, 0, 0,
        0, 0, 0
    };

    for(int i = 0; i < length(); i++)
    {
        //_board.push_back(2);
        _board.push_back(zahlen[i]);
    }
}

int& board::at(int position)
{
    return _board[position];
}

int& board::at(int row, int col)
{
    return _board[row * size() + col];
}

int board::size() { return 3; }
int board::length() { return size() * size(); }