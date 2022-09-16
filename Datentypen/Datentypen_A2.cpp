#include <iostream>
#include <string>

void main()
{
    std::string vorname;
    
    std::cout << "Ihr Name: ";
    std::cin >> vorname;

    std::cout << "Herzlich Willkommen, ";
    std::cout << vorname;
}