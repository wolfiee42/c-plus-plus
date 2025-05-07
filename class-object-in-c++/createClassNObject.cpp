#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student saif;
    Student ashik;

    saif.roll = 29;
    saif.cls = 9;
    saif.section = 'B';
    char nm[100] = "Saif Siraj";
    strcpy(saif.name, nm);

    ashik.roll = 2;
    ashik.cls = 7;
    ashik.section = 'A';
    char nm2[100] = "Ashik Siraj";
    strcpy(ashik.name, nm2);

    cout << ashik.cls << endl;
    return 0;
}