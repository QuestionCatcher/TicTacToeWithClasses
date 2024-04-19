#pragma once
#include <string>

class Player
{
public:
    void setName(std::string NewName);
    std::string get_name() const;
    void set_name(const std::string& name);
    std::string get_sign() const;
    void set_sign(const std::string& sign);

private:
    std::string Name;
    std::string Sign;
};
