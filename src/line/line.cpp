#include "line.h"

void Line::SetLine(const std::array<Coord, 2>& line)
{
	m_line = line;
}

std::array<Coord, 2> Line::GetLine()
{
	return m_line;
}
