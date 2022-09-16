#include <iostream>

void main()
{
    double x, y, sum;

    std::cout << "Zahl 1: ";
    std::cin >> x;

    std::cout << "Zahl 2: ";
    std::cin >> y;

    sum = x + y;
    std::cout << "Summe: ";
    std::cout << sum;
}