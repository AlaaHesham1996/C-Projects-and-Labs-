#pragma once

using namespace std;

class Ship
{
public:
	Ship();
	Ship(string, string);
	string getName();
	string getYear();
	void setName(string);
	void setYear(string);
	virtual void print();
protected:
	string m_name;
	string m_year;
};