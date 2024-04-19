#include "Player.h"

void Player::SetName(std::string NewName)
{
    Name = NewName;
}

std::string Player::GetName() const
{
    return Name;
}

std::string Player::GetSign() const
{
    return Sign;
}

void Player::SetSign(const std::string& NewSign)
{
    Sign = NewSign;
}
