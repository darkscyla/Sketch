#include"Point2D.h"
#include "Quad.h"
#include "Triangle.h"

#include <SFML/Graphics.hpp>

int main()
{
    Point2D PointObject(1920,1080);
    sf::RenderWindow window(sf::VideoMode(PointObject.x_,PointObject.y_), "SFML works!");
 
    geometry::Quad quad({ { 
        {300, 300}, 
        {700, 300},
        {900, 700},
        {500, 800}
        } });

    geometry::Triangle triangle({ {
        {1200,600},
        {500,600},
        {850,300}
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
        
        quad.render(&window);
        triangle.render(&window);

        window.display();
    }

    return 0;
}
