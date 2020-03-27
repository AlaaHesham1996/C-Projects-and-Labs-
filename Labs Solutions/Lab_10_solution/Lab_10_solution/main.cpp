#include <iostream>
#include"Ship.h"
#include"CruiseShip.h"
#include"CargoShip.h"

using namespace std;

int main(){
	Ship ** ships = new Ship*[3];
	Ship s = Ship{ "Normandy 1", "1805" };
	CruiseShip c1 = CruiseShip(1000, "Normandy 2", "1800");
	CargoShip c2 = CargoShip(1000, "Cargo Ship", "1900");
	ships[0] = & s;
	ships[1] = & c1;
	ships[2] = &c2;
	for (int i = 0; i < 3; i++){
		ships[i]->print();
	}
	(*ships[0]).print();
}