#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <string>

using namespace std ;

class MyInteger {

    public:
    int value ;
    MyInteger(int val);

    int getvalue() const ;

    bool isPrime() const, isOdd() const, isEven()const;

    static bool isEven(int val), isPrime(int val), isOdd(int val);

    static bool isEven(const MyInteger& x ), isPrime(const MyInteger& x),isOdd(const MyInteger& x);

    bool equals(int val) const ,equals(const MyInteger& x) const;

    static int parseInt(const string& val);


    private :



    static bool use ;


};

bool prime(int x),  even(int x), odd(int x);


#endif // MYINTEGER_H
