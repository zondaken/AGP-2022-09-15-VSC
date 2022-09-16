#include <string>

#include "Auto.hpp"

Auto::Auto(std::string hersteller, std::string modell)
{
    _hersteller = hersteller;
    _modell = modell;
}

std::string Auto::GetHersteller() { return _hersteller; }
std::string Auto::GetModell() { return _modell; }