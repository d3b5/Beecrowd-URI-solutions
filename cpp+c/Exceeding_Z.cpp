#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z;
    cin >> x;

    while(true)
    {
        cin >> z;
        if(z > x)
        {
            break;
        }
    }
    int cnt = 0;
    int ans = 0;
    for(int i = x; z > ans; i++)
    {
        ans +=i;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}