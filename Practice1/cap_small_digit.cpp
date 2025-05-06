#include <bits/stdc++.h>
using namespace std;


void data_type(char x)
{
	if(x >= 'A' && x <= 'Z')
	{
		cout<<"ALPHA" <<endl;
		cout << "IS CAPITAL";

		return;
	}
	if(x >= 'a' && x <= 'z')
	{
		cout<<"ALPHA" <<endl;
		cout << "IS SMALL";
		return;
	}
	if(x >= '0' && x <= '9')
	{
		cout<<"IS DIGIT";
		return;
	}

}

int main ()
{

	char n;
	cin >> n;

	data_type(n);
  
    return 0;
}