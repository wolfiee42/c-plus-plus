#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >>n;
	int mat[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> mat[i][j];


	int mainDiagonal=0;
	int secondaryDiagonal=0;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i == j)
			{
				mainDiagonal += mat[i][j];
			}
			if(i+j == n-1)
			{
				secondaryDiagonal += mat[i][j];
			}
		}
	}

	int dif = mainDiagonal - secondaryDiagonal;
	if(dif < 0)
	{
		dif = dif * -1;
	}
	cout << dif;
    return 0;
}