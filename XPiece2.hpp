
#ifndef XPiece2_hpp
#define XPiece2_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;

class XPiece2{
public:
    XPiece2(int x, int y);
    void setPosition(sf::Vector2f vec);
    void draw(sf::RenderWindow& window,sf::Vector2f pos );
private:
    sf::RectangleShape rectangle;
    sf::Vector2f position;
};

#endif /* XPiece2_hpp */
