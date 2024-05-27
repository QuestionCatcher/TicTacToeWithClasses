#include <iostream>
#include "Board.h"
#include "Utility.h"
#include "Game.h"


//set player sign
Game::Game(): CurrentPlayer(&Player1)
{
    Player1.SetSign("X");
    Player2.SetSign("O");
}

//start game function
void Game::Play()
{
    SetPlayersNames();
    PrintPlayersInfo();
    GameBoard.PrintGuideBoard();
    GameLoop();
}

//GameLoop
void Game::GameLoop()
{  // NOLINT(clang-diagnostic-missing-noreturn)
    while (true)
    {
        GameBoard.PrintCurrentBoard();
        MakeMove();
        if (GameBoard.CheckWinner() == true)
        {
            GameBoard.PrintCurrentBoard();
            std::cout << CurrentPlayer->GetName() << " won, congrats! \n";
            PlayAgain(*this);
        }
        if (GameBoard.IsDraw() == true)
        {
            GameBoard.PrintCurrentBoard();
            std::cout << "Draw!\n";
            PlayAgain(*this);
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
void Game::PrintPlayersInfo() const
{
    std::cout << "Player1: \n" + Player1.GetName() + "(sign: " + Player1.GetSign() + ")\n";
    std::cout << "Player2: \n" + Player2.GetName() + "(sign: " + Player2.GetSign() + ")\n";
}

//let player to chose field for his Sign
void Game::MakeMove()
{
    while (true)
    {
        std::cout << "Player " + CurrentPlayer->GetName() + " turn.\n";
        int x = Utility::EnterInt(9);

        if (GameBoard.IsFieldOccupied(x))
        {
            std::cout << "Field is already taken!\n";
            std::cout << "Select another field\n";
            GameBoard.PrintCurrentBoard();
        }
        else
        {
            GameBoard.SetField(CurrentPlayer->GetSign(), x - 1);
            break;
        }
    }
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

void Game::PlayAgain(Game& MyGame)
{  // NOLINT(clang-diagnostic-infinite-recursion)
    std::cout << "Do you want to play again?\n";
    std::cout << "1 - Yes, 2 - No\n";
    int x = Utility::EnterInt(2);
    switch (x) {
    case 1:
        std::cout << "Let's play again1!\n";
        GameBoard.ClearBoard();
        GameLoop();
    case 2:  // NOLINT(clang-diagnostic-implicit-fallthrough)
        std::cout << "Bye bye!\n";
        Menu.DisplayMenu(MyGame);
    }   
}
