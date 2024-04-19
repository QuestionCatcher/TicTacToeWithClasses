#include "Game.h"

void Game::Play()
{
    Board1.PrintGuideBoard();
    Board1.PrintCurrentBoard();
    Board1.EnterSign("X", 4);
    Board1.PrintCurrentBoard();
    Board1.ClearBoard();
    Board1.PrintCurrentBoard();
}