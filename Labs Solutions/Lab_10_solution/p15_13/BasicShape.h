#pragma once

class BasicShape
{
public:
	double getArea();
	virtual void calcArea() = 0;
	void setArea(double);

private:
	double m_area;
};
