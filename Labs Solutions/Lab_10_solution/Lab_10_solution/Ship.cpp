#include<iostream>
#include<string>
#include"Ship.h"

using namespace std;

Ship::Ship()
:m_name{ "" }, m_year{ "" }
{}

Ship::Ship(string name, string year)
: m_name{ name }, m_year{ year }
{}

void Ship::setName(string name){ m_name = name; }
void Ship::setYear(string year){ m_year = year; }
string Ship::getName(){ return m_name; }
string Ship::getYear(){ return m_year; }
void Ship::print(){
	cout << "The Ship " << m_name << " was built in " << m_year << endl;
}
