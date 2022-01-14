#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle() = default;
	~Rectangle() = default;

	bool Intersect(const Rectangle& r);

private:
	Coord m_top;
	Angle m_angle;
	Coord m_cx;
	Coord m_cy;
	Coord m_cz;
};

#endif
