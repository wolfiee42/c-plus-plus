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

  for (int i = 0; i < t-1; i++)
  {	
  	for (int j = i+1; j < t; j++)
  	{
  		if(a[i].mark < a[j].mark)
  		{
  			swap(a[i], a[j]);
  		}
  	}
  }

  for(int i=0; i<t; i++)
  {
  	cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
  }
  return 0;
}