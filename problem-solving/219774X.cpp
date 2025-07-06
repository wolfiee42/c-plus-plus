#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, m; cin >> n >> m;
	char mat[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> mat[i][j];

	int k, l; cin >> k >>l;
	k-=1;l-=1;
	bool flag = false;
	if(mat[k-1][l-1] == '.' || mat[k-1][l] == '.' || mat[k-1][l+1] == '.' || mat[k][l-1] == '.'|| mat[k][l+1] == '.'||mat[k+1][l-1] == '.'||mat[k+1][l] == '.'||mat[k+1][l+1] == '.')
	{
		flag = true;
	}

	if(flag)
	{
		cout << "no";
	} else {
		cout << "yes";
	}
    return 0;
}