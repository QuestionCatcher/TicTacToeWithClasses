#pragma once
#include "Board.h"
#include "Player.h"

class Game
{
public:
    void Play();
    Game();
private:
    //let player to chose field for his Sign
    void MakeMove();
    //Func to loop single game(moves, printing board after move, checking winner/draw.)
    void GameLoop();
    //set player name 
    void SetPlayersNames();
    //get info about player name and sign
    void GetPlayersInfo() const;
    //simple func to switch between players
    void SwitchPlayer();
    Board GameBoard;
    Player Player1;
    Player Player2;
    Player* CurrentPlayer;
};
