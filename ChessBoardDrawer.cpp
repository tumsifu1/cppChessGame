#include <iostream> // Include the necessary header for 'ostream'
#include "ChessBoardDrawer.h"

//make margins a perctange of width and height
const int BORDER_WIDTH = 10;
const int MARGIN = 25;

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


void ChessBoardDrawer::drawSquares(sf::RenderWindow& board, sf::Color aFirstSquareColour, sf::Color aSecondSquareColour){
    int widthOfSquare = (getWidth() - 2 * (BORDER_WIDTH + MARGIN)) / 8;
    int heightOfSquare = (getHeight() - 2 * (BORDER_WIDTH + MARGIN)) / 8;

    for (int y = 0; y < 8; ++y) {
        for (int x = 0; x < 8; ++x) {
            sf::RectangleShape rectangle(sf::Vector2f(widthOfSquare, heightOfSquare));
            if ((x + y) % 2 == 0) {
                rectangle.setFillColor(aFirstSquareColour);
            } else {
                rectangle.setFillColor(aSecondSquareColour);
            }
            rectangle.setPosition(BORDER_WIDTH + MARGIN + x * widthOfSquare, BORDER_WIDTH + MARGIN + y * heightOfSquare);
            board.draw(rectangle);
        }
    }
}


void ChessBoardDrawer::drawNumbers(sf::RenderWindow& board){
    int heightOfSquare = (getHeight() - 2 * (BORDER_WIDTH + MARGIN)) / 8;
    sf::Font font;
    if (!font.loadFromFile("Roboto-Regular.ttf")) {
        // handle error
    }
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24); 
    text.setFillColor(sf::Color::Black);

    for (int y = 0; y < 8; ++y){
        text.setString(std::to_string(y + 1));
        text.setPosition(BORDER_WIDTH / 2, BORDER_WIDTH + MARGIN + y*heightOfSquare + heightOfSquare / 2);
        board.draw(text);
    }
}

void ChessBoardDrawer::drawLetters(sf::RenderWindow& board){
    int widthOfSquare = (getWidth() - 2 * (BORDER_WIDTH + MARGIN)) / 8;
    sf::Font font;
    if (!font.loadFromFile("Roboto-Regular.ttf")) {
        // handle error
    }
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Black);

    for (int i = 0; i < 8; ++i){
        text.setString(std::string(1, 'A' + i));
        text.setPosition(BORDER_WIDTH + MARGIN + i*widthOfSquare + widthOfSquare / 2, BORDER_WIDTH / 2);
        board.draw(text);
    }
}

void ChessBoardDrawer::drawPeices(sf::RenderWindow& board){
    //draw peices on board
 }

void ChessBoardDrawer::draw(sf::RenderWindow& board){
    drawSquares(board, getFirstSquareColour(), getSecondSquareColour());
    drawNumbers(board);
    drawLetters(board);
    drawPeices(board);
}
