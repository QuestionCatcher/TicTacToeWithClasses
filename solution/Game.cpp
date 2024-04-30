#include "Game.h"
#include <iostream>
#include "Board.h"
#include "Utility.h"

//start game function
void Game::Play()
{
    {
        SetPlayersNames();
        GetPlayersInfo();
        GameBoard.PrintGuideBoard();
        GameLoop();

    }
}

//GameLoop
void Game::GameLoop()
{
    while (true)
    {
        std::cout << "======= CURRENT BOARD =======\n";
        GameBoard.PrintCurrentBoard();
        MakeMove();
            if (GameBoard.CheckWinner() == true)
            {
                GameBoard.PrintCurrentBoard();
                std::cout << CurrentPlayer->GetName() << " won, congrats! \n";
                break;
            }
            if (GameBoard.IsDraw() == true)
            {
                GameBoard.PrintCurrentBoard();
                std::cout << "Draw!\n";
                break;
            }
        SwitchPlayer();
    }
}

//set player name
void Game::SetPlayersNames()
{
    std::string Name;
    std::cout << "Player 1 name: \n";
    std::cin >> Name;
    Player1.SetName(Name);
    std::cout << "Player 2 name: \n";
    std::cin >> Name;
    Player2.SetName(Name);
}
//get info about player name and sign
void Game::GetPlayersInfo()
{
    std::cout << "Player1: \n" + Player1.GetName() + "(sign: " + Player1.GetSign() + ")\n";
    std::cout << "Player2: \n" + Player2.GetName() + "(sign: " + Player2.GetSign() + ")\n";
}
//set player sign
Game::Game(): CurrentPlayer(&Player1)
{
    Player1.SetSign("X");
    Player2.SetSign("O");
}

//let player to chose field for his Sign
void Game::MakeMove()
{
    
    int x = Utility::EnterInt(9);
    std::cout << "Player " + CurrentPlayer->GetName() + " turn.\n";
    std::cin >> x;
    GameBoard.IsFieldOccupied(x);
    GameBoard.SetField(CurrentPlayer->GetSign(), x -1);
}

//simple func to switch between players
void Game::SwitchPlayer()
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
