#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int j = 1;

    for(int i = 1; i <= x; i++)
    {
        if ( j % 4 != 0)
        {
            cout << j << " " << j+1 << " " << j+2 << " " <<  "PUM" << endl;
        }
        j += 4;

    }
    return 0;
}