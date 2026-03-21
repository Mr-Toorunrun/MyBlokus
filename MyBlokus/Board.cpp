#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"


    char board[6][6] =
    {
        {'0', '0', '1', '0', '0','0'},
        {'2', '0', '0', '0', '2','0'},
        {'0', '0', '0', '0', '0','0'},
        {'0', '2', '0', '1', '0','1'},
        {'1', '2', '0', '0', '2','0'},
        {'0', '0', '1', '0', '0','0'}
    };
    char provisionalBoard[6][6] =
    {
        {'0', '0', '0', '0' ,'0','0'},
        {'0', '0', '0', '0', '0','0'},
        {'0', '0', '0', '0', '0','0'},
        {'0', '0', '0', '0', '0','0'},
        {'0', '0', '0', '0', '0','0'},
        {'0', '0', '0', '0', '0','0'}
    };
    void Board::clearBoard() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                provisionalBoard[i][j] = '0';
            }
        }
    }
    //set
    void Board::setChanges(int x, int y) {
        board[x][y] = '1';
    }
    void Board::setProvisionalChanges(int x, int y) {
        provisionalBoard[x][y] = '1';
    }
    //get
    int Board::getProvisionalBoard(int x, int y) {
        return provisionalBoard[x][y];
    }