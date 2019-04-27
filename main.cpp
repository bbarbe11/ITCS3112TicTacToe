
#include <SFML/Graphics.hpp>
#include <iostream>
#include "OPiece.hpp"
#include "XPiece.hpp"
#include "XPiece2.hpp"

using namespace std;


int main()
{
    int counter=0;
    sf::Clock clock;
    sf::RenderWindow win(sf::VideoMode(1100, 720), "Tic Tac Toe");
    
    sf::RectangleShape rectangle(sf::Vector2f(10, 650));
    rectangle.setFillColor(sf::Color::White);
    sf::RectangleShape rectangle2(sf::Vector2f(650, 10));
    rectangle2.setFillColor(sf::Color::White);
    
    OPiece o(0, 0);
    XPiece x(0, 0);
    XPiece2 x2(0, 0);
    
    sf::Vector2f vec;
    sf::Vector2f vec1 = sf::Vector2f(900, 220);
    sf::Vector2f vec2 = sf::Vector2f(900, 500);
    sf::Vector2f vec3 = sf::Vector2f(900, 220);
    sf::Vector2f vec4 = sf::Vector2f(900, 500);
    sf::Vector2f vec5 = sf::Vector2f(900, 220);
    sf::Vector2f vec6 = sf::Vector2f(900, 500);
    sf::Vector2f vec7 = sf::Vector2f(900, 220);
    sf::Vector2f vec8 = sf::Vector2f(900, 500);
    sf::Vector2f vec9 = sf::Vector2f(900, 220);
    
    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                vec = sf::Vector2f (sf::Mouse::getPosition(win));
                
                if (vec.x<235&&vec.y<235){//top left square bounds
                    vec=sf::Vector2f(135,135);
                }
                if (vec.x<235&&vec.y>470){//bottom left square bounds
                    vec=sf::Vector2f(135,570);
                }
                if (vec.x<235&&vec.y>235&&vec.y<470){//middle left square bounds
                    vec=sf::Vector2f(135,353);
                }
                if (vec.x>235&&vec.y<235&&vec.x<470){//top middle square bounds
                    vec=sf::Vector2f(353,135);
                }
                if (vec.x>235&&vec.x<470&&vec.y>235&&vec.y<470){//middle square bounds
                    vec=sf::Vector2f(353,353);
                }
                if (vec.x>235&&vec.x<470&&vec.y>470){//bottom middle square bounds
                    vec=sf::Vector2f(353,570);
                }
                if (vec.x>470&&vec.y<235){//top right square bounds
                    vec=sf::Vector2f(570,135);
                }
                if (vec.x>470&&vec.y<470&&vec.y>235){//middle right square bounds
                    vec=sf::Vector2f(570,353);
                }
                if (vec.x>470&&vec.y>470){//bottom right square bounds
                    vec=sf::Vector2f(570,570);
                }
                
                switch (counter) {
                    case 1:
                        vec1=vec;
                        break;
                    case 2:
                        vec2=vec;
                        break;
                    case 3:
                        vec3=vec;
                        break;
                    case 4:
                        vec4=vec;
                        break;
                    case 5:
                        vec5=vec;
                        break;
                    case 6:
                        vec6=vec;
                        break;
                    case 7:
                        vec7=vec;
                        break;
                    case 8:
                        vec8=vec;
                        break;
                    case 9:
                        vec9=vec;
                        break;
                        
                    default:
                        break;
                }
                counter++;
            }
            
        }
        
        win.clear();
        
        
        rectangle.setPosition(sf::Vector2f(235, 35));
        win.draw(rectangle);
        rectangle.setPosition(sf::Vector2f(470, 35));
        win.draw(rectangle);
        rectangle2.setPosition(sf::Vector2f(35, 235));
        win.draw(rectangle2);
        rectangle2.setPosition(sf::Vector2f(35, 470));
        win.draw(rectangle2);
        
        
        o.draw(win,vec2);
        o.draw(win,vec4);
        o.draw(win,vec6);
        o.draw(win,vec8);
        
        x.draw(win, vec1);
        x.draw(win, vec3);
        x.draw(win, vec5);
        x.draw(win, vec7);
        x.draw(win, vec9);
        
        x2.draw(win, vec1);
        x2.draw(win, vec3);
        x2.draw(win, vec5);
        x2.draw(win, vec7);
        x2.draw(win, vec9);
        
        
        win.display();
    }
    
    return 0;
}


