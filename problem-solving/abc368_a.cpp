#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, m;
  cin >> n >> m;

  int arr[n];
  for(int i=0;i<n;i++)
  {
  	cin >> arr[i];
  }

  for(int j=n-m;j<n;j++)
  {
  	cout << arr[j] << " ";
  }
  for(int k = 0; k<n-m;k++)
  {
  	cout << arr[k] << " ";
  }

  return 0;
}