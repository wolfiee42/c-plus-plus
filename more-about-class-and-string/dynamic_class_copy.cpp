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

  Person * rakib = new Person("rakib under the hood of saif", 5);
  Person * sakib = new Person("sakib not under the chair of ashik", 56);


  *rakib = *sakib;
  delete sakib;
  cout << rakib->name << " " << rakib->age;
  return 0;
}