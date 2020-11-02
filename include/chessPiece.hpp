#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>

class chessPiece{
    
    // load from file unique for each pieces constructor


    // move function change pos of sprite?? needs to stay accurate with boards array | maybe return the new pos or representation of its move?
    
    
    virtual void move() const = 0;

protected:
    chessPiece(bool isWhite):
    isWhite(isWhite){
        
    }
    
    sf::RectangleShape sprite{sf::Vector2f(100, 100)};
    sf::Texture spriteTexture{};

public:
    
    const bool isWhite;
    
};

class pawn : public chessPiece{
    
   pawn(bool isWhite):
   chessPiece(isWhite)
   {
       if(isWhite){
           spriteTexture.loadFromFile("../sprites/whitePawn.png");
       }
       else{
           spriteTexture.loadFromFile("../sprites/blackPawn.png");
       }
       
   } 
    
   void move() const override{
       
   }
    
};


#endif //CHESS_CHESSPIECE_HPP
