#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

class Piece {
public:
    void createpiece(std::vector<sf::RectangleShape>& lines, std::vector<sf::RectangleShape>& grids, std::vector<sf::RectangleShape>& provisionalGrids, std::vector<sf::RectangleShape>& BlueShapeF, std::vector<sf::RectangleShape>& RedShapeF, std::vector<sf::RectangleShape>& BlueShapeE, std::vector<sf::RectangleShape>& RedShapeE, std::vector<sf::RectangleShape>& BlueShapeD, std::vector<sf::RectangleShape>& RedShapeD, std::vector<sf::RectangleShape>& BlueShapeC, std::vector<sf::RectangleShape>& RedShapeC, std::vector<sf::RectangleShape>& BlueShapeB, std::vector<sf::RectangleShape>& RedShapeB, std::vector<sf::RectangleShape>& BlueShapeA, std::vector<sf::RectangleShape>& RedShapeA);
    void draw(sf::RenderWindow& window,
        sf::Clock& clock,
        std::string& nowSelected,
        std::vector<sf::RectangleShape>& lines,
        std::vector<sf::RectangleShape>& grids,
        std::vector<sf::RectangleShape>& provisionalGrids,
        std::vector<sf::RectangleShape>& BlueShapeF,
        std::vector<sf::RectangleShape>& RedShapeF,
        std::vector<sf::RectangleShape>& BlueShapeE,
        std::vector<sf::RectangleShape>& RedShapeE,
        std::vector<sf::RectangleShape>& BlueShapeD,
        std::vector<sf::RectangleShape>& RedShapeD,
        std::vector<sf::RectangleShape>& BlueShapeC,
        std::vector<sf::RectangleShape>& RedShapeC,
        std::vector<sf::RectangleShape>& BlueShapeB,
        std::vector<sf::RectangleShape>& RedShapeB,
        std::vector<sf::RectangleShape>& BlueShapeA,
        std::vector<sf::RectangleShape>& RedShapeA,
        Board& board
    );
};
