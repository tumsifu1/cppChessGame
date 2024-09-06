
#include "TextureManager.h"
#include <unordered_map>
#include <SFML/Graphics.hpp>


enum class PieceType {
    WhitePawn, WhiteRook, WhiteKnight, WhiteBishop, WhiteQueen, WhiteKing,
    BlackPawn, BlackRook, BlackKnight, BlackBishop, BlackQueen, BlackKing
};


namespace std { //hash function for PieceType
    template<>
    struct hash<PieceType> {
        std::size_t operator()(PieceType piece) const {
            int pieceAsInt = static_cast<int>(piece);
            return std::hash<int>()(pieceAsInt);
        }
    }; 
}

bool TextureManager::loadTextures(){
    std::unordered_map<PieceType, std::string> filenames = {
        {PieceType::WhitePawn, "assets/whitePawn.png"},
        {PieceType::WhiteRook, "assets/whiteRook.png"},
        {PieceType::WhiteKnight, "assets/whiteKnight.png"},
        {PieceType::WhiteBishop, "assets/whiteBishop.png"},
        {PieceType::WhiteQueen, "assets/whiteQueen.png"},
        {PieceType::WhiteKing, "assets/whiteKing.png"},
        {PieceType::BlackPawn, "assets/blackPawn.png"},
        {PieceType::BlackRook, "assets/blackRook.png"},
        {PieceType::BlackKnight, "assets/blackKnight.png"},
        {PieceType::BlackBishop, "assets/blackBishop.png"},
        {PieceType::BlackQueen, "assets/blackQueen.png"},
        {PieceType::BlackKing, "assets/blackKing.png"}
    }; // This is where the closing brace should be

    for(const auto& [piece, path] : filenames) {
        sf::Texture texture;
        //if the texture fails to load return false
        if(!texture.loadFromFile(path)){
            return false;
        }
        textures[piece]= std::move(texture);
    }
    return true;
}
