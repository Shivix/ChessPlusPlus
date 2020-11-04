#ifndef CHESS_CHESSBOARD_HPP
#define CHESS_CHESSBOARD_HPP

#include <SFML/Graphics/RectangleShape.hpp>
#include <memory>
#include "chessPiece.hpp"

class chessBoard{
public:
    
    std::array<sf::RectangleShape, 32> squareArray;
    sf::VertexArray boardLine{sf::LineStrip, 2};
    
    std::array<std::array<std::unique_ptr<chessPiece>, 8>, 8> board; //  2d array to represent the game board to track pieces
    
    chessBoard();
    
    void showLegalMoves(size_t, size_t);
public:
    
    
};


#endif //CHESS_CHESSBOARD_HPP
