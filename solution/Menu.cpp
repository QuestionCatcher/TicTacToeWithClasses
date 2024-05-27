#include <iostream>
#include "Menu.h"

#include "Game.h"
#include "Utility.h"


Menu::Menu()
{
    
}

void Menu::DisplayMenu(Game& MyGame) {
    std::cout << "===== MAIN MENU =====\n";
    std::cout << "Pick 1-4:\n";
    std::cout << "1. New Game\n";
    std::cout << "2. Scoreboard\n";
    std::cout << "3. Load Game\n";
    std::cout << "4. Quit\n";
    Choice(MyGame);
}

void Menu::Choice(Game& MyGame) {
    int x = Utility::EnterInt(4);
    switch (x) {
    case 1:
        std::cout << "New Game\n";
        NewGame(MyGame);
        break;
    case 2:
        std::cout << "Scoreboard";
        Scoreboard();
        break;
    case 3:
        std::cout << "Load Game";
        LoadGame();
        break;
    case 4:
        std::cout << "Quit";
        Quit(MyGame);
        break;
    }
}

void Menu::NewGame(Game& MyGame) {
    std::cout << "Game-mode:\n";
    std::cout << "1. Player vs Player\n";
    std::cout << "2. Player vs computer\n";    
    ModeChoice(MyGame);
}

void Menu::ModeChoice(Game& MyGame) {
    int x = Utility::EnterInt(2);
    switch (x) {
    case 1:
        std::cout << "Mode selected: Player vs Player\n";
        MyGame.Play();
        break;
    case 2:
        std::cout << "Mode Selected: Player vs Computer\n";
        break;
    }   
}

void Menu::Scoreboard() {
}

void Menu::LoadGame() {
}

void Menu::Quit(Game& MyGame)
{
    std::cout << "Are you sure you want to leave the game?(pick 1-2)\n";
    std::cout << "1. Yes\n";
    std::cout << "2. No\n";    
    QuitChoice(MyGame);
}

void Menu::QuitChoice(Game& MyGame) {
    int x = Utility::EnterInt(2);
    switch (x) {
    case 1:
        std::cout << "Thanks for playing my game!\n";
        break;
    case 2:
        std::cout << "Welcome back!\n";
        DisplayMenu(MyGame);
        break;
    }   
}

