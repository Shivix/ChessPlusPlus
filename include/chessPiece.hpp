#ifndef CHESS_CHESSPIECE_HPP
#define CHESS_CHESSPIECE_HPP


#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Texture.hpp>

class chessPiece{
public:
    enum class colour{
        white,
        black
    };

    const colour colour; // enum?

    sf::RectangleShape sprite{sf::Vector2f(100, 100)};
    
    // load from file unique for each pieces constructor

    
    // better ? -> return how piece should change in array. set piece pos based on array pos.


    virtual std::vector<std::pair<size_t, size_t>> getLegalMoves() const = 0;

protected:
    virtual void applyMove() const = 0;

    explicit chessPiece(enum colour colour);
    virtual ~chessPiece() = default;
    chessPiece(const chessPiece&) = delete; // copy ctor and assignment deleted to avoid issues such as splicing
    chessPiece& operator = (const chessPiece&) = delete;
    
    sf::Texture spriteTexture{};

private:
    
    
};

class pawn : public chessPiece{

    void applyMove() const override;
    std::vector<std::pair<size_t, size_t>> getLegalMoves() const override;
    
    bool isFirstMove{true}; // tracks if the pawn has moved yet to see if it can legally move two squares.
public:
    explicit pawn(enum colour colour);
};


#endif //CHESS_CHESSPIECE_HPP
