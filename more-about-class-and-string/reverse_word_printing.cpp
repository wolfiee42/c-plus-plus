#include <bits/stdc++.h>
using namespace std;

void print (stringstream & ss)
{
	string s;
	if(ss >> s)
	{
		print(ss);
		cout << s <<endl;
	}
}

int main ()
{
  string s;
  getline(cin, s);


  stringstream ss(s);
  print(ss);
  return 0;
}