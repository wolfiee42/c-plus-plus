#include <bits/stdc++.h>
using namespace std;

int main ()
{
	// take T from input
	// run loop T times
		//  take n from input
		//  print square size of n

	int T;
	cin >> T;

	int n;
	for(int i=0;i<T;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				cout << "*";
			}
			cout << endl;
		}
		if(i<T-1)
		{
			cout << endl;

		}
	}
  return 0;
}