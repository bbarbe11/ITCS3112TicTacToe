#include "XPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

XPiece::XPiece(int x, int y):position(x, y), rectangle (sf::Vector2f(140, 10)){
    rectangle.setOrigin(70, 5);
    rectangle.rotate(45);
}

void XPiece::draw(sf::RenderWindow &window, sf::Vector2f pos){
    position=pos;
    
    rectangle.setPosition(position);
    rectangle.setFillColor(sf::Color::White);
    
    
    window.draw(rectangle);

}

