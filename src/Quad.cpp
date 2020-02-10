#include "Quad.h"

namespace geometry {

Quad::Quad(std::array<sf::Vector2f, 4> _vertices) : 
	Polygon(_vertices)
{
	shape_.setOutlineColor(sf::Color::White);
	shape_.setFillColor(sf::Color::Red);
	shape_.setOutlineThickness(5);
}

}	// namespace geometry
