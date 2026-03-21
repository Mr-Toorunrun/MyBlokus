#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

class Block {
public:
    //Board board;
    void provisionalParts(std::string nowSelected, int vert, int hori, Board& board);

};