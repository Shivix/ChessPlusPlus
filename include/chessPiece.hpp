#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>

class chessPiece{
    
    // load from file unique for each pieces constructor

    
    // better ? -> return how piece should change in array. set piece pos based on array pos.
    
    [[nodiscard]] virtual bool move() const = 0;

protected:
    explicit chessPiece(bool isWhite);

    sf::Texture spriteTexture{};

public:
    
    const bool isWhite; // enum?

    sf::RectangleShape sprite{sf::Vector2f(100, 100)};
};

class pawn : public chessPiece{

    [[nodiscard]] bool move() const override;

public:
    explicit pawn(bool isWhite);
};


#endif //CHESS_CHESSPIECE_HPP
