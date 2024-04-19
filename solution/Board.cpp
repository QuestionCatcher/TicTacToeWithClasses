#include "Board.h"
#include <iostream>

void Board::PrintCurrentBoard()
{
    std::cout << "Print current board\n";

    PrintBoard(CurrentBoard);
}

void Board::PrintGuideBoard()
{
    std::cout << "Print guide board\n";

    PrintBoard(GuideBoard);
}

void Board::ClearBoard()
{
    std::cout << "Clears the board\n";

    for (std::string& Field : CurrentBoard)
    {
        Field = " ";
    }
}

void Board::EnterSign(const std::string& Sign, const int Index)
{
    std::cout << "Enter sign " + Sign + " to board to field " +
        std::to_string(Index + 1) + "\n";

    CurrentBoard[Index] = Sign;
}

void Board::PrintBoard(std::string Board[9]) const
{
    std::cout << "|" + Board[6] + "|" + Board[7] + "|" + Board[8] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[3] + "|" + Board[4] + "|" + Board[5] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[0] + "|" + Board[1] + "|" + Board[2] + "|\n";
}