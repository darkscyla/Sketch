#pragma  once

#include "Polygon.h"

#include "SFML/Graphics.hpp"
#include <array>

namespace geometry {

class Quad : public Polygon<4>
{
public:
	Quad(std::array<sf::Vector2f, 4> _vertices);
};

} // namespace geometry
