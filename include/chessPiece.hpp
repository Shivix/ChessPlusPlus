#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <memory>

using coordinate = std::pair<size_t, size_t>;

class chessPiece{
public:
    enum class colour{
        white,
        black
    };

    const colour colour; // enum?

    sf::RectangleShape sprite{sf::Vector2f{100, 100}};
    
    // load from file unique for each pieces constructor

    
    // better ? -> return how piece should change in array. set piece pos based on array pos.


    virtual std::vector<coordinate> getLegalMoves(std::array<std::array<std::unique_ptr<chessPiece>, 8>, 8>, coordinate) const = 0;

protected:
    explicit chessPiece(enum colour colour);
    virtual ~chessPiece() = default;
    chessPiece(const chessPiece&) = delete; // copy ctor and assignment deleted to avoid issues such as splicing
    chessPiece& operator = (const chessPiece&) = delete;
    
    sf::Texture spriteTexture{};

private:
    
    
};

class pawn : public chessPiece{
    std::vector<coordinate> getLegalMoves(std::array<std::array<std::unique_ptr<chessPiece>, 8>, 8>, coordinate) const override;
    
    bool isFirstMove{true}; // tracks if the pawn has moved yet to see if it can legally move two squares.
public:
    explicit pawn(enum colour colour);
};


#endif //CHESS_CHESSPIECE_HPP
