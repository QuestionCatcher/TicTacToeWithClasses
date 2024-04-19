#pragma once
#include <string>

using namespace std;
class Board
{
public:
    Board() = default;

    void PrintCurrentBoard();
    void PrintGuideBoard();
    void ClearBoard();
    void EnterSign(const string& Sign, int Index);

private:
    void PrintBoard(string Board[9]) const;

    string CurrentBoard[9]{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    string GuideBoard[9]{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
};