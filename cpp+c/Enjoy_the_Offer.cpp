#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,cnt; // a = bought, b = k pack 
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(b > a) 
        {
            cout << a << endl;
            continue;
        }
        else
        {
            cnt = (a/b) + (a%b);
            cout << cnt << endl;
        }
    }
    return 0;
}