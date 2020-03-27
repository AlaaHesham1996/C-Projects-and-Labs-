#include <iostream>
#include <algorithm>

using namespace std;


bool isAnagram(const string& s1, const string& s2){

      string a=s1, b=s2;

      sort(a.begin(), a.end());
      sort(b.begin(), b.end());

     if (a.compare(b)==0) return 1 ;

return 0;
}


int main()
{
    string s1,s2;
    cout << "Enter a string s1:" << endl;
    cin >> s1 ;
    cout << "Enter a string s2:" << endl;
    cin >> s2 ;
    bool check = isAnagram(s1,s2) ;
    cout << s1 << " and "<< s2 << " " ;
    cout << (check ? "are anagrams" : "are not anagrams");
    return 0;
}
