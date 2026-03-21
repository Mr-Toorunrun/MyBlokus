#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Board {
public:
    /* 
	* Clears the provisional board, 
    * which is used to show the player where the piece will be placed 
    * if they decide to place it. It is called every time the player moves the piece around the board, 
    * so that the provisional changes can be updated accordingly.
    */
    void clearBoard();

    /* 
	* Sets the changes on the board according to the piece that is currently selected.
    */
    void setChanges(int x, int y);

    /* 
	* Sets the provisional changes on the board according to the piece that is currently selected.
    */
    void setProvisionalChanges(int x, int y);
    
    /* 
	* Returns the value of the provisional board at the given coordinates. 
    * This is used to check if the piece can be placed at the given coordinates,
    */
    int getProvisionalBoard(int x, int y);

private:
    char board[6][6];
    char provisionalBoard[6][6];

};