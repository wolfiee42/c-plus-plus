#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin>>n;

	for(int k=0;k<n;k++)
	{
		int arr[4];
		for(int i=0;i<4;i++) cin>>arr[i];

		int flag=0;
		for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<4;j++)
			{
				if(arr[i] != arr[j])
				{
					flag = 1;
				}
			}	
		}

		if(flag == 1) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}