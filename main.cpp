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
        drawer.draw(window);
        window.display();
    }
}

int main(){    
    sf::Color lightWood(222, 184, 135);
    sf::Color darkWood(139, 69, 19);

    ChessBoardDrawer Drawer(1000, 1000 , lightWood, darkWood);
    run(Drawer, "Chess Board");
    return 0;
}