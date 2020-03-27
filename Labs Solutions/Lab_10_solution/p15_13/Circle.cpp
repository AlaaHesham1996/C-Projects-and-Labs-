#include"Circle.h"

using namespace std;

Circle::Circle(long x, long y, double r)
: m_centerx{ x }, m_centery{ y }, m_radius{r}
{}

void Circle::calcArea(){
// The better solution of course is to make m_area protected but the problem statement wanted it private
	setArea(3.14*m_radius*m_radius);
}
long Circle::getCenterx(){ return m_centerx; }
long Circle::getCentery(){ return m_centery; }