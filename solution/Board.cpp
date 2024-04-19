#include "Board.h"
#include <iostream>
using namespace std;
void Board::PrintCurrentBoard()
{
    cout << "Print current board\n";

    PrintBoard(CurrentBoard);
}

void Board::PrintGuideBoard()
{
    cout << "Print guide board\n";

    PrintBoard(GuideBoard);
}

void Board::ClearBoard()
{
    cout << "Clears the board\n";

    for (string& Field : CurrentBoard)
    {
        Field = " ";
    }
}

void Board::EnterSign(const string& Sign, const int Index)
{
    cout << "Enter sign " + Sign + " to board to field " +
        to_string(Index + 1) + "\n";

    CurrentBoard[Index] = Sign;
}

void Board::PrintBoard(string Board[9]) const
{
    cout << "|" + Board[6] + "|" + Board[7] + "|" + Board[8] + "|\n";
    cout << "-------\n";
    cout << "|" + Board[3] + "|" + Board[4] + "|" + Board[5] + "|\n";
    cout << "-------\n";
    cout << "|" + Board[0] + "|" + Board[1] + "|" + Board[2] + "|\n";
}