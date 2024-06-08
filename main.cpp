#include <SFML/Graphics.hpp>
#include <iostream>
#include "ChessBoardDrawer.h"
void run(ChessBoardDrawer& drawer, const std::string& title) {
    sf::RenderWindow window(sf::VideoMode(drawer.getWidth(), drawer.getHeight()), title);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        drawer.drawSquares(window, drawer.getFirstSquareColour(), drawer.getSecondSquareColour());
        window.display();
    }
}

int main(){    
    sf::Color white = sf::Color::White;
    sf::Color black = sf::Color::Black;
    ChessBoardDrawer Drawer(800, 800 , white, black);
    run(Drawer, "Chess Board");
    return 0;
}