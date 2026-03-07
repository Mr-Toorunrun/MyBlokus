#include <iostream>
#include <SFML/Graphics.hpp>
#include "functions.h"

void createpiece(std::vector<sf::RectangleShape>& lines, std::vector<sf::RectangleShape>& grids, std::vector<sf::RectangleShape>& provisionalGrids, std::vector<sf::RectangleShape>& BlueShapeF, std::vector<sf::RectangleShape>& RedShapeF, std::vector<sf::RectangleShape>& BlueShapeE, std::vector<sf::RectangleShape>& RedShapeE, std::vector<sf::RectangleShape>& BlueShapeD, std::vector<sf::RectangleShape>& RedShapeD, std::vector<sf::RectangleShape>& BlueShapeC, std::vector<sf::RectangleShape>& RedShapeC, std::vector<sf::RectangleShape>& BlueShapeB, std::vector<sf::RectangleShape>& RedShapeB, std::vector<sf::RectangleShape>& BlueShapeA, std::vector<sf::RectangleShape>& RedShapeA) {
    //vertiacal
    for (int i = 0; i < 7; i++) {
        sf::RectangleShape l(sf::Vector2f(5.f, 600.f + i * 0.8)); //shape
        l.setFillColor(sf::Color::Black);               //color
        l.setPosition({ 0.f + i * 100.f, 0.f });      //position
        lines.push_back(l);                             //put l into vector(lines)
    }
    //horizonal
    for (int i = 0; i < 7; i++) {
        sf::RectangleShape l(sf::Vector2f(600.f, 5.f)); //shape
        l.setFillColor(sf::Color::Black);               //color
        l.setPosition({ 0.f, 0.f + i * 100.f });      //position
        lines.push_back(l);                             //put l into vector(lines)
    }
    //grids
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            sf::RectangleShape g(sf::Vector2f(95.f, 95.f));
            g.setFillColor(sf::Color::Transparent);
            g.setPosition({ 5.f + 100.f * j,5.f + 100.f * i });
            grids.push_back(g);
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            sf::RectangleShape g(sf::Vector2f(95.f, 95.f));
            g.setFillColor(sf::Color::Transparent);
            g.setPosition({ 5.f + 100.f * j,5.f + 100.f * i });
            provisionalGrids.push_back(g);
        }
    }
    //ShapeA
    for (int n = 0; n < 2; n++) {
        for (int i = 0; i < 2; i++) {

            sf::RectangleShape a(sf::Vector2f(30.f, 30.f));

            if (n == 0) {                               //color
                a.setFillColor(sf::Color::Red);
            }
            else {
                a.setFillColor(sf::Color::Blue);
            }

            if (n == 0) {                               //position
                a.setPosition({ 650.f + 30.f * i,100.f });
            }
            else {
                a.setPosition({ 650.f + 30.f * i,330.f });
            }
            if (n == 0) {                               //Red or Blue
                RedShapeA.push_back(a);
            }
            else {
                BlueShapeA.push_back(a);
            }
        }
        sf::RectangleShape a(sf::Vector2f(30.f, 30.f));

        if (n == 0) {                               //color
            a.setFillColor(sf::Color::Red);
        }
        else {
            a.setFillColor(sf::Color::Blue);
        }

        if (n == 0) {                               //position
            a.setPosition({ 650.f,130.f });
        }
        else {
            a.setPosition({ 680.f,300.f });
        }
        if (n == 0) {                               //Red or Blue
            RedShapeA.push_back(a);
        }
        else {
            BlueShapeA.push_back(a);
        }
    }
    //ShapeB
    for (int n = 0; n < 2; n++) {
        for (int i = 0; i < 3; i++) {

            sf::RectangleShape b(sf::Vector2f(30.f, 30.f));

            if (n == 0) {                               //color
                b.setFillColor(sf::Color::Red);
            }
            else {
                b.setFillColor(sf::Color::Blue);
            }

            if (n == 0) {                               //position
                b.setPosition({ 740.f + 30.f * i,130.f });
            }
            else {
                b.setPosition({ 740.f + 30.f * i,300.f });
            }
            if (n == 0) {                               //Red or Blue
                RedShapeB.push_back(b);
            }
            else {
                BlueShapeB.push_back(b);
            }
        }
        sf::RectangleShape b(sf::Vector2f(30.f, 30.f));

        if (n == 0) {                               //color
            b.setFillColor(sf::Color::Red);
        }
        else {
            b.setFillColor(sf::Color::Blue);
        }

        if (n == 0) {                               //position
            b.setPosition({ 770.f,100.f });
        }
        else {
            b.setPosition({ 770.f,330.f });
        }
        if (n == 0) {                               //Red or Blue
            RedShapeB.push_back(b);
        }
        else {
            BlueShapeB.push_back(b);
        }
    }
    //ShapeC
    for (int n = 0; n < 2; n++) {
        for (int i = 0; i < 2; i++) {

            sf::RectangleShape c(sf::Vector2f(30.f, 30.f));

            if (n == 0) {                               //color
                c.setFillColor(sf::Color::Red);
            }
            else {
                c.setFillColor(sf::Color::Blue);
            }

            if (n == 0) {                               //position
                c.setPosition({ 860.f,100.f + 30.f * i });
            }
            else {
                c.setPosition({ 860.f,300.f + 30.f * i });
            }
            if (n == 0) {                               //Red or Blue
                RedShapeC.push_back(c);
            }
            else {
                BlueShapeC.push_back(c);
            }
        }
    }
    //ShapeD
    for (int n = 0; n < 2; n++) {
        for (int i = 0; i < 3; i++) {

            sf::RectangleShape d(sf::Vector2f(30.f, 30.f));

            if (n == 0) {                               //color
                d.setFillColor(sf::Color::Red);
            }
            else {
                d.setFillColor(sf::Color::Blue);
            }

            if (n == 0) {                               //position
                d.setPosition({ 650.f + i * 30.f,210.f });
            }
            else {
                d.setPosition({ 650.f + i * 30.f,410.f });
            }
            if (n == 0) {                               //Red or Blue
                RedShapeD.push_back(d);
            }
            else {
                BlueShapeD.push_back(d);
            }
        }
    }
    //ShapeE
    for (int n = 0; n < 2; n++) {
        sf::RectangleShape e(sf::Vector2f(30.f, 30.f));

        if (n == 0) {                               //color
            e.setFillColor(sf::Color::Red);
        }
        else {
            e.setFillColor(sf::Color::Blue);
        }

        if (n == 0) {                               //position
            e.setPosition({ 770.f,210.f });
        }
        else {
            e.setPosition({ 770.f,410.f });
        }
        if (n == 0) {                               //Red or Blue
            RedShapeE.push_back(e);
        }
        else {
            BlueShapeE.push_back(e);
        }
    }
    //ShapeF
    for (int n = 0; n < 2; n++) {
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < 2; i++) {

                sf::RectangleShape f(sf::Vector2f(30.f, 30.f));

                if (n == 0) {                               //color
                    f.setFillColor(sf::Color::Red);
                }
                else {
                    f.setFillColor(sf::Color::Blue);
                }

                if (n == 0) {                               //position
                    f.setPosition({ 830.f + 30.f * i,210.f + 30.f * j });
                }
                else {
                    f.setPosition({ 830.f + i * 30.f,410.f + 30.f * j });
                }
                if (n == 0) {                               //Red or Blue
                    RedShapeF.push_back(f);
                }
                else {
                    BlueShapeF.push_back(f);
                }
            }
        }
    }

}
void clearBoard (char provisionalBoard[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            provisionalBoard[i][j] = '0';
        }
    }
}
void decideNowSelected(const sf::Event::KeyPressed& e, sf::Clock& clock, std::string& nowSelected, char provisionalBoard[6][6], int& vert, int& hori) {
    if (e.code == sf::Keyboard::Key::Num1) {
        if (nowSelected == "1") {
            nowSelected = "";
            clearBoard(provisionalBoard);
        }
        else {
            clearBoard(provisionalBoard);
            clock.restart();
            nowSelected = "1";
            vert = 5;
            hori = 5;
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
    if (e.code == sf::Keyboard::Key::Num2) {
        if (nowSelected == "2") {
            nowSelected = "";
            clearBoard(provisionalBoard);
        }
        else {
            clearBoard(provisionalBoard);
            clock.restart();
            nowSelected = "2";
            vert = 5;
            hori = 5;
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
    if (e.code == sf::Keyboard::Key::Num3) {
        if (nowSelected == "3") {
            nowSelected = "";
            clearBoard(provisionalBoard);
        }
        else {
            clock.restart();
            clearBoard(provisionalBoard);
            nowSelected = "3";
            vert = 5;
            hori = 5;
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
    if (e.code == sf::Keyboard::Key::Num4) {
        if (nowSelected == "4") {
            nowSelected = ""; 
            clearBoard(provisionalBoard);
        }
        else {
            clock.restart();
            clearBoard(provisionalBoard);
            vert = 5;
            hori = 5;
            nowSelected = "4";
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
    if (e.code == sf::Keyboard::Key::Num5) {
        if (nowSelected == "5") {
            nowSelected = "";
            clearBoard(provisionalBoard);
        }
        else {
            clock.restart();
            clearBoard(provisionalBoard);
            vert = 5;
            hori = 5;
            nowSelected = "5";
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
    if (e.code == sf::Keyboard::Key::Num6) {
        if (nowSelected == "6") {
            nowSelected = "";
            clearBoard(provisionalBoard);
        }
        else {
            clock.restart();
            clearBoard(provisionalBoard);
            vert = 5;
            hori = 5;
            nowSelected = "6";
            provisionalParts(nowSelected, vert, hori, provisionalBoard);
        }
    }
}
void provisionalParts(std::string nowSelected, int vert, int hori, char provisionalBoard[6][6]) {
    clearBoard(provisionalBoard);
    if (nowSelected == "1") {
        provisionalBoard[vert-1][hori] = '1';
        provisionalBoard[vert][hori-1] = '1';
        provisionalBoard[vert - 1][hori - 1] = '1';
    }
    if (nowSelected == "2") {
        provisionalBoard[vert][hori] = '1';
        provisionalBoard[vert][hori-1] = '1';
        provisionalBoard[vert][hori-2] = '1';
        provisionalBoard[vert - 1][hori - 1] = '1';
    }
    if (nowSelected == "3") {
        provisionalBoard[vert][hori] = '1';
        provisionalBoard[vert-1][hori] = '1';
    }
    if (nowSelected == "4") {
        provisionalBoard[vert][hori] = '1';
        provisionalBoard[vert][hori-1] = '1';
        provisionalBoard[vert][hori-2] = '1';
    }
    if (nowSelected == "5") {
        provisionalBoard[vert][hori] = '1';
    }
    if (nowSelected == "6") {
        provisionalBoard[vert][hori] = '1';
        provisionalBoard[vert - 1][hori] = '1';
        provisionalBoard[vert][hori-1] = '1';
        provisionalBoard[vert-1][hori - 1] = '1';
    }
}
void moving(const sf::Event::KeyPressed& e, int& vert, int& hori, std:: string nowSelected) {
    if (e.code == sf::Keyboard::Key::Up) {
        if (nowSelected == "4" || nowSelected == "5") {
            if (vert > 0){
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
            if (hori > 3) {
                hori -= 1;
            }
        }
        if (nowSelected == "3" || nowSelected == "5") {
            if (hori > 2) {
                hori -= 1;
            }
        }
        else {
            if (hori > 1) {
                hori -= 1;
            }
        }
    }
}

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
    char provisionalBoard[6][6]) {
    window.clear(sf::Color::White);
    for (auto& g : grids) {
        window.draw(g);
    }
    for (auto& l : lines) {
        window.draw(l);
    }
   
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {

            if (provisionalBoard[i][j] == '1') {
                provisionalGrids[i * 6 + j].setFillColor(
                    sf::Color(255, 0, 0, 128) 
                );
            }
            else {
                provisionalGrids[i * 6 + j].setFillColor(
                    sf::Color::Transparent
                );
            }
            window.draw(provisionalGrids[i * 6 + j]);
        }
    }
    //ShapeA
    for (auto& a : RedShapeA) {
        a.setFillColor(sf::Color::Red);
        if (nowSelected == "1") {
            if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
                a.setFillColor(sf::Color::Red);
            }
            else if (clock.getElapsedTime().asSeconds() > 4.f / 5.f) {

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
    if (clock.getElapsedTime().asSeconds() > 1.f + 3.f / 5.f) {
        clock.restart();
    }
    window.display();

}