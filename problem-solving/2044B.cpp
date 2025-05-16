#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  string s;
  for(int i = 0; i<n; i++)
  {
  	cin >> s;
  	int length= s.size();

  	for(int j=length-1; j>=0; j--)
  	{
  		if(s[j] == 'p')
  		{
  			s[j] = 'q';
  		} 
  		else if(s[j] =='q' )
  		{
  			s[j] = 'p';
  		}
  		cout << s[j];
  	}
  	cout << endl;
  }
  return 0;
}

