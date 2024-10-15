#include <iostream>
#include <SFML/Graphics.hpp>
#include "PieceDrawer.h"
#include "TextureManager.h"

bool PieceDrawer::loadSprites(){
    TextureManager textureManager;
    textureManager.loadTextures();
    
    for (int i = 0; i < 6; i++){
        sprites.insert(std::make_pair(static_cast<TextureManager::PieceType>(i), sf::Sprite(textureManager.textures[static_cast<TextureManager::PieceType>(i)])));
        if (sprites[static_cast<TextureManager::PieceType>(i)].getTexture() == nullptr){
            return false ;
        }
        return true;
    }
  
}

void PieceDrawer::positionSprites(){
    for (int i = 0; i < 6; i++){
        sprites[static_cast<TextureManager::PieceType>(i)].setPosition(50 + i * 50, 50);
    }
}

void PieceDrawer::draw(sf::RenderWindow& aBoard){
    for (int i = 0; i < 6; i++){
        aBoard.draw(sprites[static_cast<TextureManager::PieceType>(i)]);
    }
}