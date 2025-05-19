#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int num = 1;
	for(int i=2;i<=n;i++)
	{
		num*=i;
	}
	return num;
}

int main ()
{

  int t;
  cin >> t;

  cin.ignore();
  for(int i = 0; i<t ; i++)
  {
  	string s;
  	getline(cin, s);
  	
  	stringstream ss(s);

  	int count = 0;

  	string word;

  	map<string, int> duplicate;

  	while(ss >> word)
  	{
  		count++;
  		duplicate[word]++;
  	}

  	int div = 1; 
  	for(auto x:duplicate)
  	{
  		div*=factorial(x.second);
  	}

  	int probability = factorial(count);

  	cout << "1/"<< probability/div << endl;
  }	
  return 0;
}

