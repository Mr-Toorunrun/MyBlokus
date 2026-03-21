#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

class Block {
    Board board;
public:
    void provisionalParts(std::string nowSelected, int vert, int hori);

};