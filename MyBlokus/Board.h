#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Board {
private:
    char board[6][6];
    char provisionalBoard[6][6];

public:
    void clearBoard();
    //set
    void setChanges(int x, int y);
    void setProvisionalChanges(int x, int y);
    //get
    int getProvisionalBoard(int x, int y);
};