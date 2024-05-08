#pragma once
#include "Game.h"
class Menu
{
public:
    Menu();
    void DisplayMenu(Game& MyGame);
    void Choice(Game& MyGame);
    void NewGame(Game& MyGame);
    void ModeChoice(Game& MyGame);
    void Scoreboard();
    void LoadGame();
    void Quit();

private:
    
};
