#include "../include/chessPiece.hpp"

chessPiece::chessPiece(enum colour colour):
        colour(colour){

}


// ================================================ pawn ===============================================

std::vector<coordinate> pawn::getLegalMoves(std::array<std::array<std::unique_ptr<chessPiece>, 8>, 8> board, coordinate ownPosition) const{ // have second param bool to check for new scenarios like castling be allowed or pawn able to attack diagonally
    std::vector<coordinate> legalMoves;
    
    const size_t x{ownPosition.first};
    const size_t y{ownPosition.second};
    
    if (colour == colour::white){
        if (board[x - 1][y] == nullptr){ // checks if the position in front is empty
            legalMoves.emplace_back(0, 1);
            if (isFirstMove && board[x - 2][y]){
                legalMoves.emplace_back(0, 2);
            }
        }
    }
    else{ // if piece is black
        if (board[x + 1][y] == nullptr){
            legalMoves.emplace_back(0, 1);
            if (isFirstMove && board[x + 2][y]){
                legalMoves.emplace_back(0, 2);
            }
        }
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
