#pragma once
#include"BasicShape.h"

class Circle: public BasicShape
{
public:
	Circle(long, long, double);
	virtual void calcArea();
	long getCenterx();
	long getCentery();

private:
	long m_centerx;
	long m_centery;
	double m_radius;
};