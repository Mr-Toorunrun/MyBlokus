#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
#include "Block.h"
#include "Player.h"


   
void Player::moving(const sf::Event::KeyPressed& e, int& vert, int& hori, std::string nowSelected) {
    if (e.code == sf::Keyboard::Key::Up) {
        if (nowSelected == "4" || nowSelected == "5") {
            if (vert > 0) {
                vert -= 1;
            }
        }
        else {
            if (vert > 1) {
                vert -= 1;
            }
        }
    }
    if (e.code == sf::Keyboard::Key::Down) {
        if (vert < 5) {
            vert += 1;
        }
    }
    if (e.code == sf::Keyboard::Key::Right) {
        if (hori < 5) {
            hori += 1;
        }
    }
    if (e.code == sf::Keyboard::Key::Left) {
        if (nowSelected == "4" || nowSelected == "2") {
            if (hori > 2) {
                hori -= 1;
            }
        }
        else if (nowSelected == "3" || nowSelected == "5") {
            if (hori > 0) {
                hori -= 1;
            }
        }
        else if (nowSelected == "1" || nowSelected == "6") {
            if (hori > 1) {
                hori -= 1;
            }
        }
    }
}
void Player::decideNowSelected(const sf::Event::KeyPressed& e, sf::Clock& clock, std::string& nowSelected, int& vert, int& hori, Board& board, Block& block) {
    if (e.code == sf::Keyboard::Key::Num1) {
        if (nowSelected == "1") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            board.clearBoard();
            clock.restart();
            nowSelected = "1";
            vert = 5;
            hori = 5;
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
    if (e.code == sf::Keyboard::Key::Num2) {
        if (nowSelected == "2") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            clock.restart();
            board.clearBoard();
            nowSelected = "2";
            vert = 5;
            hori = 5;
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
    if (e.code == sf::Keyboard::Key::Num3) {
        if (nowSelected == "3") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            clock.restart();
            board.clearBoard();
            nowSelected = "3";
            vert = 5;
            hori = 5;
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
    if (e.code == sf::Keyboard::Key::Num4) {
        if (nowSelected == "4") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            clock.restart();
            board.clearBoard();
            nowSelected = "4";
            vert = 5;
            hori = 5;
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
    if (e.code == sf::Keyboard::Key::Num5) {
        if (nowSelected == "5") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            clock.restart();
            board.clearBoard();
            vert = 5;
            hori = 5;
            nowSelected = "5";
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
    if (e.code == sf::Keyboard::Key::Num6) {
        if (nowSelected == "6") {
            nowSelected = "";
            board.clearBoard();
        }
        else {
            clock.restart();
            board.clearBoard();
            vert = 5;
            hori = 5;
            nowSelected = "6";
            block.provisionalParts(nowSelected, vert, hori,board);
        }
    }
}
