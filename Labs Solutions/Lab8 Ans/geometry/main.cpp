#include <iostream>
#include "RegularPolygon.h"
#include <iostream>
using namespace std;

int main()
{
    // random test for the functions
   RegularPolygon unkown, triangle(3,2) , rectangle(4,2,1,1);

   cout << triangle.getN() << endl;
   cout << unkown.getN() << endl;
   cout << "triangle info: \n" << "origin at : ("<< triangle.getX()<< ", "<< triangle.getY()<<")\n";
   cout <<"area : " << triangle.getArea() << endl;
   cout << "perimeter: " << triangle.getPerimeter() << endl;

   unkown.setN(5);
   unkown.setsideL(6);
   unkown.setX(0);
   unkown.setY(0);

   cout << "unkown info :" << unkown.getN() <<" " <<unkown.getX() <<" " << unkown.getArea() << " " <<unkown.getPerimeter() << endl;
    return 0;
}
