/*
Lab2- Chapter3 (Selections) problems
====================================
	for each problem, you are required to write a program
	So you should take the code of each problem between { } braces and put it
	inside main function
	Problems are ordered as they covered in the lab
*/
#include <iostream>
using namespace std;

//Problem 3.1 : Algebra: solve quadratic equations
void Prob_3_1()
{
	double a, b, c, root1, root2, discriminant;
	cout<<"Enter a, b, c: ";
	cin>>a>>b>>c;
	discriminant = b*b -4*a*c;
	if(discriminant < 0 )
		cout<<"The equation has no real roots";
	else
		if(discriminant == 0 )
		{
			root1 = -b/(2*a);	//NOT: -b/2*a
			cout<<"The root is "<<root1;
		}
		else
		{
			double DiscSqrt = sqrt(discriminant);
			root1 = (-b + DiscSqrt) /2*a;
			root2 = (-b - DiscSqrt) /2*a;
			cout<<"The roots are "<<root1<<" and "<<root2;
		}
}
////////////////////////////////////////////////////////////////////
//Problem 3.2 : Check numbers
void Prob_3_2()
{
	int A, B;
	cout<<"Enter two integers: ";
	cin>>A>>B;
	cout<<A<<" is ";
	cout<< (A%B? "not divisible by " : "divisible by ") << B;
	//The above code is written using ternary operator ? :
	//it can be also written as shown below
	/*
	cout<<A<<" is ";
	if(A%B)
		cout<< "not divisible by "<< B;
	else
		cout<< "divisible by "<< B;
	*/
}
////////////////////////////////////////////////////////////////////
//Problem 3.5 : Find future dates
void Prob_3_5()
{
	int Today, elapsed, FutureDay;
	cout<<"Enter today's day: ";
	cin>>Today;
	cout<<"Enter the number of days elapsed since today: ";
	cin>>elapsed;
	FutureDay = (Today + elapsed)%7;
	
	
	//Note: The following part is not the best way to wrtie the code
	cout<<"Today is ";
	switch(Today)
	{
	case 0: cout<<"Sunday "; break;
	case 1: cout<<"Monday "; break;
	case 2: cout<<"Tuesday "; break;
	case 3: cout<<"Wednesday "; break;
	case 4: cout<<"Thursday "; break;
	case 5: cout<<"Friday "; break;
	case 6: cout<<"Saturday "; break;
	}
	cout<<" and the future day is ";
	switch(FutureDay)
	{
	case 0: cout<<"Sunday "; break;
	case 1: cout<<"Monday "; break;
	case 2: cout<<"Tuesday "; break;
	case 3: cout<<"Wednesday "; break;
	case 4: cout<<"Thursday "; break;
	case 5: cout<<"Friday "; break;
	case 6: cout<<"Saturday "; break;
	}
}
////////////////////////////////////////////////////////////////////
//Problem 3.8 : Comparing integers
void Prob_3_8()
{
	int e1, e2, e3;	//three adges of a triangle
	cout<<"Enter triangle edges: ";
	cin>>e1>>e2>>e3;

	if ((e1 == e2) && (e2 == e3))	
		cout<<"Equilateral Triangle";
	else
		if ((e1 != e2) && (e1 != e3) && (e2 != e3))	
			cout<<"Scalene Triangle";
		else
			cout<<"Isosceles Triangle";

}
////////////////////////////////////////////////////////////////////
//Problem 3.12 : Game: Even or Odd
#include <cstdlib>
#include<ctime>
using namespace std;
void Prob_3_12()
{
	cout<<"Enter a guess: 0 for even, 1 for odd: ";
	bool OddGuess;
	cin>>OddGuess;

	srand(time(NULL));
	bool generateOdd = rand()%2;	//if generated number is odd, then rand%2 = 1 ==> true

	if((OddGuess && generateOdd )|| (!OddGuess && !generateOdd))
		cout<<"Correct Guess";
	else
		cout<<"Inorrect Guess";
}
////////////////////////////////////////////////////////////////////
//Problem 3.21 : Game: Pick a card
#include <cstdlib>
#include<ctime>
using namespace std;
void Prob_3_21()
{
	srand(time(NULL));
	//After running many times comment the above line and re-run the program many times again
	//Have you noticed the effect of the above code line?
	
	int CardRank = rand()%13 + 1;
	//rand()%13 because the card rank is 13 possibilties.
	//rand()%13 produces integers from 0 to 12.
	//We then add 1 to produce integers from 1 to 13
	
	//Important Notes:
	//To generate a random number within certaion range [min --> max]
	// (rand()% (max - min +1))  + min

	int CardSuit = rand()%4;	//similar to above but with 4 possibilities only

	cout<<"The card you picked is ";
	switch(CardRank)
	{
	case 1: cout<<"Ace"; break;
	case 11: cout<<"Jack"; break;
	case 12: cout<<"Queen"; break;
	case 13: cout<<"King"; break;
	default: cout<<CardRank;	//other cases, print the rank number as is
	}
	cout<<" of ";
	switch(CardSuit)
	{
	case 0: cout<<"Clubs"; break;
	case 1: cout<<"Diamonds"; break;
	case 2: cout<<"Hearts"; break;
	case 3: cout<<"Spades"; break;

	}

}


////////////////////////////////////////////////////////////////////
int main()
{
	//To try solution of any problem, either
	// 1- Call the function with the problem name from above code
	// OR
	// 2- Copy the code of the problem inside main here
	
	Prob_3_21();
	
	return 0;	//Don't delete this line
}