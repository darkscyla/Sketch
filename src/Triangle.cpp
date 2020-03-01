#include "Triangle.h"

namespace geometry {

	Triangle::Triangle(std::array<sf::Vector2f, 3> _vertices) : Polygon(_vertices)
	{
		shape_.setFillColor(sf::Color::Blue);
		shape_.setOutlineColor(sf::Color::White);
		shape_.setOutlineThickness(5);
	}
}