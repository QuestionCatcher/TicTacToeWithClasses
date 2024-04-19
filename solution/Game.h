#pragma once
#include "Board.h"

class Game
{
public:
    Game() = default;

    void Play();

private:
    Board Board1;
};