#include "../include/chessBoard.hpp"

chessBoard::chessBoard(){
    size_t k = 0;
    for(size_t i = 0; i < 4; ++i){
        for(size_t j = 0; j < 4; ++j){ // sets the size and position of the chessboard's squares // TODO: add ability to change colour
            squareArray[k].setSize(sf::Vector2f{100, 100});
            squareArray[k].setPosition(static_cast<float>(i) * 200, static_cast<float>(j) * 200);
            squareArray[++k].setSize(sf::Vector2f{100, 100});
            squareArray[k++].setPosition(static_cast<float>(i) * 200 + 100, static_cast<float>(j) * 200 + 100);
        }
    }
    boardLine[0].position = sf::Vector2f{800, 800};
    boardLine[1].position = sf::Vector2f{0, 800};
}

void chessBoard::showLegalMoves(size_t i, size_t j){
    
    auto legalMoves = board[i][j]->getLegalMoves(this->board, coordinate{i, j});
    legalMovesVec.clear();
    for(size_t index = 0; auto&& possibleMove: legalMoves){
        legalMovesVec.emplace_back(sf::Vector2f{100, 100});
        legalMovesVec[index++].setPosition(possibleMove.first, possibleMove.second);
    }
    
    
}
