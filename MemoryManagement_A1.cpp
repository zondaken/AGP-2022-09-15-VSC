#include <iostream>

int main(int argc, const char *argv[])
{
    std::string nachricht = "hello world";

    try {
        std::cout << nachricht.at(20000);
    } catch(std::exception& e) {
        std::cout << "Exception: " << e.what();
    }

    return 0;
}