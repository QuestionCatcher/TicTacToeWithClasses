#pragma once
#include <string>

class Utility
{
public:
    static int EnterInt(const int End, const int Start = 1);
    static std::string EnterString(const int MinLength);
};
