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

void Board::SetField(const std::string& Sign, const int Index)
{
    std::cout << "Enter sign " + Sign + " to board to field " +
        std::to_string(Index + 1) + "\n";

    CurrentBoard[Index] = Sign;
}

void Board::PrintBoard(std::string Board[9])
{
    std::cout << "|" + Board[6] + "|" + Board[7] + "|" + Board[8] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[3] + "|" + Board[4] + "|" + Board[5] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[0] + "|" + Board[1] + "|" + Board[2] + "|\n";
}

bool Board::CheckWinner() const
{
    //check board to find a winner in every possible pattern to win.
    if ((CurrentBoard[0] == CurrentBoard[1] && CurrentBoard[1] == CurrentBoard[2] && CurrentBoard[0] != " " ||
         CurrentBoard[3] == CurrentBoard[4] && CurrentBoard[4] == CurrentBoard[5] && CurrentBoard[3] != " " ||
         CurrentBoard[6] == CurrentBoard[7] && CurrentBoard[7] == CurrentBoard[8] && CurrentBoard[6] != " " ||
         CurrentBoard[0] == CurrentBoard[3] && CurrentBoard[3] == CurrentBoard[6] && CurrentBoard[0] != " " ||
         CurrentBoard[1] == CurrentBoard[4] && CurrentBoard[4] == CurrentBoard[7] && CurrentBoard[1] != " " ||
         CurrentBoard[2] == CurrentBoard[5] && CurrentBoard[5] == CurrentBoard[8] && CurrentBoard[2] != " " ||
         CurrentBoard[0] == CurrentBoard[4] && CurrentBoard[4] == CurrentBoard[8] && CurrentBoard[0] != " " ||
         CurrentBoard[2] == CurrentBoard[4] && CurrentBoard[4] == CurrentBoard[6] && CurrentBoard[2] != " "))
    {
        return true;
    }
    return false;
}

bool Board::IsDraw() const
{
    for (int i = 0; i < 9; i++)
    {
        if (CurrentBoard[i] == " ")
        {
            return false;
        }
    }
    return true;
}

