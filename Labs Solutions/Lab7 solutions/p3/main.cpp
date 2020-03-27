#include<iostream>
#include"Array.h"

using namespace std;

int main(){
	Array arr(5);

	if (arr.setValue(3, 10) == 0) cout << "wrong value or index" << endl;
	else cout << "set OK" << endl;

	if (arr.setValue(5, 15) == 0) cout << "wrong value or index" << endl;
	else cout << "set OK" << endl;

	if (arr.getValue(3) == -1) cout << "wrong value or index" << endl;
	else cout << arr.getValue(3) << endl;

	if (arr.getValue(5) == -1) cout << "wrong value or index" << endl;
	else cout << arr.getValue(5) << endl;

	int x;

	x = arr.pop();
	if (x == -1) cout << "Stack is EMPTY!!!" << endl;
	else cout << x << endl;

	for (int i = 1; i < 7; ++i){
		if (arr.pushBack(i) == 0) cout << "Stack is FULL!!!" << endl;
		else cout << "push OK" << endl;
	}

	for (int i = 1; i < 7; ++i){
		x = arr.pop();
		if (x == -1) cout << "Stack is EMPTY!!!" << endl;
		else cout << x << endl;
	}
}