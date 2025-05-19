#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	getline(cin, s);
	stringstream ss(s);

	string word;
	int count =0;
	while (ss >> word)
	{
		if((word[0] >= 'A' &&word[0] <= 'Z') || (word[0] >= 'a' && word[0] <= 'z'))
		{
			count++;
		}
		
	}

	cout << count << endl;
	return 0;
}