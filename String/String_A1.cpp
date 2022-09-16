#include <iostream>
#include <string>

void main()
{
    std::string eol = "\n";

    std::string wort = "AdvancedGameProgramming";
    std::string ausgabe = std::string(wort.length(), '_');

    const int maxVersuche = 10;
    int versuche = 0;

    while(versuche < maxVersuche && wort != ausgabe)
    {
        std::cout << "Wort: " << ausgabe << eol;
        std::cout << "Versuche: " << versuche << eol;

        char eingabe;
        std::cout << "Zeichen: ";
        std::cin >> eingabe;

        int oldPos = 0;
        int pos;

        while((pos = wort.find(eingabe, oldPos)) != std::string::npos && ausgabe[pos] != eingabe)
        {
            ausgabe[pos] = eingabe;
            oldPos = pos + 1;
        }

        if(oldPos == 0)
        {
            versuche++;
        }

        std::cout << eol;
    }

    if(versuche == maxVersuche)
    {
        std::cout << "Verloren :(";
    }
    else
    {
        std::cout << "Wort: " << wort << eol;
        std::cout << "GEWONNEN!";
    }
}