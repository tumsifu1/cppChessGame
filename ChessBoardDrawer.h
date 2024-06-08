#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>
#include <string>

class ChessBoardDrawer {
    public: 
        ChessBoardDrawer(int aWidth, int aHeight, std::string aFirstSquareColour, std::string aSecondSquarColour, std::string title);
        void draw(sf::RenderWindow aBoard, std::string aFirstSquareColour, std::string aSecondSquarColour);
        int getWidth();
        int getHeight();

    private:
        std::string firstSquareColour;
        std::string secondSquarColour;
        std::string Title;
        int width; 
        int height;

        


};      

#endif // BOARD_H