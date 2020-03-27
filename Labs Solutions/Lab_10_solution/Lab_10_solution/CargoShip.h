#pragma once
#include"Ship.h"

using namespace std;

class CargoShip : public Ship
{
public:
	CargoShip(int, string, string);
	void setCapacity(int);
	int getCapacity();
	virtual void print();
private:
	int m_capacity;
};
