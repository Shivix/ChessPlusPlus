#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>

class chessPiece{
    
    // load from file unique for each pieces constructor


    // move function change pos of sprite?? needs to stay accurate with boards array | maybe return the new pos or representation of its move?
    
    
    virtual void move() const = 0;

protected:
    explicit chessPiece(bool isWhite):
    isWhite(isWhite){
        
    }

    sf::Texture spriteTexture{};

public:
    
    const bool isWhite; // enum?

    sf::RectangleShape sprite{sf::Vector2f(100, 100)};
};

class pawn : public chessPiece{

    void move() const override{ // return pair to represent how to move through the array? check its a valid move outside of class?
       
   }

public:
    pawn(bool isWhite):
    chessPiece(isWhite)
    {
        if(isWhite){
            spriteTexture.loadFromFile("../sprites/whitePawn.png");
        }
        else{
            spriteTexture.loadFromFile("../sprites/blackPawn.png");
        }
        sprite.setTexture(&spriteTexture);
        
    }
};


#endif //CHESS_CHESSPIECE_HPP
