#include <iostream>
#include "Greeter.h"

int main()
{
    std::string name;
    std::cout << "Enter a name: ";
    getline(std::cin, name);

    Greeter::Greeter gr;
    std::cout << gr.greet(name);
}
