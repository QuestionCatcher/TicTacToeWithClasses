// Plik Menu.cpp
#include <iostream>
#include "Menu.h"


Menu::Menu() {
}

void Menu::DisplayMenu(Game& MyGame) {
    std::cout << "Przykladowe Menu \n";
    std::cout << "Wybierz 1-4:\n";
    std::cout << "1. Nowa Gra\n";
    std::cout << "2. Tablica Wynikow\n";
    std::cout << "3. Wczytaj Gre\n";
    std::cout << "4. Opusc gre\n";
    Choice(MyGame);
}

void Menu::Choice(Game& MyGame) {
    int x;
    std::cin >> x;
    switch (x) {
    case 1:
        std::cout << "Nowa gra1\n";
        NewGame(MyGame);
        break;
    case 2:
        Scoreboard();
        std::cout << "Nowa gra2";
        break;
    case 3:
        LoadGame();
        std::cout << "NIECH TEN COUT ZADZIAŁA";
        break;
    case 4:
        Quit();
        std::cout << "Nowa gra4";
        break;
    default:
        std::cout << "Wrong number";
        break;
    }
}

void Menu::NewGame(Game& MyGame) {
    std::cout << "Wybierz tryb gry:\n";
    std::cout << "1. Tryb PvP\n";
    std::cout << "2. Tryb PvE\n";    
    ModeChoice(MyGame);
}

void Menu::ModeChoice(Game& MyGame) {
    int x;
    std::cin >> x;
    switch (x) {
    case 1:
        std::cout << "Wybrano: Tryb PVP\n";
        MyGame.Play();
        break;
    case 2:
        std::cout << "Wybrano: Tryb PvE\n";
        break;
    default:
        std::cout << "Wrong number";
        break;
    }   
}

void Menu::Scoreboard() {
}

void Menu::LoadGame() {
}

void Menu::Quit() {
}
