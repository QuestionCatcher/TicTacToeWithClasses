#pragma once
#include <string>

class Player
{
public:
    void SetName(std::string NewName);
    std::string GetName() const;
    void SetName1(const std::string& Name);
    std::string GetSign() const;
    void SetSign(const std::string& Sign);

private:
    std::string Name;
    std::string Sign;
};
