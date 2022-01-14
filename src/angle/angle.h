#ifndef ANGLE_H
#define ANGLE_H

class Angle
{
public:
	Angle() = default;
	~Angle() = default;

	void Set(int x, int y, int z);
	int x() const { return m_x; }
	int y() const { return m_y; }
	int z() const { return m_y; }

private:
	int m_x;
	int m_y;
	int m_z;
};

#endif
