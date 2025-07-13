#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    int min,max;
    if(x > y)
    {
        max = x;
        min =y;
    }
    else
    {
        max = y;
        min = x;
    }

    int sum = 0;
    for(int i= min; i <= max; i++)
    {
        if(i % 13 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}