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
        {500, 800}
        } });

    // TODO 3:
    //      Create a triangle object and set its coordinates as above.
    //      This works because of initializers list. Also, visualize it
    //      similar to quad object. Try both the approaches 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
                window.close();
        }

        window.clear();
        
        // NOTE: Either this (works because of implicit conversion defined in polygon class
        //                    Suppose a function takes a double as an argument. The type of,
        //                    say, Point2D is of course different. Using implicit conversion,
        //                    you can define how a certain object should be converted into another.
        //                    In this case, a conversion to sf::ConvexShape is defined (take a look)
        // window.draw(quad);

        // Or this
        quad.render(&window);

        window.display();
    }

    return 0;
}
