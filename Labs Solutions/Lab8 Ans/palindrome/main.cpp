#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(const string& s){

    int sizee = s.length() ;
    string s1=s;
    for (int i=0;i< (sizee/2);i++){

       swap(s1[i],s1[(sizee-1+i)]);
       // this is to try string functions, however you can directly compare and decide at the same time
      //  if (s[i] !=s[(sizee-1+i)]) return 0; and at the end return 1;
    }
    if (s1.compare(s)== 0) return 1;

    return 0;
}

int main()
{   string x;
    cout << "Enter a string s: " ;
    cin >> x;
    bool y = isPalindrome(x);
    cout << x << (y ? " is a palindrome" : " is not a palindrome") << endl;

    return 0;
}
