#include <SFML/Graphics.hpp>

void createpiece(std::vector<sf::RectangleShape>& lines, std::vector<sf::RectangleShape>& grids, std::vector<sf::RectangleShape>& provisionalGrids, std::vector<sf::RectangleShape>& BlueShapeF, std::vector<sf::RectangleShape>& RedShapeF, std::vector<sf::RectangleShape>& BlueShapeE, std::vector<sf::RectangleShape>& RedShapeE, std::vector<sf::RectangleShape>& BlueShapeD, std::vector<sf::RectangleShape>& RedShapeD, std::vector<sf::RectangleShape>& BlueShapeC, std::vector<sf::RectangleShape>& RedShapeC, std::vector<sf::RectangleShape>& BlueShapeB, std::vector<sf::RectangleShape>& RedShapeB, std::vector<sf::RectangleShape>& BlueShapeA, std::vector<sf::RectangleShape>& RedShapeA);
void clearBoard(char provisionalBoard[6][6]);
void decideNowSelected(const sf::Event::KeyPressed &e, sf::Clock &clock, std::string &nowSelected, char provisionalBoard[6][6],int& vert,int& hori);
void provisionalParts(std::string nowSelected, int vert, int hori, char provisionalBoard[6][6]);
void moving(const sf::Event::KeyPressed& e, int& vert, int& hori,std::string nowSelected);
void draw(	sf::RenderWindow& window,
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
			char provisionalBoard[6][6]);