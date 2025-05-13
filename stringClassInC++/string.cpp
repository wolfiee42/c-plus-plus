#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string a;
  string b;

  cin >> b;
  cout << b <<endl;
  b.resize(5);
  cout << b <<endl;
  b.resize(8, 'X');
  cout << b <<endl;


  // cout << a.max_size() <<endl;
  cout << a.size() << endl;
  a="wolfie";
  cout << a.size() << endl;

  if(a.empty()) cout << "Empty" <<endl;
  else cout << "Not Empty" << endl;

  a.clear();

  cout << a.size() << endl;

  if(a.empty()) cout << "Empty" <<endl;
  else cout << "Not Empty" << endl;

  // cout << a.max_size() <<endl;

  return 0;
}