#pragma once
#include <string>

class Player
{
public:
    //set name for player
    void SetName(std::string NewName);
    std::string GetName() const;
    //set sign for player
    void SetSign(const std::string& Sign);
    std::string GetSign() const;
private:
    std::string Name;
    std::string Sign;
    
};
