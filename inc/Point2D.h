#pragma once

class Point2D
{
public:
	int x_, y_;

	Point2D()
	{
		x_ = 800;
		y_ = 600;
	}

	Point2D(int a, int b)
	{
		x_ = a;
		y_ = b;
	}
};