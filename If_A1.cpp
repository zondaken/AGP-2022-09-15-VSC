#include <iostream>

void main()
{
    int alter;
    float promille;

    std::cout << "Alter: ";
    std::cin >> alter;

    std::cout << "Promille: ";
    std::cin >> promille;


    if((alter <= 21 && promille == 0.0f) || (alter > 21 && promille <= 0.3f))
    {
        std::cout << "Fahrfaehig";
    }
    else
    {
        std::cout << "Nicht fahrfaehig";
    }
}