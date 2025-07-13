#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,cnt = 0;
    cin >> t;
    while(t--)
    {
        cin >> a;
        if(a!=1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}