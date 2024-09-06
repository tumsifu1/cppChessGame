#ifndef  TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <SFML/Graphics.hpp>
#include <array>

class TextureManager {

    public:
        enum class PieceType {
            WhitePawn, WhiteRook, WhiteKnight, WhiteBishop, WhiteQueen, WhiteKing,
            BlackPawn, BlackRook, BlackKnight, BlackBishop, BlackQueen, BlackKing
        };
        bool loadTextures();
        std::unordered_map<PieceType, sf::Texture> textures;
    private:
        
};

#endif // TEXTUREMANAGER_H