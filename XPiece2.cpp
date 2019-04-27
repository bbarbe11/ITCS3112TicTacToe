#include "XPiece2.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

XPiece2::XPiece2(int x, int y):position(x, y), rectangle (sf::Vector2f(140, 10)){
    rectangle.setOrigin(70, 5);
    rectangle.rotate(135);
}

void XPiece2::draw(sf::RenderWindow &window, sf::Vector2f pos){
    position=pos;
    
    rectangle.setPosition(position);
    rectangle.setFillColor(sf::Color::White);
    
    
    window.draw(rectangle);
    
}

