#include "../include/gameInstance.hpp"

void gameInstance::run(){
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

void gameInstance::draw(){
    window.clear();
    for(auto&& i: board.squareArray){
        window.draw(i);
    }
    window.draw(board.boardLine);
    pawn testPawn{true};
    window.draw(testPawn.sprite); // TODO: iterate through array of pieces?
    window.display();
}
