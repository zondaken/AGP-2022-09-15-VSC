#ifndef WINCHECK_HPP
#define WINCHECK_HPP

#include "Board.hpp"

class win_check
{
private:
    board* _board;

    int win_check_row(int row);
    int win_check_rows();
    int win_check_col(int col);
    int win_check_cols();
    int win_check_top_left_diag();
    int win_check_top_right_diag();
    int win_check_diags();
public:
    // return value: 1 = player X has won; 2 = player O has won; -1 = draw; otherwise 0
    win_check(board* board);

    int check();
};

#endif