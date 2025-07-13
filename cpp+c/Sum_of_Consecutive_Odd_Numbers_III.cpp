#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int j = 1; j<=t; j++)
    {
        int x,y;
        cin >> x >> y;
        int sum = 0;

        int cnt = 0;
        for(int i = x; cnt != y; i++)
        {
            if(i%2 != 0)
            {
                sum += i;
                cnt++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}