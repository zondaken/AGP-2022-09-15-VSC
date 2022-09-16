#include <iostream>
#include <string>

const std::string eol = "\n";

void main()
{
    std::string word = "AdvancedGameProgramming";
    
    std::string guess = "";
    for(int i = 0; i < word.length(); i++) guess.append("_");

    while(true)
    {
        char eingabe;
        std::cout << "Eingabe: ";
        std::cin >> eingabe;

        if(word.find(eingabe) != std::string::npos)
        {
            for(int i = 0; i < word.length(); i++)
            {
                if(word[i] == eingabe)
                {
                    guess[i] = eingabe;
                }
            }
        }

        std::cout << "Wort: " << guess << eol;
    }
}