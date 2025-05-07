#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
	int n, m;
	cin >> n >>m;

ll a, b, c;
a= n+m;
b= 1ll*n*m;
c= n-m;
	cout << n << " + " << m << " = " << a << endl;
	cout << n << " * " << m << " = " << b << endl;
	cout << n << " - " << m << " = " << c;
  return 0;
}

