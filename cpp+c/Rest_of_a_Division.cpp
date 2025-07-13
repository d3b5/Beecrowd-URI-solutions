#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    int max,min;
    if(x>y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }

    for( int i = min+1 ; i<max; i++)
    {
        if(i % 5 == 2 || i % 5 == 3 )
        {
            cout << i << endl;
        }
    }
    return 0;
}