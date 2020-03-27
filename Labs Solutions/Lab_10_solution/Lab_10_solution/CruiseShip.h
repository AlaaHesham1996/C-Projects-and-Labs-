#pragma once
#include"Ship.h"

using namespace std;

class CruiseShip : public Ship
{
public:
	CruiseShip(int, string, string);
	void setPassengers(int);
	int getPassengers();
	virtual void print();
private:
	int m_passengers;
};
