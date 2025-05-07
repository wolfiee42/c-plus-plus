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

int main()
{
    Student saif(42, 9, 'B', "Saif Siraj");
    Student ashik(11, 6, 'A', "Ashik Siraj");

    cout << ashik.name << endl;
    cout << saif.name << endl;
    return 0;
}