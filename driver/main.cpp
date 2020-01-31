#include <SFML/Graphics.hpp>

int main()
{
    // TODO 3:
    // 1. Include the Point2D.h file and create a Point2D object
    // 2. Set the x & y values using the constructor
    // 3. Replace the 800, 600 by the points x & y members

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
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
