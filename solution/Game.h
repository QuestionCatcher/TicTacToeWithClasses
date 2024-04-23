#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"

class Game
{
public:
    void GameLoop();
    void Play();
    Game();

private:
    //set player name 
    void SetPlayersNames();
    //get info about player name and sign
    void GetPlayersInfo();

    void MakeMove(std::string Board, const std::string& sign);
    void SwitchPlayer();
    Board GameBoard;
    Player Player1;
    Player Player2;
    Player* CurrentPlayer;
};
