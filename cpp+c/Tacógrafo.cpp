#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        sum += a*b;
    }
    cout << sum << endl;
    return 0;
}