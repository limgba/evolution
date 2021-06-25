#ifndef COORD_H
#define COORD_H

class Coord
{
public:
	void Set(int x, int y, int z);
	bool IsEqual(const Coord& coord) const;
	int x() const { return _x; }
	int y() const { return _y; }
	int z() const { return _z; }

private:
	int _x;
	int _y;
	int _z;
};

#endif
