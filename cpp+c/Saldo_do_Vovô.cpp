#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days, cur,tk;
    int min = INT_MAX;
    cin >> days >> cur;

    while(days--)
    {
        cin >> tk;
        cur += tk;
        if(min > cur) min = cur;
    }
    cout << min << endl;
    return 0;
}