#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    long long int ans;
    cin >> t;
    while(t--)
    {
        cin >> a;
        ans = pow(2,a)-1;
        cout << ans << endl;
    }
    return 0;
}