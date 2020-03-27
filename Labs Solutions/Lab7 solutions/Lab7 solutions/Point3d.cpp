#include<iostream>
#include"Point3d.h"

using namespace std;

Point3d::Point3d(int x, int y, int z)
	:m_x{ x }, m_y{ y }, m_z{ z }
{
}
void Point3d::setValues(int x, int y, int z){
	m_x = x;
	m_y = y;
	m_z = z;
}
void Point3d::print(){
	cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << endl;
}
bool Point3d::isEqual(const Point3d &p2){
	return (m_x == p2.m_x) && (m_y == p2.m_y) && (m_z == p2.m_z);
}
double Point3d::distanceTo(const Point3d &p2){
	return sqrt(pow(m_x - p2.m_x, 2) + pow(m_y - p2.m_y, 2) + pow(m_z - p2.m_z, 2));
}
