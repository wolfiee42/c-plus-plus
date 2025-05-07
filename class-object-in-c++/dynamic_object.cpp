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
    char nm[100] = "Ashik";
    char nm2[100] = "Saif";
    Student Ashik(43, 3, 'A', nm); // static
    Student *Saif = new Student(22, 6, 'D', nm2);

    // normal
    cout << (*Saif).name << endl;
    cout << (*Saif).roll << endl;
    cout << (*Saif).cls << endl;
    cout << (*Saif).section << endl;

    // dynamic
    cout << Saif->name << endl;
    cout << Saif->cls << endl;
    cout << Saif->roll << endl;
    cout << Saif->section << endl;

    // delete an dynamic object
    delete Saif;
    cout << Saif->name << endl;
    cout << Saif->cls << endl;
    cout << Saif->roll << endl;
    cout << Saif->section << endl;

    return 0;
}