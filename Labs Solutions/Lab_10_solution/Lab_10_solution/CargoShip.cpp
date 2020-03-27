#include<iostream>
#include<string>
#include"CargoShip.h"

using namespace std;

CargoShip::CargoShip(int capacity, string name, string year)
: m_capacity{ capacity }, Ship(name, year)
{}

void CargoShip::setCapacity(int capacity){ m_capacity = capacity; }
int CargoShip::getCapacity(){ return m_capacity; }
void CargoShip::print(){
	cout << "The Cargo Ship " << m_name << " can carry " << m_capacity <<" tons"<< endl;
}