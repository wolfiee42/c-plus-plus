#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int t; cin >> t;

  for(int i=0; i<t; i++)
  {
  	cin.ignore();
  	string s; getline(cin, s);
  	char l; cin >> l;

  	// solution 1
  	int len = s.size();
  	int count = 0;

  	for(int j=0; j<len; j++)
  	{
  		if(s[j] == l)
  		{
  			count++;
  		}
  	}

  	// solution 2
  	int cnt = count(s.begin(), s.end(), l);
  	
  	if(count > 0)
  	{
  		cout << "Occurrence of '" << l <<"' in '" << s << "' = " << count << endl;
  	}
  	else
  	{
  		cout  << "'" << l << "' is not present" << endl;
  	}
  	
  }
  return 0;
}