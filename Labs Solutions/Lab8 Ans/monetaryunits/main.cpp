#include <iostream>

using namespace std;

int main()
{
    string moneyyy, dollars, cents ;
    cout <<"Enter the amount : " ;
    cin >> moneyyy;
    int point = moneyyy.find('.') ;
    dollars.assign(moneyyy,0,point);
    cents.assign(moneyyy,point+1,moneyyy.length()-point) ;

    cout << "you have "<< dollars <<" dollars and " << cents << " cents" << endl;
    return 0;
}
