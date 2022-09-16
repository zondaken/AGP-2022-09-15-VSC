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
        // I/O-Gedoens
        std::cout << "Wort: " << ausgabe << eol;
        std::cout << "Versuche: " << versuche << eol;

        char eingabe;
        std::cout << "Zeichen: ";
        std::cin >> eingabe;

        bool gefunden = false;

        // ersetze Charaktere
        for(int pos = 0; pos < wort.length(); pos++)
        {
            if(wort[pos] == eingabe && ausgabe[pos] != eingabe)
            {
                ausgabe[pos] = eingabe;
                gefunden = true;
            }
        }

        // wenn nicht gefunden, erhoehe Anzahl Versuche
        if(!gefunden)
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