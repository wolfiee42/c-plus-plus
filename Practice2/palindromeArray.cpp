#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(int * array, int n)
{
	int flag = 1;
	int i = 0;
	int j=n-1;

	while(i < j)
	{
		// cout << array[i] << " " << array[j] << endl;
		if(array[i]!=array[j])
		{
			flag = 0;
			break;
		}
		i++;
		j--;
	}

	return flag;
}

int checkPalindrome1(int * array, int n)
{
	int flag=1;
	int j =n-1;
	for(int i=0;i<j;i++)
	{
		if(array[i]!=array[j])
		{
			flag=0;
			break;
		}
		j--;
	}
	return flag;
}

int main ()
{
  int n;
  cin >> n;

  int array[n];
  for(int i=0; i<n; i++)
  {
  	cin >> array[i];
  }
  
  int palindrome = checkPalindrome(array, n);

  if(palindrome == 1)
  {
	cout << "YES"<< endl;
  } else {
	cout << "NO"<< endl;
  }
  // cout << palindrome << endl;
  return 0;
}