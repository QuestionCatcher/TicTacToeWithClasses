#pragma once
#include <string>

class Board
{
public:
    Board() = default;

    void PrintCurrentBoard();
    void PrintGuideBoard();
    void ClearBoard();
    void EnterSign(const std::string& Sign, int Index);

private:
    void PrintBoard(std::string Board[9]) const;

    std::string CurrentBoard[9]{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    std::string GuideBoard[9]{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
};