#ifndef SHAPE_h
#define SHAPE_h

class Shape
{
public:
	virtual int Vertex() = 0;
	virtual bool Intersect(const Shape* shape) = 0;

};

#endif
