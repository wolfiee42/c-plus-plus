#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string a = "Hello";
  string b = "World";

  // concatination
  a+=b; // 1
  a.append(b); // 2


  a.push_back('a');
  a.pop_back();
  a.pop_back();

  cout << a << endl;
  cout << b << endl;
  return 0;
}