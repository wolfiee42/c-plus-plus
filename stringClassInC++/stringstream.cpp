#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string a;
  getline(cin, a);
// cout << a;

  stringstream ss;
  ss << a;
  string word;

  int count =0;
  while(ss >> word)
  {
  	cout << word << endl;
  	count++;
  }

  cout << count << endl;
  return 0;
}