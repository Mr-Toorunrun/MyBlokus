#include <SFML/Graphics.hpp>
#include <iostream>
#include <type_traits>

void createpiece(std::vector<sf::RectangleShape> &lines, std::vector<sf::RectangleShape> &grids, std::vector<sf::RectangleShape> &BlueShapeF, std::vector<sf::RectangleShape> &RedShapeF, std::vector<sf::RectangleShape> &BlueShapeE, std::vector<sf::RectangleShape> &RedShapeE, std::vector<sf::RectangleShape> &BlueShapeD, std::vector<sf::RectangleShape> &RedShapeD, std::vector<sf::RectangleShape> &BlueShapeC, std::vector<sf::RectangleShape> &RedShapeC, std::vector<sf::RectangleShape> &BlueShapeB, std::vector<sf::RectangleShape> &RedShapeB, std::vector<sf::RectangleShape> &BlueShapeA, std::vector<sf::RectangleShape> &RedShapeA) {
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

int main() {
    std::string nowSelected = "";
    int cal = 0;
    sf::Clock clock;
    clock.start();
    char board[6][6] =
    {
        {'0','0','1','0','0','0'},
        {'2', '0', '0', '0', '2','0' },
        {'0', '0', '0', '0', '0', '0'},
        {'0', '2', '0', '1', '0','1'},
        {'1', '2', '0', '0', '2','0'},
        {'0', '0', '1', '0', '0','0'}
    };
    int speed = 5;
    sf::RenderWindow window(sf::VideoMode({ 1000, 700 }), "Screen");
    window.setFramerateLimit(60);

    std::vector<sf::RectangleShape> lines;
    std::vector<sf::RectangleShape> grids;

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
    
    createpiece(lines, grids, BlueShapeF, RedShapeF, BlueShapeE, RedShapeE, BlueShapeD, RedShapeD, BlueShapeC, RedShapeC, BlueShapeB, RedShapeB, BlueShapeA, RedShapeA);
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
                    if (e.code == sf::Keyboard::Key::Num1) {
                        nowSelected = "1";

                    }
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
        
        for (auto& g : grids) {
            window.draw(g);
        }
        //ShapeA
        for (auto& a : RedShapeA) {
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
            window.draw(b);
        }
        for (auto& b : BlueShapeB) {
            window.draw(b);
        }
        //shapeC
        for (auto& c : RedShapeC) {
            window.draw(c);
        }
        for (auto& c : BlueShapeC) {
            window.draw(c);
        }
        //shapeD
        for (auto& d : RedShapeD) {
            window.draw(d);
        }
        for (auto& d : BlueShapeD) {
            window.draw(d);
        }
        //shapeE
        for (auto& e : RedShapeE) {
            window.draw(e);
        }
        for (auto& e : BlueShapeE) {
            window.draw(e);
        }
        //shapeE
        for (auto& f : RedShapeF) {
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
