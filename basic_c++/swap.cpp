#include <iostream>
#include <utility>
using namespace std;

void swapNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a, b;
    cin >> a >> b;

    // using built in swap funciton
    // swapNumbers(&a, &b);
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}
