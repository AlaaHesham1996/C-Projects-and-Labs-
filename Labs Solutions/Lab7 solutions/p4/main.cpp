#include<iostream>
#include<string>
#include<ctime>
#include <cstdlib> 
#include"Monster.h"

using namespace std;


int main()
{
	srand((time(NULL)));
	rand();
	Monster m = generateMonster();
	m.print();
	for (int i = 0; i < 4; ++i)
		generateMonster().print();

	return 0;
}