#include <SFML/Graphics.hpp>
#include<Point2D.h>

int main()
{
    Point2D PointObject(1920,1080);
    sf::RenderWindow window(sf::VideoMode(PointObject.x_,PointObject.y_), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
