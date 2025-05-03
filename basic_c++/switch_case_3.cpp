#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int result = number % 2;

    switch (result)
    {
    case 0:
        cout << "Even" << endl;
        break;
    case 1:
        cout << "Odd" << endl;
        break;
    }

    return 0;
}