#include <iostream> // Include the necessary header for 'ostream'
#include "ChessBoardDrawer.h"


ChessBoardDrawer::ChessBoardDrawer(int aWidth, int aHeight, sf::Color aFirstSquareColour, sf::Color aSecondSquareColour)
    :width(aWidth), height(aHeight), firstSquareColour(aFirstSquareColour), secondSquareColour(aSecondSquareColour){ //member intializer list

    }

int ChessBoardDrawer::getWidth(){
    return width;
}

int ChessBoardDrawer::getHeight()
{
    return height;
}

sf::Color ChessBoardDrawer::getFirstSquareColour(){
    return firstSquareColour;
};
sf::Color ChessBoardDrawer::getSecondSquareColour(){
    return secondSquareColour;
}

void ChessBoardDrawer::drawSquares(sf::RenderWindow& window, sf::Color aFirstSquareColour, sf::Color aSecondSquareColour){
    //divide the sizes of each square to fit into the window 64x 
    //loop 64 times and each time %8 I increase the y by 1/8th
    int widthOfSquare = getWidth() / 8;
    int heightOfSquare = getHeight() / 8;

    for (int y = 0; y < 8; ++y) {
        for (int x = 0; x < 8; ++x) {
            sf::RectangleShape rectangle(sf::Vector2f(widthOfSquare, heightOfSquare));
            if ((x + y) % 2 == 0) {
                rectangle.setFillColor(aFirstSquareColour);
            } else {
                rectangle.setFillColor(aSecondSquareColour);
            }
            rectangle.setPosition(x * widthOfSquare, y * heightOfSquare);
            window.draw(rectangle);
        }
    }
}

