#ifndef CHESS_CHESSBOARD_HPP
#define CHESS_CHESSBOARD_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <memory>
#include "chessPiece.hpp"

class chessBoard{
public:
    
    std::array<sf::RectangleShape, 32> squareArray;
    sf::VertexArray boardLine{sf::LineStrip, 2};
    
    std::array<std::unique_ptr<chessPiece>, 64> board;
    
    chessBoard(){
        size_t k = 0;
        for(size_t i = 0; i < 4; ++i){
            for(size_t j = 0; j < 4; ++j){
                squareArray[k].setSize(sf::Vector2f(100, 100));
                squareArray[k].setPosition(i * 200, j * 200);
                squareArray[++k].setSize(sf::Vector2f(100, 100));
                squareArray[k++].setPosition(i * 200 + 100, j * 200 + 100);
            }
        }
        boardLine[0].position = sf::Vector2f(800, 800);
        boardLine[1].position = sf::Vector2f(0, 800);
    }
    
public:
    
    
};


#endif //CHESS_CHESSBOARD_HPP
