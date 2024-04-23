#pragma once
#include <iostream>
#include "Board.h"
#include "Player.h"

class Game
{
public:
    bool GameIsOver();
    void Play();
    Game();

private:
    //set player name 
    void SetPlayersNames()
    {
        std::string Name;
        std::cout << "Podaj imie player 1: \n";
        std::cin >> Name;
        Player1.SetName(Name);
        std::cout << "Podaj imie player 2: \n";
        std::cin >> Name;
        Player2.SetName(Name);
    }
    //get info about player name and sign
    void GetPlayersInfo()
    {
        std::cout << "Player1: \n" + Player1.GetName() + "(znak: " + Player1.GetSign() + ")\n";
        std::cout << "Player2: \n" + Player2.GetName() + "(znak: " + Player2.GetSign() + ")\n";
    }

    void MakeMove(std::string Board, const std::string& sign)
    {
        GameBoard.EnterSign(sign, - 1);
        GameBoard.PrintCurrentBoard();
        SwitchPlayer();
    }

    void SwitchPlayer()
    {
        if (CurrentPlayer == &Player1)
        {
            CurrentPlayer = &Player2;
        }
        else
        {
            CurrentPlayer = &Player1;
        }
    }

    
    
    Board GameBoard;
    Player Player1;
    Player Player2;
    Player* CurrentPlayer;
};















































