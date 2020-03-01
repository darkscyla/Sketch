#include "Polygon.h"

namespace geometry {

template<size_t size>
Polygon<size>::Polygon(std::array<sf::Vector2f, size> _vertices)
{
	shape_.setPointCount(size);

	for (size_t i = 0; i < size; ++i)
		shape_.setPoint(i, _vertices[i]);

	shape_.setOutlineColor(sf::Color::Blue);
	shape_.setOutlineThickness(5);
}

template<size_t size>
Polygon<size>::operator sf::ConvexShape()
{
	return shape_;
}

template<size_t size>
void Polygon<size>::render(sf::RenderWindow* _window)
{
	_window->draw(shape_);
}

}