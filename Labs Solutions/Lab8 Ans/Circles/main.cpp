#include <iostream>
#include "Circle.h"

using namespace std;


int main()
{

  Circle arr[10000];
  int v= 100,x,i=0, total;
  float  current=0 ;
  while (current <100){


    cout << "there is a space for another Duck\n" << endl ;
    cout << "diameter : " ;
    cin >> x ;
        arr[i].set_diameter(x) ;
        current =  arr[i].gettotalarea() ;
    if ( current<=100 )cout << current << endl;
        i++;
  }

  cout << "No other one could be added there are already  "<< i-1 << " ducks inside the pool" << endl;

    return 0;
}
