#pragma once
#include <string>

class Player
{
public:
    void SetName(std::string NewName);
    std::string GetName() const;
    void SetSign(const std::string& Sign);
    std::string GetSign() const;
private:
    std::string Name;
    std::string Sign;
    
};
