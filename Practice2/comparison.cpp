#include <bits/stdc++.h>
using namespace std;


int compare(int a, char b, int c)
{
	int flag = 0;
	if(b=='<')
	{
		if(a<c)
		{
			flag = 1;
		}
	}

	if(b=='=')
		{
			if(a==c)
			{
				flag = 1;
			}
		}
	

	if(b=='>')
	{
		if(a>c)
		{
			flag = 1;
		}
	}

	return flag;
}

int main ()
{
  int a, c;
  char b;
  cin >> a >> b >> c;

  int result = compare(a, b, c);

	if(result == 1)
	{
		cout << "Right" << endl;
	} else { 
		cout << "Wrong" << endl;
	}

  return 0;
}