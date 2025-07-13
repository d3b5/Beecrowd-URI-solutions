#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(true)
    {
        cin >> x;
        if( x == 0)
        {
            break;
        }
        else
        {
            int sum = 0;
            int cnt = 0;
            for(int i = x; cnt != 5; i++)
            {
                if(i % 2 == 0)
                {
                    sum += i;
                    cnt++;
                }
            }
            cout<< sum << endl;
        }
    }
    return 0;
}