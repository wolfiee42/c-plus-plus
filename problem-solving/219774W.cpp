#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m; cin >> n >>m;
	int mat[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> mat[i][j];

	for(int i=0; i<n; i++)
	{
		int k=0, l=m-1;
		while(k<l)
		{
			swap(mat[i][k], mat[i][l]);
			k++;l--;
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}