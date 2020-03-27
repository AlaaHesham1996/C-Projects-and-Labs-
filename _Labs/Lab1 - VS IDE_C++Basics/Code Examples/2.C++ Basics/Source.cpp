//Note:
//This program contains some syntax error.
//Fix them then run the program
//If there are any runtime/logical errors fix them as well

#include <iostream>
using namespace std;

#define pi 3.14;		//Semicolon?? not here :)
//You can also define pi as a constant
//const double pi = 3.14;

int main()
{
	int i;
	double rad;

	cout<<"Calcualting areas of 2 circles:";
	//The following loop is better written using loops when you study them
	cout<<"\nEnter radius of circle #"<<i;
	cin>>rad;
	double area = pi * pow(rad, 2);	//Power function
	cout<<endl<<"Area of circle #"<<i<<" = "<<area;
	i++;

	cout<<"\nEnter radius of circle #"<<i;
	cin>>rad;
	double area = pi * pow(rad, 2);	//Power function
	cout<<endl<<"Area of circle #"<<i<<" = "<<area;
	

	//Calc the average of 3 int values
	int x, y, z;
	cout<<"\nEnter 3 integer values:";
	cin>>x>>y>>z;	//reading multiple values in a single line
	double avg = (x+y+z)/3.0;
	cout<<endl<<"Average of "<<x<<",\t"<<y<<",\t"<<z<<" is "<<avg;


	return 0;
}

