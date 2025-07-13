#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    int min, max;

    if(x >= y)
    {
        max = x;
        min = y;
    }
    else
    {
        max = y;
        min = x;
    }

    int sum = 0;
    for(int i = min+1; i <max; i++)
    {
        if(i % 2 != 0 )
        {
            sum += i;
            //cout << i << endl;
        }
    }
    cout << sum << endl;
    return 0;
}