
#include "TextureManager.h"
#include <unordered_map>
enum class PieceType {
    WhitePawn, WhiteRook, WhiteKnight, WhiteBishop, WhiteQueen, WhiteKing,
    BlackPawn, BlackRook, BlackKnight, BlackBishop, BlackQueen, BlackKing
};

void TextureManager::loadTextures(){

    std:unordered_map<pieceType, std::string> pieceToPath = {
        {PieceType::WhitePawn, "white_pawn.png"},
        {PieceType::WhiteRook, "white_rook.png"},
        {PieceType::WhiteKnight, "white_knight.png"},
        {PieceType::WhiteBishop, "white_bishop.png"},
        {PieceType::WhiteQueen, "white_queen.png"},
        {PieceType::WhiteKing, "white_king.png"},
        {PieceType::BlackPawn, "black_pawn.png"},
        {PieceType::BlackRook, "black_rook.png"},
        {PieceType::BlackKnight, "black_knight.png"},
        {PieceType::BlackBishop, "black_bishop.png"},
        {PieceType::BlackQueen, "black_queen.png"},
        {PieceType::BlackKing, "black_king.png"}
    };
}
