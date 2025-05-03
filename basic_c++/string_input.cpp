#include <iostream>
using namespace std;
int main()
{
    char s[100];
    // cin >> s;

    // to get the full sentence even with space, we will modify cin.
    cin.getline(s, 100);
    cout << s << endl;
}