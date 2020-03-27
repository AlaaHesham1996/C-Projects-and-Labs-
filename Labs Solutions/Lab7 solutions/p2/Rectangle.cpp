#include<string>
#include"Rectangle.h"

Rectangle::Rectangle()
	:m_len{ 1 }, m_width{ 1 }, m_color{ BLUE }
{
}

Rectangle::Rectangle(int len)
	:m_len{ len }, m_width{ 1 }, m_color{ BLUE }
{
}

Rectangle::Rectangle(int len, int width, Color color)
	:m_len{ len }, m_width{ width }, m_color{ color }
{
}

double Rectangle::getArea(){
	return m_len * m_width;
}

double Rectangle::getPerimeter(){
	return 2 * (m_len + m_width);
}

string Rectangle::colorToString(Color color){
	switch (color)
	{
	case Rectangle::BLACK: return "Black";
	case Rectangle::BLUE: return "Blue";
	case Rectangle::RED: return "Red";
	case Rectangle::GREEN: return "Green";
	case Rectangle::WHITE: return "White";
	default: return "???";
	}
}

string Rectangle::getColor(){
	return	colorToString(m_color);
}
