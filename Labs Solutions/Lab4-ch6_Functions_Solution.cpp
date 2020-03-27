#include <iostream>
#include <string>
using namespace std;

double averageDigits(long n);	//6.2
void displayPattern(int n);		//6.6
void printASCII(char ch1, char ch2, int numberPerLine);	//6.11

double Estimate_pi(int n); //6.13

void multiply(double& num1, double& num2, double& num3, int constant); //6.31

void solveQuadraticEquation(double a, double b, double c,
double& discriminant, double& r1, double& r2);	//6.32

int indexOf(const string& s1, const string& s2);	//6.43

int count(const string& s, char a);	//6.44

string swapCase(const string& s); //6.46

int main()
{
	
	//Test your functions here
	cout<<endl;

	return 0;
}

//Problem 6.2: Average of digits in an integer
double averageDigits(long n)
{
	int sum=0, digitCount=0;
	while(n)
	{
		int rem = n%10;
		n /= 10;
		sum += rem;
		digitCount++;
	}
	return  (double)sum/digitCount;
}
///////////////////////////////////////////////////////////////////
//Problem 6.6: Display Pattern
void displayPattern(int n)
{
	for(int i=n; i>0; i--)
	{
		for(int j=0; j<i; j++)
			cout<<"*";
		cout<<endl;	
	}
}
/////////////////////////////////////////////////////////////////
//Problem 6.11: Display ASCII values 
void printASCII(char ch1, char ch2, int numberPerLine)
{
	int count = 0;
	for(char ch=ch1; ch<=ch2; ch++)
	{
		cout<<(int)ch<<"\t";
		count++;
		if(count == numberPerLine)
		{
			cout<<endl;
			count = 0;
		}
	}
}
/////////////////////////////////////////////////////////////////
//Problem 6.13: Estimate pi
double Estimate_pi(int n)
{
	double sum=0;	
	for(int i=1; i<=n; i++)
		sum+= (1.0/(i*i));
	return sqrt (6*sum);
}
////////
//Tester function to test Estimate_pi
void Estimate_pi_Tester()
{
	int n;
	cout<<"n\t\tf(n)\n";
	for(n=2; n<=20; n+=2)
		cout<<n<<"\t\t"<<Estimate_pi(n)<<endl;
}

////////////////////////////////////////////////////////////////
//Problem 6.31: Simple problem to show pass by ref
//To see the effect of pass by ref:
// - after first run, change the first param to double num1 istead of double &num1
void multiply(double &num1, double& num2, double& num3, int constant)
{
	num1 *= constant;
	num2 *= constant;
	num3 *= constant;
}
//////////////
void multiply_Tester()
{
	double a=10,b=20,c=30;
	cout<<"Before function call: a="<<a<<", b="<<b<<", c="<<c;
	multiply(a, b, c, 4);
	cout<<"After function call: a="<<a<<", b="<<b<<", c="<<c;

}

////////////////////////////////////////////////////////////////
//Problem 6.32
void solveQuadraticEquation(double a, double b, double c,
double& discriminant, double& r1, double& r2)
{
	discriminant = b*b -4*a*c;
	if(discriminant < 0 )
		return;
	if(discriminant == 0 )
		r1 = -b/(2*a);	//NOT: -b/2*a
	else
	{
		double DiscSqrt = sqrt(discriminant);
		r1 = (-b + DiscSqrt) /2*a;
		r2 = (-b - DiscSqrt) /2*a;
	}
}
////////////////////////////////////////////////////////////////
//Problem 6.43: Check substrings
int indexOf(const string& s1, const string& s2)
{
	int s1Len = s1.length(),  s2Len = s2.length();

	for(int i=0; i<s2Len; i++)
	{
		int s2Rem = s2Len - i; //remaining characters in s2
		if( s1Len > s2Rem ) //rem. chars in s2 is less than s1 characters, so s1 can't be substring of s2
			return -1; 
		int j=0, k=i;	
		while(s1[j] == s2[k])	//comparing each char in s1 with each char in s2 starting position i
		{  //If both chars are equal, compare next two chars
			j++;
			k++;
		}
		if(j == s1Len) //all characters in s1 are matched
			return i;
	}
}
////////////////////////////////////////////////////////////////
//Problem 6.44: Occurrences of a specified character
int count(const string& s, char a)
{
	int cnt=0;	//don't write in count as count is the name of the fn itself
	for(int i=0; i<s.length(); i++)
		if(s[i] == a) cnt++;
	return cnt;
}


////////////////////////////////////////////////////////////////
//Problem 6.46: swap case (upper to lower and lower to upper)
string swapCase(const string& s)
{
	string result = s;
	for(int i=0; i<s.length(); i++)
		if( islower( s[i] )) result[i] = toupper (s[i]);
		else if( isupper( s[i] )) result[i] = tolower (s[i]);
		else result[i] = s[i];

	return result;
}




