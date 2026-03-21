#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

class Block {
public:
    /*
    * It will set the provisional changes on the board according to the piece that is currently selected.
    */
    void provisionalParts(std::string nowSelected, int vert, int hori, Board& board);

};