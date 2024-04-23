#include "Game.h"

bool Game::GameIsOver()
{
    return true;
}

void Game::Play()
{
    {
        GameBoard.PrintGuideBoard();
        GameBoard.PrintCurrentBoard();
    
        while (!GameIsOver())
        {
            std::cout << "Gracz " << CurrentPlayer->GetName() << ", podaj numer pola (od 1 do 9): ";
            std::string index;
            std::cin >> index;
        
            MakeMove(index, CurrentPlayer->GetSign());
        }
    
    }
    SetPlayersNames();
    GetPlayersInfo();
}
//set player sign
Game::Game(): CurrentPlayer(&Player1)
{
    Player1.SetSign("X");
    Player2.SetSign("O");
}