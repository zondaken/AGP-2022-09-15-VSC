#include <string>

class Auto
{
private:
    std::string _hersteller, _modell;
public:
    Auto(std::string hersteller, std::string modell);
    std::string GetHersteller();
    std::string GetModell();
};