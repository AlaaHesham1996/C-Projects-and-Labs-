#include<iostream>
#include<string>
#include"Rectangle.h"

using namespace std;

int main(){
	Rectangle r1;
	Rectangle r2{ 4 };
	Rectangle r3{ 2, 2, Rectangle::BLACK };
	cout << "R1: " << "\tArea = " << r1.getArea() << "\n\tPerimeter = " << r1.getPerimeter() 
		<< "\n\tColor = " << r1.getColor() << endl;
	cout << "R2: " << "\tArea = " << r2.getArea() << "\n\tPerimeter = " << r2.getPerimeter()
		<< "\n\tColor = " << r2.getColor() << endl;
	cout << "R3: " << "\tArea = " << r3.getArea() << "\n\tPerimeter = " << r3.getPerimeter()
		<< "\n\tColor = " << r3.getColor() << endl;
}