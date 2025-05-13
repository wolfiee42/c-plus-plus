#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string s;
  cin >> s;


  // iterator

  // system 01 
  // cout << s <<endl;
  // for(int i=0;i<s.size();i++)
  // {
  // 	cout << s[i] << endl;
  // }


  // system 02 *****
  // string::iterator it;
  // for(it=s.begin(); it<s.end(); it++)
  // {
  // 	cout << *it << endl;
  // }


  // system 03 *****
  for(auto it=s.begin(); it<s.end(); it++)
  {
  	cout << *it << endl;
  }


  // cout << *s.begin() <<endl;
  // cout << *(s.end()-1) <<endl;

  return 0;
}