#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>


class board {
    public: 
        board();
        void draw(sf:renderWindow(sf::VideoMode(sf::RenderWindow& renderwindow)));
        void loadTexture();
        void placePieces();
        void createBoard();

    private:
        std::vector<std::vector<sf::RectangleShape>> squares;
        std::vector<sf::Texture> textures;
        std::<piece> pieces; //vector of pieces
        const int size = 100;
}

#endif // BOARD_H