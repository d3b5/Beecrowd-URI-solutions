#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ans = 0;
    cin >> n;
    while(n--)
    {
        ans += 6.00;
        ans = 1/ans;
    }
    ans += 3;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}