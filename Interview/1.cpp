#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arrLength;
    cin >> arrLength;

    int subOutput;
    cin >> subOutput;

    int arr[arrLength];
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }

    int prefix_arr[arrLength];
    for (int i = 0; i < arrLength; i++)
    {
        if (i == 0)
        {
            prefix_arr[i] = arr[i];
        }
        else
        {
            prefix_arr[i] = arr[i] + prefix_arr[i - 1];
        }
    }

    for (int i = 0; i < subOutput; i++)
    {
        int x, y;
        cin >> x >> y;

        double total_number;
        if (x - 1 == 0)
        {
            total_number = prefix_arr[y - 1];
        }
        else
        {
            total_number = prefix_arr[y - 1] - prefix_arr[x - 2];
        }

        double arrNum = (y * 1.00 - x * 1.00) + 1.00;
        double avgTempNum = total_number / arrNum;

        cout << fixed << setprecision(2) << avgTempNum << endl;
    }

    return 0;
}