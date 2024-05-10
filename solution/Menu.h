#pragma once

class Game;

class Menu
{
public:
    Menu();
    void DisplayMenu(Game& MyGame);
    void Choice(Game& MyGame);
    void NewGame(Game& MyGame);
    static void ModeChoice(Game& MyGame);
    void Scoreboard();
    void LoadGame();
    void Quit(Game& MyGame);
    void QuitChoice(Game& MyGame);

private:
    
};
