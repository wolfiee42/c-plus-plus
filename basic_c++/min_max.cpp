#include <iostream>
#include <algorithm>
using namespace std;

// minNum & maxNum like functions are already exist in c++ header files
int minNum(int i, int j)
{
    if (i > j)
        return j;
    else if (j > i)
        return i;
    else
        return i;
}

int maxNum(int i, int j)
{
    if (i > j)
        return i;
    else if (j > i)
        return j;
    else
        return i;
}

int main()
{
    int a, b;
    cin >> a >> b;
    // int mn = minNum(a, b);
    // int mx = maxNum(a, b);
    // instead we using some built in function
    int mn = min(a, b);
    int mx = max(a, b);
    cout << "Minimum Number: " << mn << endl
         << "Maximum Number: " << mx << endl;
    return 0;
}