#ifndef POINT3D_H
#define POINT3D_H

class Point3d
{
public:
	Point3d(int x, int y, int z = 0);
	void setValues(int x, int y, int z);
	void print();
	bool isEqual(const Point3d &p2);
	double distanceTo(const Point3d &p2);

private:
	int m_x, m_y, m_z;
};


#endif