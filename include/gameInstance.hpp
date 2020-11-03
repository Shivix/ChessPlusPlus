#ifndef CHESS_GAMEINSTANCE_HPP
#define CHESS_GAMEINSTANCE_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "chessBoard.hpp"

class gameInstance{

    sf::RenderWindow window{sf::VideoMode(800, 1000), "Chess++"};
    chessBoard board{};
public:
    void run();
    
    void draw();
};


#endif //CHESS_GAMEINSTANCE_HPP
