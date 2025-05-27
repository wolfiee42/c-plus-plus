#include <bits/stdc++.h>
using namespace std;

void print(char O)
{
	cout << O << " ";
}

int main ()
{
  int t; cin >> t;

 
  for(int i=0; i<t; i++)
  {
  	int n;
  	char o;

  	cin >> n >> o;
  	for(int j=0; j<n ; j++)
  	{
  		print(o);
  	}
  	cout << endl;
  }
  return 0;
}