#include <bits/stdc++.h>
using namespace std;

int main ()
{
  class Person{
  	public:
	  	string name;
	  	int age;

	  	Person(string nm,int ag)
	  	{
	  		name=nm;
	  		age=ag;
	  	}

	  	void greet()
	  	{
	  		cout << name << " " << age;
	  	}
  };

  Person saif("saiful islam", 23);
  saif.greet();
  return 0;
}