#include <iostream>
#include "MyInteger.h"
#include <string>

using namespace std;

// random test for functions

int main()
{   int y ;
    string z = "123" ;
    MyInteger hi(5), hi2(3);
    bool x = hi.isOdd() ;
    cout << MyInteger::isEven(6) << endl;
    cout << hi.equals(5) << endl;
    cout << hi.equals(hi2.value) << endl;
    cout << MyInteger::parseInt(z) << endl;
    cout << hi.isPrime() << endl;
    cout << MyInteger::isPrime(9)<< endl;
    cout << MyInteger::isPrime(hi2) << endl;
    return 0;
}
