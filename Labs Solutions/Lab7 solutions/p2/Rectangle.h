#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<string>
using namespace std;

class Rectangle
{
public:
	enum Color  // enums can't be forward declared so they have to be defined here
	{
		BLACK,
		BLUE,
		RED,
		GREEN,
		WHITE,
		MAX_COLOR_SIZE
	};
	Rectangle();
	Rectangle(int len);
	Rectangle(int len, int width, Color color);
	double getArea();
	double getPerimeter();
	string colorToString(Color color);
	string getColor();
private:
	int m_len, m_width;
	const Color m_color;
};

#endif