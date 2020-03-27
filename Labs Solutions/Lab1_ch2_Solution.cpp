/*
Lab1- Chapter2 problems
=======================
	for each problem, you are required to write a program
	So you should take the code of each problem between { } braces and put it
	inside main function
	Problems are ordered as they covered in the lab
*/
#include <iostream>
#include <math.h>
using namespace std;

//Problem 2.1 : Convert Celsius to Fahrenheit
void Prob_2_1()
{
	//To try the code of this problem
	//Copy the code starting the next line inside main below
	double Fah, Cel;
	cout<<"Enter a degree in Celsius: ";
	cin>>Cel;
	Fah = (9.0/5) * Cel + 32; //note the division
	cout<<Cel<<" Celsius is "<<Fah<<" Fahrenheit";
	//The last line to copy is the above line
}
////////////////////////////////////////////////////////////////////
//Problem 2.9 : Physics: acceleration
void Prob_2_9()
{
	double v0, v1, t, acc;
	cout<<"Enter v0, v1, and t: ";
	cin>>v0>>v1>>t;		//NOT cin>>v0,v1,t This is wrong
	acc = (v1 - v0)/t;	//NOT v1-v0/t
	cout<<"The average acceleration is "<<acc;
}
////////////////////////////////////////////////////////////////////
//Problem 2.6 : Sum the digits in an integer (between 0 - 1000)
void Prob_2_6()
{
	int value, digit, sum=0;
	cout<<"Enter a number between 0 and 1000: ";
	cin>>value;

	//NOTE:
	//The following code is not recommended and should be implemented
	//using loops when studiyng it.
	//You should never repeat your code

	digit = value%10;	// get the 1st digit on the right
	sum += digit;		//equivalent to sum = sum + digit	
	//now, get rid of the first digit on the right
	value /=10;			//equivalent to value = value /10
	
	digit = value%10;	// get the 1st digit on the right
	sum += digit;		//equivalent to sum = sum + digit	
	//now, get rid of the first digit on the right
	value /=10;			//equivalent to value = value /10
	
	digit = value%10;	// get the 1st digit on the right
	sum += digit;		//equivalent to sum = sum + digit	
	//now, get rid of the first digit on the right
	value /=10;			//equivalent to value = value /10
	
	digit = value%10;	// get the 1st digit on the right
	sum += digit;		//equivalent to sum = sum + digit	
	//now, get rid of the first digit on the right
	value /=10;			//equivalent to value = value /10
	
	cout<<"The sum of the digits is "<<sum;
}
////////////////////////////////////////////////////////////////////
//Problem 2.15 : Geometry: distance of two points
void Prob_2_15()
{
	double x1, y1, x2, y2, distance;
	cout<<"Enter x1 and y1: ";
	cin>>x1>>y1;
	cout<<"Enter x2 and y2: ";
	cin>>x2>>y2;
	distance = sqrt ( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
	//Can also be written as
	//distance = sqrt ( pow((x2-x1),2) + pow((y2-y1),2) );

	cout<<"The distance between the two points is "<<distance;
}
////////////////////////////////////////////////////////////////////
//Problem 2.17 : Science: wind-chill temperature
void Prob_2_17()
{
	double t, v, Twc;
	cout<<"Enter the temperature in Fahrenheit: ";
	cin>>t;
	cout<<"Enter the wind speed in miles per hour: ";
	cin>>v;
	Twc = 35.74 + .6215 * t - 35.75 * pow(v, .16) + .4275 *t* pow(v,.16); 
	//Try to rewrite the above formula to call pow(v, .16) one time only not two times
	cout<<"The wind chill index is "<<Twc;
}
////////////////////////////////////////////////////////////////////
//Problem 2.18 : Print a table
void Prob_2_18()
{
	cout<<"x\ty\tpow(x,y)";
	cout<<"\n2.5\t1.2\t"<<pow(2.5,1.2);
	cout<<"\n5.0\t2.4\t"<<pow(5.0,2.4);
	cout<<"\n1.2\t3.6\t"<<pow(1.2,3.6);
	cout<<"\n2.4\t5.0\t"<<pow(2.4,5);
	cout<<"\n3.6\t2.5\t"<<pow(3.6,2.5);
}
////////////////////////////////////////////////////////////////////
int main()
{
	//To try solution of any problem, either
	// 1- Call the function with the problem name from above code
	// OR
	// 2- Copy the code of the problem inside main here
	Prob_2_17()
	
	
	return 0;	//Don't delete this line
}