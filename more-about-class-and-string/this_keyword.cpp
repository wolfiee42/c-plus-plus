#include <bits/stdc++.h>
using namespace std;

int main ()
{
  class Person {
  public: 
  	string name;
  	int age;

  	Person(string name, int age)
  	{
  		this->name = name;
  		this->age = age;
  	}
  };

  Person saif("saif siraj", 23);
  cout << saif.name << " " << saif.age;

  return 0;
}