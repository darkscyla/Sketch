#pragma once

#include "SFML/Graphics.hpp"

#include <array>

namespace geometry {

template< size_t size>
class Polygon
{
	static_assert(size > 2, "Polynomial size must be grater than 2");
protected:
	sf::ConvexShape shape_;
public:
	Polygon(std::array<sf::Vector2f, size> _vertices);

	operator sf::ConvexShape();
	void render(sf::RenderWindow* _window);
};

} // namespace geometry

#include "Polygon_impl.h"
