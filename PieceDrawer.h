#ifndef PIECEDRAWER_H
#define PIECEDRAWER_H
#include <SFML/Graphics.hpp>
#include <unordered_map>
#include "TextureManager.cpp"

class PieceDrawer{
    public:
        bool loadSprites();
        void positionSprites();
        void draw(sf::RenderWindow& aBoard);
    private:
        std::unordered_map<PieceType, sf::Sprite> sprites;
}

#endif //DrawPieces.h
