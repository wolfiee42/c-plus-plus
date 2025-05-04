#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int m;
    for(int i =0;i<n;i++)
    {
        cin >> m;
        cout << "Case ";
        for(int j=1;j<=m;j++)
        {
            if(j==1)
            {
                 cout << i+1 << ": " ;
            }
            if(m%j==0)
            {
               cout << j << " ";
            }
        }
        cout << endl;
    }
}