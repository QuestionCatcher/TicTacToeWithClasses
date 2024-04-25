#pragma once
#include "Board.h"
#include "Player.h"

class Game
{
public:
    void GameLoop();
    void Play();
    Game();
    void MakeMove() const;
private:
    //set player name 
    void SetPlayersNames();
    //get info about player name and sign
    void GetPlayersInfo();
    
    void SwitchPlayer();
    Board GameBoard;
    Player Player1;
    Player Player2;
    Player* CurrentPlayer;
};
