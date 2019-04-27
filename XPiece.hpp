
#ifndef XPiece_hpp
#define XPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;

class XPiece{
public:
    XPiece(int x, int y);
    void setPosition(sf::Vector2f vec);
    void draw(sf::RenderWindow& window,sf::Vector2f pos );
private:
    sf::RectangleShape rectangle;
    sf::Vector2f position;
};

#endif /* XPiece_hpp */
