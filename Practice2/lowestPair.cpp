#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  for(int i =0;i<n;i++)
  {
  	int t;
  	cin >> t;

  	int arr[t];
  	for(int j=0; j<t; j++)
  	{
  		cin >> arr[j];
  	}
  
  	int lowestNumber = 0;
  	int sum = 0;

  	for(int k=0; k<t-1; k++)
  	{
  		for(int l=k+1; l<t; l++)
  		{
  			sum = arr[k]+arr[l]+(l+1)-(k+1);
  			// cout << arr[k] << " " << arr[l] << " " << l+1 << " " << k+1 << " " << sum <<endl;
  			if((k==0 && l==1) || sum < lowestNumber)
  			{
  				lowestNumber = sum;
  			} 
  		}
  	}

  	cout << lowestNumber <<endl;
  }
  return 0;
}