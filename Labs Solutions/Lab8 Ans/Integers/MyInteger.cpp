#include "MyInteger.h"
#include <string.h>

    bool MyInteger::use = 0 ;

    // general functions to be used in all class functions :
    bool even(int x){

    if (x%2 == 0 )  return 1 ;

        else    return 0;
    }

    bool odd(int x){

    if (x%2 == 0 )  return 0 ;

        else    return 1;
    }

    bool prime(int x){

    bool flag=1;
    for ( int i=2; i<=x/2; i++){
    if (x%i==0) {
    flag=0;
    break;
    }
    }
    return flag ;
    }

    MyInteger::MyInteger(int val){

        value = val ;
    }
    int MyInteger::getvalue() const {

        return value ;
    }
    bool MyInteger::isEven()const{

        return even(value);
    }

    bool MyInteger::isOdd() const{

        return  odd(value);
    }

    bool MyInteger::isPrime() const{

      return  prime(value);
    }

    bool MyInteger::isEven(int val){

      return even(val);
    }
     bool MyInteger::isOdd(int val) {

      return odd(val);
    }
     bool MyInteger::isPrime(int val) {

     return  prime(val);
     }
    bool MyInteger::isEven(const MyInteger& x){

    return x.isEven() ;
    }

     bool MyInteger::isOdd(const MyInteger& x) {

    return x.isOdd() ;

    }
    bool MyInteger::isPrime(const MyInteger& x) {

     return x.isPrime();
    }
    bool MyInteger::equals(int val) const{

    if (value == val ) return 1 ;

    return 0 ;

    }
    bool MyInteger::equals(const MyInteger& x) const{

   if (value == x.value)  return 1 ;

   return 0 ;
    }


   int MyInteger::parseInt(const string& val){

     return stoi(val) ; // requires c+11 or higher

    }

