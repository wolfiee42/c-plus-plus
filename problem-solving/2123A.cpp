#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	for(int i=0;i<n;i++)
	{
		int k;cin>>k;
		if(k==0) 
		{
			cout<< "Alice" << endl;
			return 0;
		}
		if(k%4==0)cout << "Bob"<<endl;
		else cout << "Alice" <<endl;
	}
    return 0;
}