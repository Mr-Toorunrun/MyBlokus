#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
#include "Block.h"

class Player {
public:
    Board board;
    Block block;
    void moving(const sf::Event::KeyPressed& e, int& vert, int& hori, std::string nowSelected);
    void decideNowSelected(const sf::Event::KeyPressed& e, sf::Clock& clock, std::string& nowSelected, int& vert, int& hori);
};