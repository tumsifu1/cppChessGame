#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>
#include <string>

class ChessBoardDrawer {
    public: 
        ChessBoardDrawer(int aWidth, int aHeight, sf::Color aFirstSquareColour, sf::Color aSecondSquareColour);
        void drawSquares(sf::RenderWindow& aBoard, sf::Color aFirstSquareColour, sf::Color aSecondSquareColour);
        int getWidth();
        int getHeight();
        sf::Color getFirstSquareColour();
        sf::Color getSecondSquareColour();
    private:
        sf::Color firstSquareColour;
        sf::Color secondSquareColour;
        int width; 
        int height;

        


};      

#endif // BOARD_H