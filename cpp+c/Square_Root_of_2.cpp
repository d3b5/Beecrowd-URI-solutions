#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ans = 0;
    cin >> n;
    if(n!=0)
    {
        while(n--)
        {
            ans += 2.00;
            ans = 1/ans;
        }
    }
    ans += 1;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}