#pragma once
#include <string>

class Board
{
public:
    Board() = default;
    //Print current board 
    void PrintCurrentBoard();
    //simple board with numbered fields
    void PrintGuideBoard();
    //add player Sign to specific field
    void SetField(const std::string& Sign, int Index);
    //check if picked field is occupied by Sign
    bool IsFieldOccupied(const int x) const;
    //check board to find a winner in every possible pattern to win.
    bool CheckWinner() const;
    //check for draw. Full board = draw.
    bool IsDraw() const;
    //clear board for next game 
    void ClearBoard();
    //add player Sign to specific field
    
private:
    static void PrintBoard(std::string Board[9]);
    std::string CurrentBoard[9]{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    std::string GuideBoard[9]{"1", "2", "3", "4", "5", "6", "7", "8", "9"};
};
