#include "../include/chessPiece.hpp"

chessPiece::chessPiece(enum colour colour):
        colour(colour){

}


// ================================================ pawn ===============================================
bool pawn::move() const{ // shouldnt need to return where it wants to move to it should already know.
    // piece doesnt care care if capture? so check for capture outside class?
    
    // how to show available moves? store possible squares, move them with piece? 
    
    // how to deal with illegal moves? move takes in requested new pos and checks? apply move func. return bool to show  if move valid?
}

pawn::pawn(enum colour colour):
    chessPiece(colour){
    if(colour == colour::white){
        spriteTexture.loadFromFile("../sprites/whitePawn.png");
    }
    else{
        spriteTexture.loadFromFile("../sprites/blackPawn.png");
    }
    sprite.setTexture(&spriteTexture);

} 


