#ifndef LINE_H
#define LINE_H

#include <array>
#include "../coord/coord.h"

class Line
{
public:
	Line() = default;
	~Line() = default;

	void SetLine(const std::array<Coord, 2>& line);
	std::array<Coord, 2> GetLine();

private:
	std::array<Coord, 2> m_line;
};

#endif
