#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>

class chessPiece{
public:
    enum class colour{
        white,
        black
    };

    const colour colour; // enum?

    sf::RectangleShape sprite{sf::Vector2f(100, 100)};
    
    // load from file unique for each pieces constructor

    
    // better ? -> return how piece should change in array. set piece pos based on array pos.
  

protected:
    [[nodiscard]] virtual bool move() const = 0; 
    
    explicit chessPiece(enum colour colour);
    virtual ~chessPiece() = default;
    chessPiece(const chessPiece&) = delete;
    chessPiece& operator = (const chessPiece&) = delete;
    
    sf::Texture spriteTexture{};

private:
    
    
};

class pawn : public chessPiece{

    [[nodiscard]] bool move() const override;

public:
    explicit pawn(enum colour colour);
};


#endif //CHESS_CHESSPIECE_HPP
