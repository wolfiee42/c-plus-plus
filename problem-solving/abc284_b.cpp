#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int t;
  cin >> t;

  for(int i=0;i<t;i++)
  {
  	int n;
  	cin >> n;

  	int count = 0;
  	int arr[n];

  	for(int j=0;j<n;j++)
  	{
  		cin >> arr[j];
  	}

  	for(int k=0;k<n;k++)
  	{
  		if(arr[k]%2!=0) count++;
  	}

  	cout << count << endl;
  }
  return 0;
}