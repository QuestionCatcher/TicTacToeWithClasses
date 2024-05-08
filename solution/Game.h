#pragma once
#include "Board.h"
#include "Player.h"

class Game
{
public:
    Game();

    void Play();

private:
    //Func to loop single game(moves, printing board after move, checking winner/draw.)
    void GameLoop();    
    //set player name 
    void SetPlayersNames();
    //get info about player name and sign
    void PrintPlayersInfo() const;
    //let player to chose field for his Sign
    void MakeMove();
    //simple func to switch between players
    void SwitchPlayer();
    Board GameBoard;
    Player Player1;
    Player Player2;
    Player* CurrentPlayer;
};
