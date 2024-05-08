#pragma once
#include "Game.h"
class Menu
{
public:
    Menu();
    void DisplayMenu();
    void Choice();
    static void NewGame();
    static void ModeChoice();
    void Scoreboard();
    void LoadGame();
    void Quit();

private:
    Game Game;
};
