
#include "OPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

OPiece::OPiece(int x, int y):position(x, y), circle(70, 20){
    circle.setOrigin(70, 70);
    circle.setFillColor(sf::Color::White);
}



void OPiece::draw(sf::RenderWindow &window, sf::Vector2f pos){
    position=pos;
    
    circle.setPosition(position);
    
    
    window.draw(circle);
}
