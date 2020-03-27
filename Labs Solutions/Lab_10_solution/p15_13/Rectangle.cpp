#include"Rectangle.h"

using namespace std;

Rectangle::Rectangle(long h, long w)
: m_height{ h }, m_width{ w }
{}

void Rectangle::calcArea(){
	setArea(m_height*m_width);
}
long Rectangle::getHeight(){ return m_height; }
long Rectangle::getWidth(){ return m_width; }