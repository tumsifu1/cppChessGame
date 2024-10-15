#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <SFML/Graphics.hpp>
#include <unordered_map>

// Forward declaration of TextureManager
class TextureManager;

// Forward declaration of PieceType
enum class PieceType : int;

// Declare the hash specialization before including any standard library headers
namespace std {
    template<>
    struct hash<PieceType>;
}

class TextureManager {
public:
    enum class PieceType : int {
        WhitePawn, WhiteRook, WhiteKnight, WhiteBishop, WhiteQueen, WhiteKing,
        BlackPawn, BlackRook, BlackKnight, BlackBishop, BlackQueen, BlackKing
    };

    bool loadTextures();
    std::unordered_map<PieceType, sf::Texture> textures;

private:
    // Private members (if any)
};

// Define the hash specialization after the full definition of PieceType
namespace std {
    template<>
    struct hash<PieceType> {
        std::size_t operator()(PieceType piece) const {
            return static_cast<std::size_t>(piece);
        }
    };
}

#endif // TEXTUREMANAGER_H