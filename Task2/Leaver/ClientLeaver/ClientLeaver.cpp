#include <iostream>
#include "Leaver.h"

int main()
{
    std::string name;
    std::cout << "Enter a name: ";
    getline(std::cin, name);

    Leaver::Leaver lv;
    std::cout << lv.leave(name);

    return 0;
}
