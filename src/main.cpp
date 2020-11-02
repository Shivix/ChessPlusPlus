
#include <iostream>
#include "../include/gameInstance.hpp"

int main(){
    
    gameInstance instance{};
    try{
        instance.run(); 
    }
    catch(const std::exception& exception){
        std::cerr << exception.what() << std::endl;
    }
    return 0;
}