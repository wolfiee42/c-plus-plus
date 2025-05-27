#include <bits/stdc++.h>
using namespace std;


class Person{
	public:
		string name;
		int roll;
		int mark;
};

bool cmp (Person a, Person b)
{
  if(a.roll < b.roll) return true;
  else return false;
}

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

  sort(a, a+t, cmp);

  for(int i=0; i<t; i++)
  {
  	cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
  }
  return 0;
}