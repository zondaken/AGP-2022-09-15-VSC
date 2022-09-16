#include <iostream>

void main()
{
    for (int year = 2010; year <= 2022; year++)
    {
        bool continueCheck = false;
        if (year % 4 == 0) continueCheck = true;

        if (!continueCheck)
        {
            std::cout << year;
            std::cout << " ";
        }
    }
}