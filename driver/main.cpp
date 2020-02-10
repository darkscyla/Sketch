#include"Point2D.h"
#include "Quad.h"

#include <SFML/Graphics.hpp>

int main()
{
    Point2D PointObject(1920,1080);
    sf::RenderWindow window(sf::VideoMode(PointObject.x_,PointObject.y_), "SFML works!");
 
    // NOTE: As the class is now in namespace geometry, it must be appended to resolve it
    geometry::Quad quad({ { 
        {300, 300}, 
        {700, 300},
        {900, 700},
        {500, 700}
        } });

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
                window.close();
        }

        window.clear();
        
        // NOTE: Either this (works because of implicit conversion defined in class)
        // window.draw(quad);

        // Or this
        quad.render(&window);

        window.display();
    }

    return 0;
}
