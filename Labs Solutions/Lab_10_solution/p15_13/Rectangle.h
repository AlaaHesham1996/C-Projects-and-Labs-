#pragma once
#include"BasicShape.h"

class Rectangle : public BasicShape
{
public:
	Rectangle(long, long);
	virtual void calcArea();
	long getWidth();
	long getHeight();

private:
	long m_width;
	long m_height;
};