#include <iostream>

using namespace std;

int main()
{
    string GeneArr[5000],x, printer ;
    int sizee=x.length(), current=0,y=0,z=0, counter=0;

    cout << "Enter a genome string: " << endl; ;
    cin >> x ;

    do{

    y=x.find("ATG",y)+ 2 ;

    z= min(min(x.find("TAG",z), x.find("TAA",z)),x.find("TGA",z))+ 2;

    GeneArr[counter]= printer.assign(x,y+1,z-y-3);

    counter ++ ;
    }while( y > 1 && z > 1 );

     if (counter ==1) cout << "no gene is found" << endl;
     else  for (int i=0; i<counter-1;i++){

        cout << GeneArr[i] << endl;
      }

    return 0;
}
