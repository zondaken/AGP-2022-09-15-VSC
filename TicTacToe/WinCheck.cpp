#include <iostream>

#include "WinCheck.hpp"

int win_check::win_check_row(int row)
{
    bool isSame = true;
    int firstPlayer = _board->at(row, 0);

    for(int col = 1; col < _board->size(); col++)
    {
        if(firstPlayer != _board->at(row, col))
        {
            isSame = false;
            break;
        }
    }

    if(isSame)
    {
        return firstPlayer;
    }

    return 0;
}

int win_check::win_check_rows()
{
    for(int row = 0; row < _board->size(); row++)
    {
        int result;

        if((result = win_check_row(row)) > 0)
        {
            return result;
        }
    }

    return 0;
}

int win_check::win_check_col(int col)
{
    bool isSame = true;
    int firstPlayer = _board->at(0, col);

    for(int row = 1; row < _board->size(); row++)
    {
        if(firstPlayer != _board->at(row, col))
        {
            isSame = false;
            break;
        }
    }

    if(isSame)
    {
        return firstPlayer;
    }

    return 0;
}

int win_check::win_check_cols()
{
    for(int col = 0; col < _board->size(); col++)
    {
        int result;

        if((result = win_check_col(col)) > 0)
        {
            return result;
        }
    }

    return 0;
}

int win_check::win_check_top_left_diag()
{
    bool isSame = true;
    int firstPlayer = _board->at(0, 0);

    for(int i = 0; i < _board->size(); i++)
    {
        if(firstPlayer != _board->at(i, i))
        {
            isSame = false;
            return 0;
        }
    }

    return firstPlayer;
}

int win_check::win_check_top_right_diag()
{
    bool isSame = true;
    int firstPlayer = _board->at(0, _board->size() - 1);

    for(int i = 0; i < _board->size(); i++)
    {
        if(firstPlayer != _board->at(i, _board->size() - 1 - i))
        {
            isSame = false;
            return 0;
        }
    }

    return firstPlayer;
}

int win_check::win_check_diags()
{
    int result;
    
    if((result = win_check_top_left_diag()) > 0)
    {
        return result;
    }

    if((result = win_check_top_right_diag()) > 0)
    {
        return result;
    }
    
    return 0;
}

// return value: 1 = player X has won; 2 = player O has won; -1 = draw; otherwise 0
win_check::win_check(board* board)
{
    _board = board;
}

int win_check::check()
{
    int result;

    // check horizontally
    if((result = win_check_rows()) > 0)
    {
        return result;
    }

    // check vertically
    if((result = win_check_cols()) > 0)
    {
        return result;
    }

    // check diagonally
    if((result = win_check_diags()) > 0)
    {
        return result;
    }

    return 0;
}