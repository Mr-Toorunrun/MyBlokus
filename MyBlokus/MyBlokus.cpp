#include <SFML/Graphics.hpp>
#include <iostream>
#include <type_traits>
#include "functions.h"

int main() {
    std::string nowSelected = "";
    int cal = 0;
    sf::Clock clock;
    clock.start();
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
                    decideNowSelected(e,clock,nowSelected,provisionalBoard);

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
        

        window.clear(sf::Color::White);
        for (auto& l : lines) {
            window.draw(l);
        }
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                cal = i * 6 + j;
                if (board[i][j] == '1') {
                    grids[cal].setFillColor(sf::Color::Red);
                }
                else if (board[i][j] == '2') {
                    grids[cal].setFillColor(sf::Color::Blue);
                }
                else {
                    grids[cal].setFillColor(sf::Color::Transparent);
                }
            }
        
        
        }
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                cal = i * 6 + j;
                if (provisionalBoard[i][j] == '1') {
                    provisionalGrids[cal].setFillColor(sf::Color(255,0,0,128));
                }
                else {
                    provisionalGrids[cal].setFillColor(sf::Color::Transparent);
                }
            }


        }
        for (auto& g : grids) {
            window.draw(g);
        }
        for (auto& g : provisionalGrids) {
            window.draw(g);
        }
        //ShapeA
        for (auto& a : RedShapeA) {
            a.setFillColor(sf::Color::Red);
            if (nowSelected == "1") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    a.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f/5.f) {

                    a.setFillColor(sf::Color::Transparent);
                }
                    
                
            }
            window.draw(a);
        }
        for (auto& a : BlueShapeA) {
            window.draw(a);
        }
        //ShapeB
        for (auto& b : RedShapeB) {
            b.setFillColor(sf::Color::Red);
            if (nowSelected == "2") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    b.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

                    b.setFillColor(sf::Color::Transparent);
                }


            }
            window.draw(b);
        }
        for (auto& b : BlueShapeB) {
            window.draw(b);
        }
        //shapeC
        for (auto& c : RedShapeC) {
            c.setFillColor(sf::Color::Red);
            if (nowSelected == "3") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    c.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

                    c.setFillColor(sf::Color::Transparent);
                }


            }
            window.draw(c);
        }
        for (auto& c : BlueShapeC) {
            window.draw(c);
        }
        //shapeD
        for (auto& d : RedShapeD) {
            d.setFillColor(sf::Color::Red);
            if (nowSelected == "4") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    d.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

                    d.setFillColor(sf::Color::Transparent);
                }


            }
            window.draw(d);
        }
        for (auto& d : BlueShapeD) {
            window.draw(d);
        }
        //shapeE
        for (auto& e : RedShapeE) {
            e.setFillColor(sf::Color::Red);
            if (nowSelected == "5") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    e.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

                    e.setFillColor(sf::Color::Transparent);
                }


            }
            window.draw(e);
        }
        for (auto& e : BlueShapeE) {
            window.draw(e);
        }
        //shapeF
        for (auto& f : RedShapeF) {
            f.setFillColor(sf::Color::Red);
            if (nowSelected == "6") {
                if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                    f.setFillColor(sf::Color::Red);
                }
                else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

                    f.setFillColor(sf::Color::Transparent);
                }


            }
            window.draw(f);
        }
        for (auto& f : BlueShapeF) {
            window.draw(f);
        }
        if (clock.getElapsedTime().asSeconds() > 1.f+3.f/5.f) {
            clock.restart();
        }
        window.display();

    }
    return 0;
}
