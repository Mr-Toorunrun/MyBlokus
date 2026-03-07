#include <SFML/Graphics.hpp>
#include <iostream>
#include <type_traits>
#include "functions.h"

int main() {
    std::string nowSelected = "";
    int cal = 0;
    sf::Clock clock;
    clock.start();
    int vert = 0, hori = 0;
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
    int speed = 5;
    sf::RenderWindow window(sf::VideoMode({ 1000, 700 }), "Screen");
    window.setFramerateLimit(60);

    std::vector<sf::RectangleShape> lines;
    std::vector<sf::RectangleShape> grids;
    std::vector<sf::RectangleShape> provisionalGrids;

    //grids

    //ShapeA
    std::vector<sf::RectangleShape> RedShapeA;
    std::vector<sf::RectangleShape> BlueShapeA;

    //ShapeB
    std::vector<sf::RectangleShape> RedShapeB;
    std::vector<sf::RectangleShape> BlueShapeB;

    //ShapeC
    std::vector<sf::RectangleShape> RedShapeC;
    std::vector<sf::RectangleShape> BlueShapeC;

    //ShapeD
    std::vector<sf::RectangleShape> RedShapeD;
    std::vector<sf::RectangleShape> BlueShapeD;
    
    //ShapeE
    std::vector<sf::RectangleShape> RedShapeE;
    std::vector<sf::RectangleShape> BlueShapeE;
    
    //ShapeF
    std::vector<sf::RectangleShape> RedShapeF;
    std::vector<sf::RectangleShape> BlueShapeF;
    
    createpiece(lines, grids,provisionalGrids, BlueShapeF, RedShapeF, BlueShapeE, RedShapeE, BlueShapeD, RedShapeD, BlueShapeC, RedShapeC, BlueShapeB, RedShapeB, BlueShapeA, RedShapeA);
    while (window.isOpen()) {
        // pollEvent now returns std::optional<sf::Event>
        
        while (auto eventOpt = window.pollEvent()) {
            const sf::Event& event = *eventOpt;

            event.visit([&](auto&& e) {
                using T = std::decay_t<decltype(e)>;

                if constexpr (std::is_same_v<T, sf::Event::Closed>) {
                    window.close();
                }

                if constexpr (std::is_same_v<T, sf::Event::KeyPressed>) {
                    decideNowSelected(e,clock,nowSelected,provisionalBoard,vert,hori);
                    moving(e, vert, hori,nowSelected);
                }
                });

            // SFML 3.x provides visit() for handling variant-like event
            event.visit([](auto&& e) {
                using T = std::decay_t<decltype(e)>;

                if constexpr (std::is_same_v<T, sf::Event::Closed>) {

                    // You need access to window here to actually close it
                }
                else if constexpr (std::is_same_v<T, sf::Event::KeyPressed>) {

                }
                }
            );
        }
        provisionalParts(nowSelected,vert,hori,provisionalBoard);
        draw(window, clock, nowSelected, lines, grids, provisionalGrids, BlueShapeF, RedShapeF, BlueShapeE, RedShapeE, BlueShapeD, RedShapeD, BlueShapeC, RedShapeC, BlueShapeB, RedShapeB, BlueShapeA, RedShapeA,provisionalBoard);
    
    }
    return 0;
}
