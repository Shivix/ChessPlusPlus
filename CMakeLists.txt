cmake_minimum_required(VERSION 3.16)
project(Chess)

set(CMAKE_CXX_STANDARD 20)

set(SRC
        src/chessBoard.cpp
        src/chessPiece.cpp
        src/gameInstance.cpp
        src/main.cpp)

set(INCLUDE
        include/chessBoard.hpp
        include/chessPiece.hpp
        include/gameInstance.hpp)

add_executable(Chess ${SRC} ${INCLUDE})

target_link_libraries(Chess -lsfml-graphics -lsfml-window -lsfml-system)