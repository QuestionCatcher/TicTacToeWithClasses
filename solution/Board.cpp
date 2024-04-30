#include "Board.h"
#include <iostream> 

//print current board
void Board::PrintCurrentBoard()
{
    PrintBoard(CurrentBoard);
}

//print board with numbered fields
void Board::PrintGuideBoard()
{
    std::cout << "======= GUIDE BOARD =======\n";

    PrintBoard(GuideBoard);
}
//clear board for next game
void Board::ClearBoard()
{
    std::cout << "Clears the board\n";

    for (std::string& Field : CurrentBoard)
    {
        Field = " ";
    }
}

//add player sign to specific field
void Board::SetField(const std::string& Sign, const int Index)
{
    std::cout << "Enter sign " + Sign + " to board to field " +
        std::to_string(Index + 1) + "\n";

    CurrentBoard[Index] = Sign;
}

bool Board::IsFieldOccupied(int x)
{
    if (CurrentBoard[x - 1] !=" ")
    {
        return false;
    }
    return true;
}



//print board for the first time
void Board::PrintBoard(std::string Board[9])
{
    std::cout << "|" + Board[6] + "|" + Board[7] + "|" + Board[8] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[3] + "|" + Board[4] + "|" + Board[5] + "|\n";
    std::cout << "-------\n";
    std::cout << "|" + Board[0] + "|" + Board[1] + "|" + Board[2] + "|\n";
}

//check board to find a winner in every possible pattern to win.
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

//check for draw. Full board(no empty fields, empty = " ") = draw.
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

