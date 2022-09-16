#include <iostream>

void main()
{
    for(int year = 2010; year <= 2022; year++)
    {
        if(year % 4 == 0) continue;

        std::cout << year;
        std::cout << " ";
    }
}