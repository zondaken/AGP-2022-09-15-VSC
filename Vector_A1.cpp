#include <iostream>
#include <string>
#include <vector>
#include <numeric>

const std::string eol = "\n";

void main()
{
    std::vector<float> prices = { 20.1f, .5f, 2.99f };

    while(true)
    {
        float sum = 0.0f;
        for(float item : prices) sum += item;
        sum = std::accumulate(prices.begin(), prices.end(), 0.0f);
        std::cout << "Summe: " << sum << eol;

        float eingabe;
        std::cout << "Neuer Preis: ";
        std::cin >> eingabe;

        prices.push_back(eingabe);
    }
}