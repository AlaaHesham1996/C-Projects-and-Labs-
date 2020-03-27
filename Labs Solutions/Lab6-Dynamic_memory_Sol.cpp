#include <iostream>
using namespace std;

//This function is not required but we need it to print arrays when testing other functions
void PrintArray(double *Arr, int size)
{
	cout<<endl;
	for(int i=0; i<size; i++)
		cout<<Arr[i]<<"  ";
	cout<<endl;
}

//////////////////////////////////////////////////////////////////////////
//Problem 1
int NegateArray(double *Arr, int size)
{
	int count=0;
	for(int i=0; i<size; i++)
		if(Arr[i] == 0) count++ ;
		else  Arr[i] = -Arr[i];

	return count;
}

//////////////////////////////////////////////////////////////////////////
//Problem 2
double* DuplicateArray(double *Arr, int size)
{
	double *Res = new double[size];
	for(int i=0; i<size; i++)
		Res[i] = 2* Arr[i];	
	return Res;
}

//////////////////////////////////////////////////////////////////////////
//Problem 3
//Here size is passed by ref as it will be changed
//Also, the array pointer is passed by ref becasue it will be updated
// to hold a new memory
void ReplicateMe(double * &Arr, int &size)
{	
	double *tmp = new double[2*size];
	for(int i=0, j=0; i<size; i++, j+=2)
		tmp[j] = tmp[j+1] = Arr[i];	//Copy data to the new array
	
	delete []Arr;	//delete orignal data
	Arr = tmp;		//Point to the new data
	size *=2;	//multiply size by 2
}


//////////////////////////////////////////////////////////////////////////
//Problem 4
//A function to test ReplicateMe function
//This test function should be written as a program (main)  
void ReplicateMe_Test()
{
	int N;
	cout<<"\n\nTesting ReplicateMe function...\nPleas enter no. of elements:";
	cin>>N;
	double *A = new double[N];
	for(int i=0; i<N; i++)
	{
		cout<<"Enter value #"<<i+1<<" :";
		cin>>A[i];
	}
	PrintArray(A, N);
	ReplicateMe(A, N);
	cout<<"\nAfter ReplicateMe...";
	PrintArray(A, N);
	delete []A;
}

//Problem 5
//I have updated the function prototype as we don't need to pass the size of the string
//as we can get it using strlen built in function
void RemoveChar(char *&S, char X)
{
	int Len = strlen(S);	//get length of input string S

	//Now lets count the no. of occurrances of char X
	int count=0;
	for(int i=0; i<Len; i++)
		if(S[i] == X) count++;

	if(count == 0) return;	// char X is not found in string S
	if(count == Len) { S=NULL; return; }

	int Remaining_characters = Len - count;
	char* tmp = new char[Remaining_characters + 1];	//+1 for the null terminating character
	int j=0;
	for(int i=0; i<Len; i++)
		if(S[i] != X) tmp[j++] = S[i];	//copy other characters

	tmp[j] = '\0';	//place the null char at the end of string tmp
	delete []S;
	S = tmp;
}




int main()
{
	int N = 5;
	double A[]={1, 0, 5, 33, -45};
	PrintArray(A, N);
	NegateArray(A, N);
	PrintArray(A, N);
	double *B = DuplicateArray(A, N);
	PrintArray(B, N);
	
	ReplicateMe_Test();

	cout<<"\n\nTesting RemoveChar fn...";
	cout<<"\nEnter a string (with No spaces):";
	char inputString[100];
	cin>>inputString;
	cout<<"\nEnter a char to remove:";
	char ch;
	cin>>ch;

	int InpStrLen = strlen(inputString);	//get length of input string
	char *str = new char[InpStrLen+1];		//prepare a dynamically allocated string 
	strcpy(str, inputString);		//Copy inpout string to str
	RemoveChar(str, ch);
	cout<<"\n\nThe string after removing char '"<<ch<<"' becomes: ";
	if(str)	//if str is not NULL
		cout<<str;
	else
		cout<<"<EMPTY STRING>";

	cout<<endl;
	return 0;
}




