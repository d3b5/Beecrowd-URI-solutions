#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        {
            cout << "NULL" << endl;
        }
        else if( a[i]%2 == 0)
        {
            cout << "EVEN";
            if(a[i] > 0)
            {
                cout << " POSITIVE" << endl;
            }
            else if(a[i] < 0)
            {
                cout << " NEGATIVE" << endl;
            }
        }
        else if( a[i]%2 != 0)
        {
            cout << "ODD";
            if(a[i] > 0)
            {
                cout << " POSITIVE" << endl;
            }
            else if(a[i] < 0)
            {
                cout << " NEGATIVE" << endl;
            }
        }
    }
    return 0;
}