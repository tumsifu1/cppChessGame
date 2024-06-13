#ifndef  TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <SFML/Graphics.hpp>
#include <array>

class TextureManager {

    public:
        bool loadTextures();
    private:
        std::unordered_map<PieceType, sf::Texture> textures;
};

#endif // TEXTUREMANAGER_H