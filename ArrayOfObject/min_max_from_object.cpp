#include <bits/stdc++.h>
using namespace std;

class Person{
	public:
		string name;
		int roll;
		int mark;
};
int main ()
{
  int t;
  cin >> t;
  cin.ignore();

  Person a[t];
  for(int i=0; i<t; i++)
  	{	
  		getline(cin, a[i].name);
  		cin >> a[i].roll >> a[i].mark;
  		cin.ignore();
  	}

  	Person mx;
  	Person mn;
  	mx.mark = INT_MIN;
  	mn.roll = INT_MAX;
	for(int i=0;i<t; i++)
	{
		if(a[i].mark > mx.mark)
		{
			mx = a[i];
		}
	}
  	cin.ignore();
	for(int i=0; i<t; i++)
	{
		if(mn.roll>a[i].roll)
		{
			mn = a[i];
		}
	}

	cout << mx.name << " " << mx.roll << " " << mx.mark << endl;
	cout << mn.name << " " << mn.roll << " " << mn.mark << endl;

  return 0;
}