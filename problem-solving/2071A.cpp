#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	for(int i=0;i<n;i++)
	{
		int match; cin>>match;

		if(match == 1) {
			cout << "Yes" <<endl;
		}
		else if(match%3 == 1) cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
    return 0;
}