#include<iostream>
#include"Rectangle.h"
#include"Circle.h"

using namespace std;

int main(){
	Circle c{ 5, 4, 2.0 };
	c.calcArea();
	BasicShape &cr = c;
	BasicShape *cp = &c;
	Rectangle r{ 4, 5 };
	r.calcArea();
	BasicShape &rr = r;
	BasicShape *rp = &r;
	cout << "Circle Area is " << c.getArea() << endl;
	cout << "Rectangle Area is " << r.getArea() << endl;
	cout << "Circle Area is " << cr.getArea() << endl;
	cout << "Rectangle Area is " << rr.getArea() << endl;
	cout << "Circle Area is " << cp->getArea() << endl;
	cout << "Rectangle Area is " << rp->getArea() << endl;
}

