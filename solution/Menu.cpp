#include "Menu.h"

#include <iostream>

void Menu::DisplayMenu()
{
    std::cout << "Przykładowe Menu \n";
    std::cout << "Wybierz 1-4:\n";
    std::cout << "1. Nowa Gra\n";
    std::cout << "2. Tablica Wyników:\n";
    std::cout << "3. Wczytaj Gre\n";
    std::cout << "4. Opuść gre:\n";
 }

void Menu::Choice()
{
    int x;
    std::cin >> x;
    switch (x)
    {
    case '1':
        {
            NewGame();
            std::cout << "Nowa gra1";
            break;
        }
    case '2':
        {
            Scoreboard();
            std::cout << "Nowa gra2";
            break;
        }
    case '3':
        {
            LoadGame();
            std::cout << "Nowa gra3";

            break;
        }
    case '4':
        {
            Quit();
            std::cout << "Nowa gra4";
            break;
        }
    default:
        {
            std::cout << "Wrong number";
            break;
        }
    }
}


void Menu::NewGame()
{
    //funkcja zawiera do wyboru dwie opcjie:
    //Gra PvP oraz PvE(Wymagane utworzenie "AI" do gry PvE)
    //funkcja wywołuje GameLoop 
}

void Menu::Scoreboard()
{
}

void Menu::LoadGame()
{
}

void Menu::Quit()
{
}
