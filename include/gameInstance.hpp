#ifndef CHESS_GAMEINSTANCE_HPP
#define CHESS_GAMEINSTANCE_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "chessBoard.hpp"

class gameInstance{

    sf::RenderWindow window{sf::VideoMode(800, 1000), "Chess++"};
    chessBoard board{};
public:
    void run(){
        while(window.isOpen()){
            sf::Event sfmlEvent{};
            while(window.pollEvent(sfmlEvent)){
                switch(sfmlEvent.type){
                    case sf::Event::Closed:
                        window.close();
                        break;
                }
            }

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){

                sf::Mouse::getPosition(window);
            }
            draw();
        } 
    }
    void draw(){
        window.clear();
        for(auto&& i: board.squareArray){
            window.draw(i);
        }
        window.draw(board.boardLine);
        window.display(); 
    }
};


#endif //CHESS_GAMEINSTANCE_HPP
