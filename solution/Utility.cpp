#include "Utility.h"
#include <iostream>


int Utility::EnterInt(const int End, const int Start)
{
    int Input;
    while (!(std::cin >> Input) || Input < Start || Input > End)
    {
        std::cout << "Enter valid number!\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    return Input;
}

std::string Utility::EnterString(const int MinLength)
{
    std::string String;
    // validation
    // code

    return String;
}
