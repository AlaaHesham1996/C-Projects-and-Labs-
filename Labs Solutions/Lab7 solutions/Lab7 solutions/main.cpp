#include<iostream>
#include"Point3d.h"

using namespace std;

int main(){
	Point3d	first(1, 0);
	Point3d second(1, 1, 0);
	first.print();
	second.print();
	cout << (first.isEqual(second) ? "equal" : "not equal") << endl;
	cout << first.distanceTo(second) << endl;
}
