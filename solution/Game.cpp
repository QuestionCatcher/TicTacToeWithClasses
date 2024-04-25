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
        std::cout << "Gracz " << CurrentPlayer->GetName() << ", podaj numer pola (od 1 do 9): ";
        MakeMove();
        
    }
    
}

//set player name
void Game::SetPlayersNames()
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
void Game::GetPlayersInfo()
{
    std::cout << "Player1: \n" + Player1.GetName() + "(znak: " + Player1.GetSign() + ")\n";
    std::cout << "Player2: \n" + Player2.GetName() + "(znak: " + Player2.GetSign() + ")\n";
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
    std::cout << "Gracz: " + CurrentPlayer->GetName() + " wykonuje ruch.\n";
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
