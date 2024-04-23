#include "Player.h"

#include <iostream>

void Player::SetName(std::string NewName)
{
    Name = NewName;
}

std::string Player::GetName() const
{
    return Name;
}

void Player::SetSign(const std::string& NewSign)
{
    Sign = NewSign;
}

std::string Player::GetSign() const
{
    return Sign;
}

void NewPlayer()
{
    Player Player1;
    Player Player2;

    
}