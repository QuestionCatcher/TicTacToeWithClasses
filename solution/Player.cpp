#include "Player.h"

std::string Player::get_name() const
{
    return Name;
}

void Player::set_name(const std::string& name)
{
    Name = name;
}

std::string Player::get_sign() const
{
    return Sign;
}

void Player::set_sign(const std::string& sign)
{
    Sign = sign;
}
