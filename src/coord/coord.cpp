#include "coord.h"

void Coord::Set(int x, int y, int z)
{
	_x = x;
	_y = y;
	_z = z;
}

bool Coord::IsEqual(const Coord& coord) const
{
	return x() == coord.x() &&
	y() == coord.y() &&
	z() == coord.z();
}
