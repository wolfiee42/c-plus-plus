#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		int sumA=0;
		int sumB=0;

		sumA = s[0] + s[1] + s[2];
		sumB = s[3] + s[4] + s[5];

		if(sumA == sumB)
		{
			cout << "YES" <<endl;
		} 
		else 
		{
			cout << "NO" <<endl;
		}
	}
	return 0;
}