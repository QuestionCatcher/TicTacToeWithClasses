#include "Game.h"
#include <iostream>
#include "Board.h"

int x;
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
        GameBoard.PrintCurrentBoard();
        std::cout << "Player " << CurrentPlayer->GetName() << " ,select field(1 to 9) : ";
        MakeMove();{
            if (GameBoard.CheckWinner() == true)
            {
                std::cout << CurrentPlayer->GetName() << "won, congrats! \n";
                break;
            }
            else if (GameBoard.IsDraw() == true)
            {
                std::cout << "Draw!\n";
                break;
            }
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

void Game::MakeMove()
{
    int x;
    std::cout << "Player: " + CurrentPlayer->GetName() + " move.\n";
    std::cin >> x; // Ask for input
    GameBoard.SetField(CurrentPlayer->GetSign(), x -1);
}

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
