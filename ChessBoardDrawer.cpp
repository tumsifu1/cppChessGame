#include <iostream> // Include the necessary header for 'ostream'
#include "ChessBoardDrawer.h"


ChessBoardDrawer::ChessBoardDrawer(int aWidth, int aHeight,sf::Color aFirstSquareColour, sf::Color aSecondSquarColour, std::string aTitle)
    :width(aWidth), height(aHeight), firstSquareColour(aFirstSquareColour), secondSquareColour(aSecondSquarColour), title(aTitle){ //member intializer list
    sf::VideoMode mode = sf::VideoMode(width, height);
    sf::RenderWindow board =  sf::RenderWindow(mode, title);
    };

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
        sf::Color ChessBoardDrawer::getSecondSquarColour(){
            return secondSquareColour;
        };

void ChessBoardDrawer::drawSquares(sf::RenderWindow aBoard, std::string aFirstSquareColour, std::string aSecondSquarColour){
    //divide the sizes of each square to fit into the window 64x 
    //loop 64 times and each time %8 I increase the y by 1/8th

    int widthOfSquare = getWidth()/8;
    int heightOfSquare = getHeight()/8;
    sf::RectangleShape rectangle(sf::Vector2f(widthOfSquare, heightOfSquare));
    rectangle.setFillColor(getFirstSquareColour);
    // for(int i= 0; i++; i<64){
        
    // }
    
};

