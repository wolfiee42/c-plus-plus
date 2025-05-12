#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int T;
	cin >> T;

	int number;
	int arr[5];
	for(int i=0;i<T;i++)
	{
		cin >> number;
		for(int j=4;j >=0;j--)
		{
			int num = number;
			int x = num % 10;
			number = num / 10;
			arr[j] = x;
		}

		int summaton = arr[4]+arr[0];
		cout << "Sum" << " = " << summaton<<endl;
	}


  return 0;
}