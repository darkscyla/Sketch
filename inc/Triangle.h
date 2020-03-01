#pragma once

#include "Polygon.h"

namespace geometry {

	class Triangle : public Polygon<3>
	{
	public:
	
		Triangle(std::array<sf::Vector2f, 3> _vertices);
		
		};

} 
// namespace geometry
