#include "../include/chessPiece.hpp"

chessPiece::chessPiece(bool isWhite):
        isWhite(isWhite){

}


// ================================================ pawn ===============================================
bool pawn::move() const{ // shouldnt need to return where it wants to move to it should already know.
    // piece doesnt care care if capture? so check for capture outside class?

    // how to deal with illegal moves? move takes in requested new pos and checks? apply move func. return bool to show  if move valid?
}

pawn::pawn(bool isWhite):
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


