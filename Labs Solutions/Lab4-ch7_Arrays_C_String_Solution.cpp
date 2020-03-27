#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//Prob 7.0: (not in the book) Reverse order
//Write a program that reads at most 100 integer values (until 0 is entered)
//then prints the values in a reverse order
void P()
{
	int values[100];
	int n=0;
	cout<<"Enter int values, 0 to exit:";
	
	cin>>values[n];
	while(values[n])
		cin>>values[++n];		//equivalent to: n++; then cin>>values[n];

	cout<<"Values is reverse order are:";
	for(int i=n-1; i>=0; i--)
		cout<<values[i]<<" ";

}
/////////////////////////////////////////////////////////////////////////////
//for problem 7.1
char GradeToLetter(int grade, int best)
{	
	if(grade>= best -10)
		return 'A';
	if(grade>= best -20)
		return 'B';
	if(grade>= best -30)
		return 'C';
	return 'D';
}

//Prob 7.1: Assign Grades
void Prob_7_1()
{
	int scores[10];	//prepare array of scores (assume max no. of scores is 10)
	cout<<"enter the number of students:";
	int n;
	cin>>n;
	
	//reading scores
	cout<<"Enter "<<n<<" scores:";
	for(int i=0; i<n; i++)
		cin>>scores[i];

	//calc best score:
	int best = scores[0];
	for(int i=1; i<n; i++)
		if(scores[i] > best)
			best = scores[i];

	//Print grades
	for(int i=0; i<n; i++)
		cout<<"\nStudent "<<i<<" score is "<<scores[i]<<" and grade is "<<GradeToLetter(scores[i],best);

}
//////////////////////////////////////////////////////////////////////////////
//Prob 7.3: Count Occurance of numbers 
void Prob_7_3()
{
	const int maxVal = 101;
	int count[maxVal];	//array of counts
	for(int i=0; i<maxVal; i++)
		count[i]=0;

	cout<<"Enter integers between 1 and 100:";
	cin>>value;
	while(value)
	{
		count[value]++;
		cin>>value; 
	}
	//count occurance of each value from 1 to 100
	for(int i=1; i<maxVal; i++)
	{
		if(count[i])
			cout<<i<<" occurs "<<count[i]<<" time"<<(count[i]>1?"s":"")<<endl;
	}
}
///////////////////////////////////////////////////////////////////////
//Problem 7.8: Product
int Product( const int arr[], int size)
{
	int result = 1;
	for(int i=0; i<size; i++)
		result *= arr[i];
	
	return result;
	
}

double Product( const double arr[], int size)
{
	double result = 1;
	for(int i=0; i<size; i++)
		result *= arr[i];
	
	return result;
	
}

void Product_Tester()
{
	int B[100];
	double X[90];
	int n;
	cout<<"enter number of values:";
	cin>>n;
		
	cout<<"enter "<<n<<" values:";
	for(int i=0; i<n; i++)
		cin>>B[i];
	
	int prod = Product(B, n);
	cout<<prod;
	
	//OR
	cout<<Product(B, n);

	//Try to do the same with array X (array of double)
}
///////////////////////////////////////////////////////////////////////////////
//Prob. 7.24: Pattern recognition: consecutive four equal numbers
bool isConsecutiveFour(const int values[], int size)
{
	int i=0;
	while(i<size-3)
	{
		int j=i+1;
		while(j<i+4 && A[i] == A[j])
			j++;
	
		if(j == i+4) return true;
		
		i = j;
	}	
	return false;
}

///////////////////////////////////////////////////////////////////////////////
//Prob 7.27: Sorted?
bool isSorted(const int list[], int size)
{
	for(int i=0; i<size-1; i++)
		if(list[i] > list[i+1])
			return false;
	return true;
}

void isSorted_Tester()	//tester function for isSorted function
{
	int n;
	int L[80];	//max size is 80
	cout<<"Enter list:";
	cin>>n;
	for(int i=0; i<n;i++)
		cin>>L[i];
	cout<<"The list is ";
	if(isSorted(L,n))
		cout<<"already sorted";
	else
		cout<<"not sorted";

}
///////////////////////////////////////////////////////////////////////
//Prob 7.30: Replace:string with underscore
void Replace(char str[])
{
	for(int i=0; i<strlen(str); i++)
		if(str[i] ==' ')
			str[i]= '_';	
}
//tester for th above function
void Replace_Tester()
{
	char s[100];
	cout<<"enter a string:";
	cin.getline(s,100);
	Replace(s);
	cout<<"String after replacement: "<<s;
}
///////////////////////////////////////////////////////////////////////
//Prob 7.31 Common elements
//It is required to write a program but to show how a function can work on 2 arrays
//I will implementing it as a function
//First implemenataion: printing the common elements
//the function is generic for any arrays with arbitrary sizes
void PrintCommon(int arr1[], int size1, int arr2[],  int size2)
{
	cout<<"The common elements are:";
	for(int i=0; i<size1; i++)	//for each element is arr1
		for(int j=0; j<size2; j++) //look it up in arr2
			if(arr1[i] == arr2[j])
			{
				cout<<arr1[i]<<" ";
				break;	//no need for more lookup in arr2 for this item 
			}
	//Note that if arr1 contains duplicate value, they will be printed twice
	//Think about how to sove this problem
}

void PrintCommon_Tester()
{
	int n1, n2, List1[100], List2[100];
	cout<<"enter List1 (size then elements):";
	cin>>n1;
	for(int i=0; i<n1; i++)
		cin>>List1[i];
	cout<<"enter List1 (size then elements):";
	cin>>n2;
	for(int i=0; i<n2; i++)
		cin>>List2[i];
	PrintCommon(List1, n1, List2, n2);
}

//2nd implemenataion: return the common elements in a third array
//the function is generic for any arrays with arbitrary sizes
void getCommon(int arr1[], int size1, int arr2[],  int size2, int arr3[], int &size3)
{
	size3 = 0;
	for(int i=0; i<size1; i++)	//for each element is arr1
		for(int j=0; j<size2; j++) //look it up in arr2
			if(arr1[i] == arr2[j])
			{
				arr3[size3]=arr1[i];
				size3++;
				break;	//no need for more lookup in arr2 for this item 
			}
//Note that if arr1 contains duplicate values, they will be stored twice in arr3
//Think about how to sove this problem	
}
void getCommon_Tester()
{
	int n1, n2, List1[100], List2[100], List3[100], n3;
	cout<<"enter List1 (size then elements):";
	cin>>n1;
	for(int i=0; i<n1; i++)
		cin>>List1[i];
	cout<<"enter List1 (size then elements):";
	cin>>n2;
	for(int i=0; i<n2; i++)
		cin>>List2[i];
	getCommon(List1, n1, List2,  n2, List3, n3);
	cout<<"The common elements are:";
	for(int i=0; i<n3; i++)
		cout<<List3[i]<<" ";


}
