#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int t; cin >> t;
  for(int i=0; i<t; i++)
  {
  	int k; cin>>k;
  	int l = sqrt(k);	

  	if(l*l == k)
  	{
  		if(k==0)
  		{
  			cout << 0 << " " << 0 << endl;
  		}
  		else if(l%2==0)
  		{
  			cout << (l/2)-1 << " " << (l/2)+1 << endl;
  		} else {
  			cout << l/2 << " " << l/2+1 << endl;
  		}
  	} else {
  		cout << -1 << endl;
  	}
  } 
  return 0;
}