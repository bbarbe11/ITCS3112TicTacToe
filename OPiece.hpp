
#ifndef OPiece_hpp
#define OPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;

class OPiece{
public:
    OPiece(int x, int y);
    void setPosition(sf::Vector2f vec);
    void draw(sf::RenderWindow& window,sf::Vector2f pos );
private:
    sf::CircleShape circle;
    sf::Vector2f position;
};

#endif /* OPiece_hpp */
