#include <bits/stdc++.h>
using namespace std;


class Student{
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
  Student a[t];
  for(int i=0 ; i<t; i++)
  {
  	getline(cin, a[i].name);
  	cin >> a[i].roll >> a[i].mark;
  	cin.ignore();
  }

  for(int i=0 ; i<t; i++)
  {
  	cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
  }
  return 0;
}