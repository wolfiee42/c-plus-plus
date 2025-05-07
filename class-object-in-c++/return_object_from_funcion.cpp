#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int c, char s, char *n)
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

Student fun()
{
    Student ashik(11, 6, 'A', "Ashik Siraj");
    return ashik;
}

int main()
{
    Student st1 = fun();
    cout << st1.name << endl;
    cout << st1.roll << endl;
    cout << st1.section << endl;
    cout << st1.cls << endl;
    return 0;
}