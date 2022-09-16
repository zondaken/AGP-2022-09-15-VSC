#include <iostream>
#include <string>

class Car {
public:
    std::string name;

    /*explicit*/ Car(std::string name) { this->name = name; }
};

void MachWas(Car c)
{
    std::cout << c.name << "\n";
}

void main()
{
    Car x("VW");
    MachWas(x);

    std::string y("Monitor");
    MachWas(y);
}