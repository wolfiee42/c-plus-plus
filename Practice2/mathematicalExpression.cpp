#include <bits/stdc++.h>
using namespace std;


int calculate(int a, char d, int b, char e, int c)
{
	int result = 1;
	if(d == '+')
	{
		if(a + b != c)
		{
			result = a+b;
		}
	}
	if(d == '-')
	{
		if(a - b != c)
		{
			result = a-b;
		}
	}
	if(d == '*')
	{
		if(a * b != c)
		{
			result = a*b;
		}
	}
	return result;
}

int main ()
{
  int a, b, c;
  char d, e;

  cin >> a >> d >> b >> e >> c;
 
 int result = calculate(a, d, b, e, c);
 if(result != 1)
 {
 	cout << result << endl;
 } 
 else 
 {
 	cout << "Yes" << endl;
 }

  return 0;
}