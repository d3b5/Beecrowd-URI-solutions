#include<bits/stdc++.h>
using namespace std;
int main()
{
    int points, ans;
    cin >> points;
    if(points == 3)
    {
        ans = 1;
    }
    else
    {
        ans = points - 2;
    }
    cout << ans << endl;
    return 0;
}