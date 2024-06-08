#include <iostream> // Include the necessary header for 'ostream'
#include "ChessBoardDrawer.h"

class ChessBoardDrawer{
    ChessBoardDrawer::ChessBoardDrawer(int aWidth, int aHeight, std::string aFirstSquareColour, std::string aSecondSquarColour, std::string atitle){
        this->width = aWidth;
        this->height = aHeight;
        this->firstSquareColour = aFirstSquareColour;
        this->secondSquarColour = aSecondSquarColour;
        this->title = atitle;

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

    void ChessBoardDrawer::draw(sf::RenderWindow aBoard, std::string aFirstSquareColour, std::string aSecondSquarColour){
    };



};