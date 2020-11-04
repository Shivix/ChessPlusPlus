#include "../include/chessPiece.hpp"

chessPiece::chessPiece(enum colour colour):
        colour(colour){

}


// ================================================ pawn ===============================================

std::vector<std::pair<size_t, size_t>> pawn::getLegalMoves() const{
    std::vector<std::pair<size_t, size_t>> legalMoves;
    
    legalMoves.emplace_back(0, 1);
    if (isFirstMove){
        legalMoves.emplace_back(0, 2);
    }
    
    return legalMoves;
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
