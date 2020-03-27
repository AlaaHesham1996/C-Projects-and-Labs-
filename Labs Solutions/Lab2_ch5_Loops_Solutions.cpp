/*
Lab2- Chapter5 (Loops) problems
================================
	for each problem, you are required to write a program
	So you should take the code of each problem between { } braces and put it
	inside main function
	Problems are ordered as they covered in the lab
*/

//Biased random generator
//'a' 30% of the time, 'b' 70%
#include <cstdlib>
#include<ctime>
using namespace std;

void Extra_Problem()
{
	srand(time(NULL));
	for(int i=0; i<100; i++)
	{
		double r = rand()/(double)RAND_MAX * 100;	//cast to avoid int division
		if ( r <=30 ) cout<<"a ";
		else cout<<"b ";		
	}
}
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
void Prob_5_6()
{
  cout<<"Meters\tFeet\t|\tFeet\tMeters"<<endl;
  for(int i=1; i<=15; i++)
        cout<<i<<"\t"<<i*3.28<<"\t|"<<i*3<<"\t"<<i*3/3.28<<endl;    
}
/////////////////////////////////////////////////////////////////
#include <cmath>
using namespace std;
void Prob_5_37()
{
    double sum=0;
    for(int i=99; i>=9; i-=6)
        sum+=1/(pow(i,(1.0/3) )- pow(i-6,(1/3.0)));
    cout<<sum;
    return 0;   

}
/////////////////////////////////////////////////////////////////
#include <string>
void Prob_5_10()
{
    int n;
    cout<<"Enter number of items";
    cin>>n;
    double price, MinPrice = DBL_MAX; //#includ <float.h> for DBL_MAX
    string name, MinName = "";
    for(int i=0; i<n; i++)
    {
        cout<<"Enter price:";
        cin>>price;
        cout<<"Enter name:"
        cin>>name;
        if(price<MinPrice)
        {
            MinPrice = price;
            MinName = name;
        }
    }
    cout<<"Lowest Price is "<<MinPrice<<" for item "<<MinName;
}
/////////////////////////////////////////////////////////////////
void Prob_5_14()
{
	int n=1;
	while(pow(2,n)<30000)
		n++;
	cout<<"Largest n where 2^n < 30000 is"<< n-1;
}
/////////////////////////////////////////////////////////////////
void Prob_5_1()
{
	int countPos=0, countNeg=0, sum=0, value;
	double avg;
	cout<<"Enter an integer, the input ends if it is 0: ";
	do
	{
		cin>>value;
		if(value>0) 	countPos++;
		else if(value<0)    countNeg++;
		
		sum+=value;			
	}while(value); //or while(value !=0)
	
	
	if(countPos || countNeg)
	{
		avg = (double)sum/(countPos + countNeg);
		cout<<"\nThe number of positives is "<<countPos;
		cout<<"\nThe number of negatives is "<<countNeg;
		cout<<"\nThe total is "<<sum;
		cout<<"\nThe average is "<<avg;
	}
	else
		cout<<"No numbers are entered except 0";
}
/////////////////////////////////////////////////////////////////
void Prob_5_41()
{
	int max=INT_MIN;	//in some comilers, you may need to include <climits>
	int count=0, value;
	cout<<"Enter numbers: ";
	do
	{
		cin>>value;
		if(value>max)   //a new max found
		{
		    max = value;
		    count=1;
		}
		else if(value == max)    count++;   //max is repeated
	}while(value); //or while(value !=0)
	cout<<"\nThe largest number is "<<max;
	cout<<"\nThe occurrence count of the largest number is "<<count;
}
/////////////////////////////////////////////////////////////////
//5.35 left as exercise
//5.55 left as exercise