#include<iostream>
#include<string>
#include"CruiseShip.h"

using namespace std;

CruiseShip::CruiseShip(int passengers, string name, string year)
: m_passengers{ passengers }, Ship(name, year)
{}

void CruiseShip::setPassengers(int passengers){m_passengers = passengers;}
int CruiseShip::getPassengers(){ return m_passengers; }
void CruiseShip::print(){
	cout << "The Cruise Ship " << m_name << " can carry " << m_passengers << endl;
}