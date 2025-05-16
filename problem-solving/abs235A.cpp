#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n;
  cin >> n;

  int d;
  int a, b, c;

  c=n%10;
  d=n/10;

  b=d%10;
  d/=10;

  a=d%10;

int abc, bca, cab;

  abc = a*100+b*10+c;
  bca = b*100+c*10+a;
  cab = c*100+a*10+b;

  cout << abc+bca+cab << endl;

  return 0;
}