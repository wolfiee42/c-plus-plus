#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int a[5];
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *q = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << " ";
    }
    return 0;
}